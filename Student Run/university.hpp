#pragma once

// headers - basics
#include "utils.hpp"

void drawUniversity() {
	glPushMatrix();

	glTranslated(universityHorizontalPosition, 0.0, 0.0);

	drawRectangle(50.0f, 20.0f, 670.0f, 400.0f, darkishGrayColor);

	for (int i = 0; i < 530; i += 30) {
		drawRectangle(120.0f + i, 45.0f, 140.0f + i, 80.0f, whiteishGrayColor);
	}
	
	drawRectangle(60.0f, 40.0f, 90.0f, 100.0f, universityDoorColor);
	drawCircle(65.0f, 65.0f, 3.0f, whiteishGrayColor);
	drawRectangle(65.0f, 64.0f, 80.0f, 66.0f, darkishGrayColor);
	
	for (int i = 0; i < 550; i += 40) {
		for (int j = 0; j < 200; j += 60) {
			drawRectangle(100.0f + i, 180.0f + j, 120.0f + i, 200.0f + j, universityWindowsColor);
			drawCircle(110.f + i, 200.0f + j, 10, universityWindowsColor);
			drawLine(110.f + i, 180.0f + j, 110.f + i, 210.f + j, blackColor, 2.0f);
			drawLine(100.0f + i, 195.0f + j, 120.0f + i, 195.0f + j, blackColor, 2.0f);
		}
	}

	for (int i = 0; i <630 ; i += 80) {
		drawRectangle(50.0f + i, 400.0f, 90.0f + i, 430.0f, darkishGrayColor);
	}
	
	glPopMatrix();
}