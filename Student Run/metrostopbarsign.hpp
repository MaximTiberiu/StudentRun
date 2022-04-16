#pragma once

// headers - basics 
#include "utils.hpp"

void drawMetroStopBarSign() {
	glPushMatrix();

	glTranslated(metroStopBarSignHorizontalPosition, metroStopBarSignVerticalPosition, 0.0);

	// metro stop bar sign box
	drawRectangle(-45, -15, -15, 15, redColor);

	// metro stop bar sign text
	renderString(-40, -10, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"?", whiteColor);

	glPopMatrix();
}