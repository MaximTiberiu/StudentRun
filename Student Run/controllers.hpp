#pragma once


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

void selectOption() {
	if (selectedOptionVerticalPosition == 200) {
		gameState = 1;
		startClock();
	} else if (selectedOptionVerticalPosition == 160) {
		// TODO: Load Game
	} else {
		exit(0);
	}
}


// keyboard controllers
void startScreenKeyboardController(int key, int x, int y) {
	switch (key) {
		case GLUT_KEY_UP:
			startScreenMoveUp();
			break;
		case GLUT_KEY_DOWN:
			startScreenMoveDown();
			break;
		case GLUT_KEY_RIGHT:
			selectOption();
			break;
	}
}

void studentKeyboardController(int key, int x, int y) {
	switch (key) {
		case GLUT_KEY_UP:
			studentMoveUp();
			break;
		case GLUT_KEY_DOWN:
			studentMoveDown();
			break;
	}
}