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

	if (obstacleVerticalPositon != studentVerticalPosition || (obstacleHorizontalPosition > 90 || obstacleHorizontalPosition < -90))
	{

		obstacleHorizontalPosition -= constSpeed;

		if (obstacleHorizontalPosition < -150)
		{
			score += 100;
			generateNewObstacleVerticalPosition();
			std::cout << "Score:  " << score << "\n";
			obstacleHorizontalPosition = 800;
		}

		if (score >= scoreStep && scoreStep <= 15000)
		{
			constSpeed += 0.1;
			scoreStep += 1000;
		}

		glutPostRedisplay();
	}
	else {
		isGameOver = true;
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

	studentController();

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