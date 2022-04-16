#pragma once

// headers - basics 
#include "utils.hpp"

void drawMetroSign() {
	glPushMatrix();

	glTranslated(metroSignHorizontalPosition, metroSignVerticalPositon, 0.0);

	// metro sign box
	drawRectangle(-45, -15, -15, 15, whiteColor);

	// metro sign text
	renderString(-40, -10, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"M", blueColor);

	glPopMatrix();
}