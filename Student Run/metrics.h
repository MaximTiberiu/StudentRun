#pragma once

// libraries
#include <iostream>
#include <string>

// headers
#include "globals.h"
#include "utils.h"
#include "colors.h"

void startClock() {
	startTime = clock();
}

void displayScore() {
	std::string textToDisplay = "Score: ";
	textToDisplay = textToDisplay + std::to_string(score);

	unsigned char scoreText[256];
	std::copy(textToDisplay.begin(), textToDisplay.end(), scoreText);
	scoreText[textToDisplay.length()] = 0;

	renderString(-75.0f, 425.0f, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)scoreText, black);
}

void displayTime() {

	int time = (int)(clock() - startTime) / CLOCKS_PER_SEC;

	std::string textToDisplay = "Time: ";
	textToDisplay = textToDisplay + std::to_string(time) + " sec";

	unsigned char timeText[256];
	std::copy(textToDisplay.begin(), textToDisplay.end(), timeText);
	timeText[textToDisplay.length()] = 0;

	renderString(450.0f, 425.0f, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)timeText, black);

}