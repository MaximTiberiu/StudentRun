#pragma once

// libraries
#include <iostream>
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
		totalTime = (int)(clock() - startTime) / CLOCKS_PER_SEC;
	}

	std::string textToDisplay = "Time: ";
	textToDisplay = textToDisplay + std::to_string(totalTime) + " sec";

	unsigned char timeText[256];
	std::copy(textToDisplay.begin(), textToDisplay.end(), timeText);
	timeText[textToDisplay.length()] = 0;

	renderString(450.0f, 425.0f, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)timeText, blackColor);
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