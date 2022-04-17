#pragma once

// libraries
#include <iostream>
#include <fstream>
#include <string>

// headers - basics 
#include "utils.hpp"

void startClock() {
	startTime = clock();
}

void displayScore() {
	std::string textToDisplay = "Score: ";
	textToDisplay = textToDisplay + std::to_string(score);

	unsigned char scoreText[256];
	std::copy(textToDisplay.begin(), textToDisplay.end(), scoreText);
	scoreText[textToDisplay.length()] = 0;

	renderString(-75.0f, 425.0f, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)scoreText, blackColor);
}

void displayTime() {

	if (!isGameOver) {
		totalTime = ((int)(clock() - startTime) / CLOCKS_PER_SEC) + pausedTime;
	}

	std::string textToDisplay = "Time: ";
	textToDisplay = textToDisplay + std::to_string(totalTime) + " sec";

	unsigned char timeText[256];
	std::copy(textToDisplay.begin(), textToDisplay.end(), timeText);
	timeText[textToDisplay.length()] = 0;

	renderString(450.0f, 425.0f, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)timeText, blackColor);
}

void displayCurrentScore() {

	std::string textToDisplay = "Current Time: ";
	textToDisplay = textToDisplay + std::to_string(totalTime) + " sec";

	unsigned char timeText[256];
	std::copy(textToDisplay.begin(), textToDisplay.end(), timeText);
	timeText[textToDisplay.length()] = 0;

	renderString(100.0f, 400.0f, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)timeText, blueColor);
}

void displayHighestScore() {

	std::ifstream in("score.txt");
	int highestScore;
	in >> highestScore;
	in.close();

	std::string textToDisplay = "Best Time: ";
	textToDisplay = textToDisplay + std::to_string(highestScore) + " sec";

	unsigned char timeText[256];
	std::copy(textToDisplay.begin(), textToDisplay.end(), timeText);
	timeText[textToDisplay.length()] = 0;

	renderString(100.0f, 380.0f, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)timeText, blueColor);
}

void addMetroStopBarScore() {
	if ((currentPointerPosition >= leftBarMargin && currentPointerPosition < redBar) || (currentPointerPosition >= secondOrangeBar && currentPointerPosition <= rightBarMargin)) {
		score += 250;
	} else if ((currentPointerPosition >= redBar && currentPointerPosition < firstOrangeBar) || (currentPointerPosition >= greenBar && currentPointerPosition < secondOrangeBar)) {
		score += 500;
	} else if ((currentPointerPosition >= firstOrangeBar && currentPointerPosition < greenBar)) {
		score += 1000;
	}
}

void updateHighestScore() {
	std::ifstream in("score.txt");
	int highestScore;
	in >> highestScore;
	in.close();

	if (totalTime < highestScore || totalTime != 0) {
		highestScore = totalTime;
	}

	std::ofstream out("score.txt");
	out << highestScore;
	out.close();
}

void saveGame() {
	std::ofstream out("save.txt");
	
	// metrics
	out << score << "\n";
	out << pausedTime << "\n";

	// game
	out << isGameOver << "\n";
	out << pausedGameState << "\n";

	// student
	out << studentVerticalPosition << "\n";
	out << studentPath << "\n";

	// obstacle
	out << obstacleHorizontalPosition << "\n";
	out << obstacleVerticalPositon << "\n";

	// metro sign
	out << metroSignHorizontalPosition << "\n";
	out << metroSignVerticalPositon << "\n";
	out << isMetroSignCollisionEnabled << "\n";

	// bottle
	out << bottleHorizontalPosition << "\n";
	out << bottleVerticalPositon << "\n";
	out << isBottleCollisionEnabled << "\n";

	// metro stop bar sign
	out << metroStopBarSignHorizontalPosition << "\n";
	out << metroStopBarSignVerticalPosition << "\n";
	out << isMetroStopBarSignCollisionEnabled << "\n";
	out << isMetroStopBarSignActive << "\n";

	// screens
	out << selectedOptionVerticalPosition << "\n";
	out << selectedOptionPath << "\n";

	// pointer
	out << currentPointerPosition << "\n";

	// university
	out << universityHorizontalPosition << "\n";
	out << universityVerticalPositon << "\n";
	out << isUniversityCollisionEnabled << "\n";

	out.close();
}

void loadGame() {
	std::ifstream in("save.txt");

	// metrics
	in >> score;
	in >> totalTime;

	// game
	in >> isGameOver;
	in >> gameState;

	// student
	in >> studentVerticalPosition;
	in >> studentPath;

	// obstacle
	in >> obstacleHorizontalPosition;
	in >> obstacleVerticalPositon;

	// metro sign
	in >> metroSignHorizontalPosition;
	in >> metroSignVerticalPositon;
	in >> isMetroSignCollisionEnabled;

	// bottle
	in >> bottleHorizontalPosition;
	in >> bottleVerticalPositon;
	in >> isBottleCollisionEnabled;

	// metro stop bar sign
	in >> metroStopBarSignHorizontalPosition;
	in >> metroStopBarSignVerticalPosition;
	in >> isMetroStopBarSignCollisionEnabled;
	in >> isMetroStopBarSignActive;

	// screens
	in >> selectedOptionVerticalPosition;
	in >> selectedOptionPath;

	// pointer
	in >> currentPointerPosition;

	// university
	in >> universityHorizontalPosition;
	in >> universityVerticalPositon;
	in >> isUniversityCollisionEnabled;

	in.close();
}