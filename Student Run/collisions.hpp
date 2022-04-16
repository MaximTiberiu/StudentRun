#pragma once

// headers - basics
#include "utils.hpp"

void generateNewObstacleVerticalPosition() {
	obstacleVerticalPositon = verticalPositions[rand() % 3];
}

void generateNewMetroSignVerticalPosition() {
	metroSignVerticalPositon = verticalPositions[rand() % 3];
}

void generateNewBottleVerticalPosition() {
	bottleVerticalPositon = verticalPositions[rand() % 3];
}

void generateNewMetroStopBarSignVerticalPosition() {
	metroStopBarSignVerticalPosition = verticalPositions[rand() % 3];
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

		if (isMetroSignCollisionEnabled) {
			metroSignHorizontalPosition -= constSpeed;
		}

		if (metroSignHorizontalPosition < -150) {
			generateNewMetroSignVerticalPosition();
			metroSignHorizontalPosition = 800;
			isMetroSignCollisionEnabled = false;
		}

		glutPostRedisplay();
	}
	else {
		gameState = 2;
	}
}

void bottleCollision() {
	if (bottleVerticalPositon != studentVerticalPosition || (bottleHorizontalPosition > 90 || bottleHorizontalPosition < -90)) {
		if (isBottleCollisionEnabled) {
			bottleHorizontalPosition -= constSpeed;
		}

		if (bottleHorizontalPosition < -150) {
			generateNewBottleVerticalPosition();
			bottleHorizontalPosition = 800;
			isBottleCollisionEnabled = false;
		}

		glutPostRedisplay();
	}
	else {
		score += 200;
		bottleHorizontalPosition = 800;
		generateNewBottleVerticalPosition();
	}
}

void metroStopBarSignCollision() {
	if (metroStopBarSignVerticalPosition != studentVerticalPosition || (metroStopBarSignHorizontalPosition > 90 || metroStopBarSignHorizontalPosition < -90)) {

		if (isMetroStopBarSignCollisionEnabled) {
			metroStopBarSignHorizontalPosition -= constSpeed;
		}

		if (metroStopBarSignHorizontalPosition < -150) {
			generateNewMetroStopBarSignVerticalPosition();
			metroStopBarSignHorizontalPosition = 800;
			isMetroStopBarSignCollisionEnabled = false;
		}

		glutPostRedisplay();
	}
	else {
		isMetroStopBarSignActive = true;
		isMetroStopBarSignCollisionEnabled = false;
		generateNewMetroStopBarSignVerticalPosition();
		metroStopBarSignHorizontalPosition = 800;
	}
}

void collisions() {

	// obstacle collision
	obstacleCollision();

	// metro sign collision
	metroSignCollision();

	// bottle collision
	bottleCollision();

	// metro stop bar sign
	metroStopBarSignCollision();
}