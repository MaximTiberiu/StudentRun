#pragma once

void moveUp()
{
	if (ok != 0)
	{
		if (j < 320)
		{
			contor = 1;
			j += 1;
		}

		glutPostRedisplay();
	}
}

void moveDown()
{
	if (ok != 0)
	{
		if (j > 0)
		{
			contor = -1;
			j -= 1;


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