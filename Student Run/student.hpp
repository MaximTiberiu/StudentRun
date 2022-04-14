#pragma once

// headers - basics
#include "utils.hpp"

void drawStudent() {
	glPushMatrix();
	glTranslated(0.0, studentVerticalPosition, 0.0);
	drawRectangle(-45, -15, 45, 15, greenColor);
	glPopMatrix();
}

void studentController() {
	if (studentPath == 1 && (studentVerticalPosition != 160 && studentVerticalPosition != 320)) {
		studentVerticalPosition = studentVerticalPosition + 1;
	} else if (studentPath == -1 && (studentVerticalPosition != 160 && studentVerticalPosition != 0)) {
		studentVerticalPosition = studentVerticalPosition - 1;
	} else {
		studentPath = 0;
	}
}