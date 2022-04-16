#pragma once

// headers - basics 
#include "utils.hpp"


// student
void studentMoveUp() {
	if (!isGameOver) {
		if (studentVerticalPosition < 320) {
			studentPath = 1;
			studentVerticalPosition += 1;
		}

		glutPostRedisplay();
	}
}

void studentMoveDown() {
	if (!isGameOver) {
		if (studentVerticalPosition > 0) {
			studentPath = -1;
			studentVerticalPosition -= 1;
		}

		glutPostRedisplay();
	}
}

void studentPressRight() {
	if (isMetroStopBarSignActive) {
		speedFactor = 0;
		addMetroStopBarScore();
		isMetroStopBarSignActive = false;
		gameState = 1;
		speedFactor = 0.3;
	}
}

// start screen
void startScreenMoveUp() {
	if (selectedOptionVerticalPosition < 200) {
		selectedOptionPath = 1;
		selectedOptionVerticalPosition++;
	}

	glutPostRedisplay();
}

void startScreenMoveDown() {
	if (selectedOptionVerticalPosition > 120) {
		selectedOptionPath = -1;
		selectedOptionVerticalPosition--;
	}

	glutPostRedisplay();
}

void startScreenSelectOption() {
	if (selectedOptionVerticalPosition == 200) {
		gameState = 1;
		startClock();
	} else if (selectedOptionVerticalPosition == 160) {
		// TODO: Load Game
	} else {
		exit(0);
	}
}

// finish screen
void finishScreenMoveUp() {
	if (selectedOptionVerticalPosition < 200) {
		selectedOptionPath = 1;
		selectedOptionVerticalPosition++;
	}

	glutPostRedisplay();
}

void finishScreenMoveDown() {
	if (selectedOptionVerticalPosition > 120) {
		selectedOptionPath = -1;
		selectedOptionVerticalPosition--;
	}

	glutPostRedisplay();
}

void finishScreenSelectOption() {
	if (selectedOptionVerticalPosition == 200) {
		resetGlobalVars();
		gameState = 1;
		startClock();
	} else if (selectedOptionVerticalPosition == 160) {
		resetGlobalVars();
		gameState = 0;
	} else {
		exit(0);
	}
}


// keyboard controllers
void studentKeyboardController(int key, int x, int y) {
	switch (key) {
		case GLUT_KEY_UP:
			studentMoveUp();
			break;
		case GLUT_KEY_DOWN:
			studentMoveDown();
			break;
		case GLUT_KEY_RIGHT:
			studentPressRight();
			break;
	}
}

void startScreenKeyboardController(int key, int x, int y) {
	switch (key) {
		case GLUT_KEY_UP:
			startScreenMoveUp();
			break;
		case GLUT_KEY_DOWN:
			startScreenMoveDown();
			break;
		case GLUT_KEY_RIGHT:
			startScreenSelectOption();
			break;
	}
}

void finishScreenKeyboardController(int key, int x, int y) {
	switch (key) {
		case GLUT_KEY_UP:
			finishScreenMoveUp();
			break;
		case GLUT_KEY_DOWN:
			finishScreenMoveDown();
			break;
		case GLUT_KEY_RIGHT:
			finishScreenSelectOption();
			break;
	}
}