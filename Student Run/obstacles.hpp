#pragma once


void drawObstacle()
{
	glPushMatrix();
	glTranslated(loc_vert, height, 0.0);
	drawRectangle(-45, -15, 45, 15, white);
	glPopMatrix();
}