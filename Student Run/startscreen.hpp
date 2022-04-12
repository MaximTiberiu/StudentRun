#pragma once

#include "globals.hpp"
#include "colors.hpp"
#include "utils.hpp"


void drawSelectedOption() {
	glPushMatrix();
	glTranslated(0.0, selectedOptionVerticalPosition, 0.0);
	renderString(200, 0, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)">>>", blackColor);
	glPopMatrix();
}

void selectedOptionController() {
	if (selectedOptionPath == 1 && (selectedOptionVerticalPosition != 160 && selectedOptionVerticalPosition != 200))
	{
		selectedOptionVerticalPosition++;
	}
	else if (selectedOptionPath == -1 && (selectedOptionVerticalPosition != 160 && selectedOptionVerticalPosition != 120))
	{
		selectedOptionVerticalPosition--;
	}
	else {
		selectedOptionPath = 0;
	}
}

void startScreen()
{
	renderString(250, 200, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"START GAME", blackColor);
	renderString(255, 160, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"LOAD GAME", blackColor);
	renderString(255, 120, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"QUIT GAME", blackColor);
}