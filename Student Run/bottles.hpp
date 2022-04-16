#pragma once

// headers - basics 
#include "utils.hpp"

void drawCaBottle() {
	glPushMatrix();

	glTranslated(bottleHorizontalPosition, bottleVerticalPositon, 0.0);

	drawRectangle(0.0f, 0.0f, 20.0f, 20.0f,bottleCalciumColor);
	drawRectangle(0.0f, 20.0f, 20.0f, 30.0f, whiteColor);
	renderString(5.0f, 23.0f, GLUT_BITMAP_TIMES_ROMAN_10 ,(const unsigned char*)"Ca", labelWritingCalciumColor);
	drawRectangle(0.0f, 30.0f, 20.0f, 40.0f, bottleCalciumColor);
	drawRectangle(2.0f, 40.0f, 18.0f, 45.0f, bottleCalciumColor);
	drawRectangle(2.0f, 45.0f, 18.0f, 49.0f, blackColor);

	glPopMatrix();
}

void drawMgBottle() {
	glPushMatrix();

	glTranslated(bottleHorizontalPosition, bottleVerticalPositon, 0.0);

	drawRectangle(0.0f, 0.0f, 20.0f, 20.0f, bottleMagnesiumColor);
	drawRectangle(0.0f, 20.0f, 20.0f, 30.0f, whiteColor);
	renderString(5.0f, 23.0f, GLUT_BITMAP_TIMES_ROMAN_10, (const unsigned char*)"Mg", labelWritingMagnesiumColor);
	drawRectangle(0.0f, 30.0f, 20.0f, 40.0f, bottleMagnesiumColor);
	drawRectangle(2.0f, 40.0f, 18.0f, 45.0f, bottleMagnesiumColor);
	drawRectangle(2.0f, 45.0f, 18.0f, 49.0f, blackColor);
	
	glPopMatrix();
}

void drawVitCBottle() {
	glPushMatrix();

	glTranslated(bottleHorizontalPosition, bottleVerticalPositon, 0.0);

	drawRectangle(0.0f, 0.0f, 20.0f, 20.0f, bottleVitCColor);
	drawRectangle(0.0f, 20.0f, 20.0f, 30.0f, whiteColor);
	renderString(5.0f, 23.0f, GLUT_BITMAP_TIMES_ROMAN_10, (const unsigned char*)"C+", bottleVitCColor);
	drawRectangle(0.0f, 30.0f, 20.0f, 40.0f, bottleVitCColor);
	drawRectangle(2.0f, 40.0f, 18.0f, 45.0f, bottleVitCColor);
	drawRectangle(2.0f, 45.0f, 18.0f, 49.0f, blackColor);

	glPopMatrix();
}