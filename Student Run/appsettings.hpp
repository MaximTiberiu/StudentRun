#pragma once

// headers
#include "metrics.hpp"

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