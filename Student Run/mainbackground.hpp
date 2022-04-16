#pragma once

// headers - basics 
#include "utils.hpp"

// headers - elements
#include "student.hpp"
#include "metrosign.hpp"
#include "bottles.hpp"
#include "obstacles.hpp"

// headers - metrics
#include "metrics.hpp"

// headers - collisions
#include "collisions.hpp"


void mainBackground(void) {
	// crosswalk - gray
	drawRectangle(-100, -140, 700, 0, crosswalkGrayColor);

	// crosswalk - white
	drawRectangle(-80, -130, -40, -10, whiteColor);
	drawRectangle(0, -130, 40, -10, whiteColor);
	drawRectangle(80, -130, 120, -10, whiteColor);
	drawRectangle(160, -130, 200, -10, whiteColor);
	drawRectangle(240, -130, 280, -10, whiteColor);
	drawRectangle(320, -130, 360, -10, whiteColor);
	drawRectangle(400, -130, 440, -10, whiteColor);
	drawRectangle(480, -130, 520, -10, whiteColor);
	drawRectangle(560, -130, 600, -10, whiteColor);
	drawRectangle(640, -130, 680, -10, whiteColor);

	// sky
	drawRectangle(-100, 50, 700, 460, skyColor);

	// grass
	drawRectangle(-100, 0, 700, 50, greenColor);

	// benches
	// first bench
	drawRectangle(-30, 40, 70, 70, benchLightColor);
	drawParallelogram(-50, 20, 50, 20, 70, 40, -30, 40, benchDarkColor);
	drawLine(-47, 0, -47, 20, benchDarkColor, 6);
	drawLine(47, 0, 47, 20, benchDarkColor, 6);
	drawLine(67, 10, 67, 40, benchDarkColor, 6);


	// second bench 
	drawRectangle(270, 40, 370, 70, benchLightColor);
	drawParallelogram(250, 20, 350, 20, 370, 40, 270, 40, benchDarkColor);
	drawLine(253, 0, 253, 20, benchDarkColor, 6);
	drawLine(347, 0, 347, 20, benchDarkColor, 6);
	drawLine(367, 10, 367, 40, benchDarkColor, 6);

	// third bench
	drawRectangle(570, 40, 670, 70, benchLightColor);
	drawParallelogram(550, 20, 650, 20, 670, 40, 570, 40, benchDarkColor);
	drawLine(553, 0, 553, 20, benchDarkColor, 6);
	drawLine(647, 0, 647, 20, benchDarkColor, 6);
	drawLine(667, 10, 667, 40, benchDarkColor, 6);

	// traffic light
	// pillar
	drawRectangle(680, 0, 690, 230, blackColor);
	drawRectangle(690, 230, 660, 220, blackColor);
	drawRectangle(630, 185, 660, 265, blackColor);

	// red light
	drawRectangle(635, 240, 655, 260, redColor);
	
	// yellow light
	drawRectangle(635, 215, 655, 235, yellowColor);
	
	// green light
	drawRectangle(635, 190, 655, 210, greenColor);
}

void mainBackgroundDisplayFunction() {
	mainBackground();
	drawStudent();

	if (score % 400 == 0 && score != 0) {
		drawMetroSign();
	}

	if (score % 500 == 0 && score != 0) {
		if (bottleVerticalPositon == verticalPositions[0]) {
			drawCaBottle();
		} else if (bottleVerticalPositon == verticalPositions[1]) {
			drawMgBottle();
		} else if (bottleVerticalPositon == verticalPositions[2]) {
			drawVitCBottle();
		}
	}

	if (obstacleVerticalPositon == verticalPositions[0]) {
		drawMainBackgroundSewerCapObstacle();
	}
	else if (obstacleVerticalPositon == verticalPositions[1] || obstacleVerticalPositon == verticalPositions[2]) {
		drawMainBackgroundBirdObstacle();
	}

	studentController();

	collisions();

	displayScore();
	displayTime();
}
