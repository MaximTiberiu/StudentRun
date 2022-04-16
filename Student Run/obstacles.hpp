#pragma once

// headers - basics 
#include "utils.hpp"

void drawMainBackgroundBirdObstacle() {
	glPushMatrix();
	
	glTranslated(obstacleHorizontalPosition, obstacleVerticalPositon, 0.0);
	
	// bird
	drawRectangle(-45, -15, -15, 18, birdColor);

	// wing
	drawRectangle(-28, 0, -18, 10, birdWingColor);
	glLineWidth(1);
	drawHollowRectangle(-28, 0, -18, 10, blackColor);

	// beak
	drawRectangle(-55, -8, -45, 3, birdBeakColor); 

	// eyes
	drawCircle(-37, 9, 5, whiteColor);
	drawCircle(-39, 7, 2, blackColor);

	glPopMatrix();
}

void drawMainBackgroundSewerCapObstacle() {
	glPushMatrix();

	glTranslated(obstacleHorizontalPosition, obstacleVerticalPositon, 0.0);

	glLineWidth(2);
	drawCircle(-45, -15, 45, sewerColor);
	drawHollowCircle(-45, -15, 45, blackColor);
	drawHollowCircle(-45, -15, 35, blackColor);
	drawCircle(-45, -15, 5, blackColor);

	glPopMatrix();
}

void drawMetroBackgroundPassengerObstacle() {
	glPushMatrix();

	glTranslated(obstacleHorizontalPosition, obstacleVerticalPositon, 0.0);

	//head
	drawCircle(-35, 0, 15, skinColor);

	//eyes
	drawCircle(-40, 5, 1.5, blackColor);
	drawCircle(-30, 5, 1.5, blackColor);

	//mouth
	drawLine(-37, -5, -33, -5, blackColor, 1);

	//neck
	drawRectangle(-38.5, -20, -31.5, -15, skinColor);

	//body
	drawRectangle(-50, -60, -20, -20, yellowColor);

	//legs
	drawRectangle(-50, -90, -40, -60, greenColor);
	drawRectangle(-30, -90, -20, -60, greenColor);

	//shoes
	drawRectangle(-55, -100, -40, -90, redColor);
	drawRectangle(-30, -100, -15, -90, redColor);

	//hands
	drawParallelogram(-70, -40, -60, -50, -50, -30, -50, -20, skinColor);
	drawParallelogram(0, -40, -10, -50, -20, -30, -20, -20, skinColor);

	glPopMatrix();
}