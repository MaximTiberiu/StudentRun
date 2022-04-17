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

void studentPressLeft() {
	pausedGameState = gameState;
	pausedTime = totalTime;
	gameState = 5;
}

// start screen
void startScreenMoveUp() {
	if (selectedOptionVerticalPosition < 240) {
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
	if (selectedOptionVerticalPosition == 240) {
		gameState = 1;
		startClock();
	} else if (selectedOptionVerticalPosition == 200) {
		loadGame();
		startClock();
	} else if (selectedOptionVerticalPosition == 160) {
		gameState = 4;
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

// help screen
void helpScreenMoveUp() {
	if (selectedOptionVerticalPosition < 160) {
		selectedOptionPath = 1;
		selectedOptionVerticalPosition++;
	}

	glutPostRedisplay();
}

void helpScreenMoveDown() {
	if (selectedOptionVerticalPosition > 120) {
		selectedOptionPath = -1;
		selectedOptionVerticalPosition--;
	}

	glutPostRedisplay();
}

void helpScreenSelectOption() {
	if (selectedOptionVerticalPosition == 160) {
		gameState = 0;
	} else {
		exit(0);
	}
}

// pause screen
void pauseScreenMoveUp() {
	if (selectedOptionVerticalPosition < 240) {
		selectedOptionPath = 1;
		selectedOptionVerticalPosition++;
	}

	glutPostRedisplay();
}

void pauseScreenMoveDown() {
	if (selectedOptionVerticalPosition > 120) {
		selectedOptionPath = -1;
		selectedOptionVerticalPosition--;
	}

	glutPostRedisplay();
}

void pauseScreenSelectOption() {
	if (selectedOptionVerticalPosition == 240) {
		gameState = pausedGameState;
		startClock();
	}
	else if (selectedOptionVerticalPosition == 200) {
		saveGame();
		gameState = pausedGameState;
		startClock();
	}
	else if (selectedOptionVerticalPosition == 160) {
		resetGlobalVars();
		gameState = 0;
	}
	else {
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
		case GLUT_KEY_LEFT:
			studentPressLeft();
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

void helpScreenKeyboardController(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_UP:
		helpScreenMoveUp();
		break;
	case GLUT_KEY_DOWN:
		helpScreenMoveDown();
		break;
	case GLUT_KEY_RIGHT:
		helpScreenSelectOption();
		break;
	}
}

void pauseScreenKeyboardController(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_UP:
		pauseScreenMoveUp();
		break;
	case GLUT_KEY_DOWN:
		pauseScreenMoveDown();
		break;
	case GLUT_KEY_RIGHT:
		pauseScreenSelectOption();
		break;
	}
}