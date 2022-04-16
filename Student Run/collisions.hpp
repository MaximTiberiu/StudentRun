#pragma once

// headers - basics
#include "utils.hpp"

void generateNewObstacleVerticalPosition() {
	obstacleVerticalPositon = verticalPositions[rand() % 3];
}

void generateNewMetroSignVerticalPosition() {
	metroSignVerticalPositon = verticalPositions[rand() % 3];
}

void obstacleCollision() {
	if (obstacleVerticalPositon != studentVerticalPosition || (obstacleHorizontalPosition > 90 || obstacleHorizontalPosition < -90)) {

		obstacleHorizontalPosition -= constSpeed;

		if (obstacleHorizontalPosition < -150) {
			score += 100;
			generateNewObstacleVerticalPosition();
			obstacleHorizontalPosition = 800;
		}

		if (score >= scoreStep && scoreStep <= 15000) {
			constSpeed += 0.1;
			scoreStep += 1000;
		}

		glutPostRedisplay();
	}
	else {
		isGameOver = true;
		gameState = 3;
	}
}

void metroSignCollision() {
	if (metroSignVerticalPositon != studentVerticalPosition || (metroSignHorizontalPosition > 90 || metroSignHorizontalPosition < -90)) {

		metroSignHorizontalPosition -= constSpeed;

		if (metroSignHorizontalPosition < -150) {
			// score += 100;
			generateNewMetroSignVerticalPosition();
			metroSignHorizontalPosition = 800;
		}

		glutPostRedisplay();
	}
	else {
		gameState = 2;
	}
}

void collisions() {

	// obstacle collision
	obstacleCollision();

	// metro sign collision
	metroSignCollision();

}