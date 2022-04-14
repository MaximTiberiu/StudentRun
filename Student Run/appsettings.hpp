#pragma once

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
// #include "metrosign.hpp"
#include "startscreen.hpp"
#include "metrics.hpp"
#include "finishscreen.hpp"

void appInitialization()
{
	glClearColor(mainBackgroundColor.red, mainBackgroundColor.green, mainBackgroundColor.blue, 0.0f);
	glMatrixMode(GL_PROJECTION);
	glOrtho(leftMArgin, rightMargin, bottomMargin, topMargin, -1.0, 1.0);
	gameState = 0;
	// startClock();
}

void reshapeWindow(GLsizei width, GLsizei height)
{
	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(leftMArgin, rightMargin, bottomMargin, topMargin, -1.0, 1.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void loadAppSettings(int argc, char **argv) 
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("Student Run");

	appInitialization();
}

void mainDisplayFunction() {
	glClear(GL_COLOR_BUFFER_BIT);

	if (gameState == 0) {
		startScreenDisplayFunction();
	} else if (gameState == 1) {
		mainBackgroundDisplayFunction();
	} else if (gameState == 2) {
		// metro
	} else if (gameState == 3) {
		finishScreenDisplayFunction();
	}

	glutPostRedisplay();
	glutSwapBuffers();
	glFlush();
}

void mainSpecialFunction(int key, int x, int y) {
	if (gameState == 0) {
		startScreenKeyboardController(key, x, y);
	} else if (gameState == 1) {
		studentKeyboardController(key, x, y);
	} else if (gameState == 3) {
		finishScreenKeyboardController(key, x, y);
	}
}

void bootApp() {
	glutDisplayFunc(mainDisplayFunction);
	glutReshapeFunc(reshapeWindow);
	glutSpecialFunc(mainSpecialFunction);
}