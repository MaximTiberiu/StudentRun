#pragma once

// headers - basics 
#include "utils.hpp"

Color birdColor(0.51f, 0.52f, 0.52f);
Color birdWingColor(0.3f, 0.3f, 0.3f);
Color birdBeakColor(0.84f, 0.17f, 0.0f);
Color sewerColor(0.54f, 0.57f, 0.57f);
Color treeTrunkColor(0.33f, 0.14f, 0.01f);
Color treeLeavesColor(0.08f, 0.32f, 0.02f);
Color metroBarHandleColor(0.09f, 0.25f, 0.53f);

void drawMainObstacle() {
	//glPushMatrix();
	//glTranslated(obstacleHorizontalPosition, obstacleVerticalPositon, 0.0);
	
	//bird
	drawRectangle(570, 363, 600, 400, birdColor);	//bird
	drawRectangle(587, 378, 597, 392, birdWingColor);	//wing
	glLineWidth(1);
	drawHollowRectangle(587, 378, 597, 392, blackColor);
	drawRectangle(560, 375, 570, 385, birdBeakColor);	//beak
	drawCircle(578, 387, 5, whiteColor);
	drawCircle(576, 385, 2, blackColor);
	//glPopMatrix();


	//sewer cap
	glLineWidth(2);
	drawCircle(200, -60, 45, sewerColor);
	drawHollowCircle(200, -60, 45, blackColor);
	drawHollowCircle(200, -60, 35, blackColor);
	drawCircle(200, -60, 5, blackColor);

	drawLine(200, -60, 168, -45, blackColor, 2);
	drawLine(200, -60, 202, -25, blackColor, 2);
	drawLine(200, -60, 182, -29, blackColor, 2);
	drawLine(200, -60, 165, -61, blackColor, 2);
	drawLine(200, -60, 168, -76, blackColor, 2);
	drawLine(200, -60, 176, -86, blackColor, 2);
	drawLine(200, -60, 189, -93, blackColor, 2);
	drawLine(200, -60, 203, -95, blackColor, 2);
	drawLine(200, -60, 218, -90, blackColor, 2);
	drawLine(200, -60, 228, -80, blackColor, 2);
	drawLine(200, -60, 234, -67, blackColor, 2);
	drawLine(200, -60, 234, -52, blackColor, 2);
	drawLine(200, -60, 228, -39, blackColor, 2);
	drawLine(200, -60, 216, -29, blackColor, 2);

	//tree
	drawRectangle(400, 50, 435, 160, treeTrunkColor);
	drawCircle(390,150, 43, treeLeavesColor);
	drawCircle(445,150, 43, treeLeavesColor);
	drawCircle(398,197, 35, treeLeavesColor);
	drawCircle(440,197, 35, treeLeavesColor);
	drawCircle(418,240, 32, treeLeavesColor);
}

void drawMetroObstacle() {

	//handle metro
	drawLine(500, 350, 515, 350, blackColor, 12);
	drawRectangle(505, 328, 510, 345, metroBarHandleColor);
	glLineWidth(5);
	drawHollowTriangle(507, 328, 492, 300, 521, 300, metroBarHandleColor);
}

void generateNewObstacleVerticalPosition() {
	obstacleVerticalPositon = verticalPositions[rand() % 3];
}