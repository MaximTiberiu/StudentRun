#pragma once

// headers - basics
#include "utils.hpp"

void movePointer() {

	currentPointerPosition +=  speedFactor;

	if (currentPointerPosition < leftBarMargin + 20.0) {
		speedFactor = 0.3;
	} else if (currentPointerPosition > rightBarMargin + 20.0) {
		speedFactor = -0.3;
	}

	glutPostRedisplay();
}

void drawMetroStopBar() {
	drawRectangle(leftBarMargin, -95.0f, redBar, -70.0f, redColor);
	drawRectangle(redBar, -95.0f, firstOrangeBar, -70.0f, orangeColor);
	drawRectangle(firstOrangeBar, -95.0f, greenBar, -70.0f, greenColor);
	drawRectangle(greenBar, -95.0f, secondOrangeBar, -70.0f, orangeColor);
	drawRectangle(secondOrangeBar, -95.0f, rightBarMargin, -70.0f, redColor);

	glPushMatrix();
	glTranslated(currentPointerPosition, 0.0f, 0.0f);
	
	glPushMatrix();
	drawTriangle(leftBarMargin - 10, -60.0f, leftBarMargin + 10, -60.0f, leftBarMargin, -95.0f, blackColor);
	glPopMatrix();

	glutSwapBuffers();
	glPopMatrix();

	glutIdleFunc(movePointer);
}
