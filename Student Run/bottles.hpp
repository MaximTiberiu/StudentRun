#pragma once

void drawCaBottle() {
	drawRectangle(0.0f,0.0f,20.0f,20.0f,bottleCalciumColor);
	drawRectangle(0.0f, 20.0f, 20.0f, 30.0f, whiteColor);
	renderString(5.0f, 23.0f, GLUT_BITMAP_TIMES_ROMAN_10 ,(const unsigned char*)"Ca", labelWritingCalciumColor);
	drawRectangle(0.0f, 30.0f, 20.0f, 40.0f, bottleCalciumColor);
	drawRectangle(2.0f, 40.0f, 18.0f, 45.0f, bottleCalciumColor);
	drawRectangle(2.0f, 45.0f, 18.0f, 49.0f, blackColor);
}

void drawMgBottle() {
	drawRectangle(0.0f, 60.0f, 20.0f, 80.0f, bottleMagnesiumColor);
	drawRectangle(0.0f, 80.0f, 20.0f, 90.0f, whiteColor);
	renderString(5.0f, 83.0f, GLUT_BITMAP_TIMES_ROMAN_10, (const unsigned char*)"Mg", labelWritingMagnesiumColor);
	drawRectangle(0.0f, 90.0f, 20.0f, 100.0f, bottleMagnesiumColor);
	drawRectangle(2.0f, 100.0f, 18.0f, 105.0f, bottleMagnesiumColor);
	drawRectangle(2.0f, 105.0f, 18.0f, 109.0f, blackColor);
}

void drawVitCBottle() {
	drawRectangle(0.0f, 120.0f, 20.0f, 140.0f, bottleVitCColor);
	drawRectangle(0.0f, 140.0f, 20.0f, 150.0f, whiteColor);
	renderString(5.0f, 143.0f, GLUT_BITMAP_TIMES_ROMAN_10, (const unsigned char*)"C+", bottleVitCColor);
	drawRectangle(0.0f, 150.0f, 20.0f, 160.0f, bottleVitCColor);
	drawRectangle(2.0f, 160.0f, 18.0f, 165.0f, bottleVitCColor);
	drawRectangle(2.0f, 165.0f, 18.0f, 169.0f, blackColor);
}