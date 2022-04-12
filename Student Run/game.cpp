// libraries
#include <iostream>
#include<windows.h>

// headers
#include "mainbackground.hpp"
#include "metrobackground.hpp"
#include "student.hpp"
#include "appsettings.hpp"
#include "controllers.hpp"
#include "obstacles.hpp"
#include "bottles.hpp"
#include "metrosign.hpp"


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

	FundalPrincipal();
	//metroBackground();
	drawStudent();
	drawObstacle();
	drawMetroSign();
	drawMgBottle();

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