#pragma once

void moveUp()
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

void moveDown()
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
	}
}