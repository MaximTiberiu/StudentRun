#pragma once

// libraries
#include <iostream>
#include <windows.h>

// headers - backgrounds
#include "startscreen.hpp"
#include "mainbackground.hpp"
#include "metrobackground.hpp"
#include "finishscreen.hpp"
#include "helpscreen.hpp"
#include "pausescreen.hpp"

// headers - controllers
#include "controllers.hpp"


void appInitialization() {
	glClearColor(mainBackgroundColor.red, mainBackgroundColor.green, mainBackgroundColor.blue, 0.0f);
	glMatrixMode(GL_PROJECTION);
	glOrtho(leftMArgin, rightMargin, bottomMargin, topMargin, -1.0, 1.0);
	gameState = 0;
}

void reshapeWindow(GLsizei width, GLsizei height) {
	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(leftMArgin, rightMargin, bottomMargin, topMargin, -1.0, 1.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void loadAppSettings(int argc, char **argv) {
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
		metroBackgroundDisplayFunction();
	} else if (gameState == 3) {
		finishScreenDisplayFunction();
	} else if (gameState == 4) {
		helpScreenDisplayFunction();
	} else if (gameState == 5) {
		pauseScreenDisplayFunction();
	}

	glutPostRedisplay();
	glutSwapBuffers();
	glFlush();
}

void mainSpecialFunction(int key, int x, int y) {
	if (gameState == 0) {
		startScreenKeyboardController(key, x, y);
	} else if (gameState == 1 || gameState == 2) {
		studentKeyboardController(key, x, y);
	} else if (gameState == 3) {
		finishScreenKeyboardController(key, x, y);
	} else if (gameState == 4) {
		helpScreenKeyboardController(key, x, y);
	} else if (gameState == 5) {
		pauseScreenKeyboardController(key, x, y);
	}
}

void bootApp() {
	glutDisplayFunc(mainDisplayFunction);
	glutReshapeFunc(reshapeWindow);
	glutSpecialFunc(mainSpecialFunction);
}