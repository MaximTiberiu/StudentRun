#pragma once

// headers - basics
#include "utils.hpp"
Color studentColor(1.0f, 0.9f, 0.86f);

void drawStudent() {
	glPushMatrix();
	glTranslated(0.0, studentVerticalPosition, 0.0);
	
	//head
	drawCircle(-35, 0, 15, studentColor);
	
	//eyes
	drawCircle(-40, 5, 1.5, blackColor);
	drawCircle(-30, 5, 1.5, blackColor);
	
	//mouth
	drawLine(-37, -5, -33, -5, blackColor, 1);
	
	//neck
	drawRectangle(-38.5, -20, -31.5, -15, studentColor);
	
	//body
	drawRectangle(-50, -60, -20, -20, redColor);
	
	//legs
	drawRectangle(-50, -90, -40, -60, blueColor);
	drawRectangle(-30, -90, -20, -60, blueColor);
	
	//shoes
	drawRectangle(-55, -100, -40, -90, blackColor);
	drawRectangle(-30, -100, -15, -90, blackColor);
	
	//hands
	drawParallelogram(-70, -40, -60, -50, -50, -30, -50, -20, studentColor);
	drawParallelogram(0, -40, -10, -50, -20, -30, -20, -20, studentColor);
	
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