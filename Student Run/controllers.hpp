#pragma once

void moveUp()
{
	if (gameState == 0) {
		if (selectedOptionVerticalPosition < 200) {
			selectedOptionPath = 1;
			selectedOptionVerticalPosition++;
		}

		glutPostRedisplay();
	}
	else if (gameState == 1)
	{
		if (!isGameOver)
		{
			if (studentVerticalPosition < 320)
			{
				studentPath = 1;
				studentVerticalPosition += 1;
			}

			glutPostRedisplay();
		}
	}
}

void moveDown()
{
	if (gameState == 0) {
		if (selectedOptionVerticalPosition > 120) {
			selectedOptionPath = -1;
			selectedOptionVerticalPosition--;
		}

		glutPostRedisplay();
	}
	else if (gameState == 1)
	{
		if (!isGameOver)
		{
			if (studentVerticalPosition > 0)
			{
				studentPath = -1;
				studentVerticalPosition -= 1;
			}

			glutPostRedisplay();
		}
	}
}

void keyboardController(int key, int x, int y)
{
	switch (key) 
	{
		case GLUT_KEY_UP:
			moveUp();
			break;
		case GLUT_KEY_DOWN:
			moveDown();
			break;
		case GLUT_KEY_RIGHT:
			if (gameState == 0) 
			{
				gameState = 1;
				startClock();
			}
			break;

	}
}