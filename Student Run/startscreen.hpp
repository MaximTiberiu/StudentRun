#pragma once

// headers - basics 
#include "utils.hpp"


void startScreenDrawSelectedOption() {
	glPushMatrix();
	glTranslated(0.0, selectedOptionVerticalPosition, 0.0);
	renderString(200, 0, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)">>>", blackColor);
	glPopMatrix();
}

void startScreenSelectedOptionController() {
	if (selectedOptionPath == 1 && (selectedOptionVerticalPosition != 160 && selectedOptionVerticalPosition != 200 && selectedOptionVerticalPosition != 240)) {
		selectedOptionVerticalPosition++;
	} else if (selectedOptionPath == -1 && (selectedOptionVerticalPosition != 200 && selectedOptionVerticalPosition != 160 && selectedOptionVerticalPosition != 120)) {
		selectedOptionVerticalPosition--;
	} else {
		selectedOptionPath = 0;
	}
}

void startScreen() {
	renderString(100, 440, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"Student Run. A connoisseur-only game.", redColor);
	renderString(255, 240, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"START GAME", blackColor);
	renderString(255, 200, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"LOAD GAME", blackColor);
	renderString(255, 160, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"HELP", blackColor);
	renderString(255, 120, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"QUIT GAME", blackColor);
	renderString(70, -90, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"Use Arrow keys to move up/down to choose an option.", blackColor);
	renderString(100, -130, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"Press right arrow key to select the option.", blackColor);
}

void startScreenDisplayFunction() {
	startScreen();
	startScreenSelectedOptionController();
	startScreenDrawSelectedOption();
}