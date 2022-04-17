#pragma once

// headers - basics 
#include "utils.hpp"


void finishScreenDrawSelectedOption() {
	glPushMatrix();
	glTranslated(0.0, selectedOptionVerticalPosition, 0.0);
	renderString(200, 0, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)">>>", blackColor);
	glPopMatrix();
}

void finishScreenSelectedOptionController() {
	if (selectedOptionPath == 1 && (selectedOptionVerticalPosition != 160 && selectedOptionVerticalPosition != 200)) {
		selectedOptionVerticalPosition++;
	} else if (selectedOptionPath == -1 && (selectedOptionVerticalPosition != 160 && selectedOptionVerticalPosition != 120)) {
		selectedOptionVerticalPosition--;
	} else {
		selectedOptionPath = 0;
	}
}

void finishScreen() {
	renderString(100, 440, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"Student Run. A connoisseur-only game.", redColor);
	if (isGameOver && score >= finalScore) {
		renderString(100, 420, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"WINNER!", orangeColor);
		displayCurrentScore();
	} else {
		renderString(100, 420, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"GAME OVER!", orangeColor);
	}
	
	displayHighestScore();

	renderString(250, 200, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"RESTART GAME", blackColor);
	renderString(255, 160, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"MAIN MENU", blackColor);
	renderString(255, 120, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"QUIT GAME", blackColor);
	renderString(70, -90, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"Use Arrow keys to move up/down to choose an option.", blackColor);
	renderString(100, -130, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"Press right arrow key to select the option.", blackColor);
}

void finishScreenDisplayFunction() {
	finishScreen();
	finishScreenSelectedOptionController();
	finishScreenDrawSelectedOption();
}