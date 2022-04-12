#pragma once

void drawStudent() {
	glPushMatrix();
	glTranslated(0.0, j, 0.0);
	drawRectangle(-45, -15, 45, 15, greenColor);
	glPopMatrix();
}