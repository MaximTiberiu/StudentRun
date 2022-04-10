// libraries
#include <iostream>
#include<windows.h>

// headers
#include "metro.h"
#include "student.h"
#include "appsettings.h"
#include "controllers.h"
#include "obstacles.h"
#include "bottles.h"
#include "metroSign.h"


void startgame(void)
{

	if (height != j || (loc_vert > 90 || loc_vert < -90))
	{

		if (i < -380)
		{
			i = 0;
		}
		i = i - 2 * timp;

		loc_vert -= timp;

		if (loc_vert < -150)
		{
			score += 100;
			height = vector[rand() % 3];
			std::cout << "Score:  " << score << "\n";
			loc_vert = 800;
		}

		if (score >= pct && pct <= 15000)
		{
			timp += 0.1;
			pct += 1000;
		}

		glutPostRedisplay();
	}
	else {
		ok = 0;
	}
}


void FundalMetrou(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	metroBackground();
	drawStudent();
	drawObstacle();
	drawMetroSign();

	if (contor == 1 && (j != 160 && j != 320))
		j = j + 1;
	else if (contor == -1 && (j != 160 && j != 0))
		j = j - 1;
	else {
		contor = 0;

	}

	startgame();

	displayScore();
	displayTime();

	glutPostRedisplay();
	glutSwapBuffers();
	glFlush();
}


int main(int argc, char** argv)
{
	loadAppSettings(argc, argv);

	glutDisplayFunc(FundalMetrou);
	glutReshapeFunc(reshapeWindow);
	glutSpecialFunc(keyboardController);

	glutMainLoop();
}