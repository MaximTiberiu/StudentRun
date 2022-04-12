#pragma once


void drawObstacle()
{
	glPushMatrix();
	glTranslated(obstacleHorizontalPosition, obstacleVerticalPositon, 0.0);
	drawRectangle(-45, -15, 45, 15, whiteColor);
	glPopMatrix();
}

void generateNewObstacleVerticalPosition() 
{
	obstacleVerticalPositon = verticalPositions[rand() % 3];
}