#pragma once

// libraries
#include <GL/freeglut.h>
#include <time.h>

// margins
GLdouble leftMArgin = -100.0;
GLdouble rightMargin = 700.0;
GLdouble bottomMargin = -140.0;
GLdouble topMargin = 460.0;

// metrics
int score;
clock_t startTime;
int totalTime;

// game global vars
bool isGameOver = false;
int verticalPositions[3] = { 0, 160, 320 };
int scoreStep = 1000;
double constSpeed = 0.15;
int gameState; // 0 - start screen; 1 - game; 2 - finish screen

// student global vars
int studentVerticalPosition = 0;
int studentPath = 0;

// obstacle global vars
double obstacleHorizontalPosition = 800;
double obstacleVerticalPositon = 160;

// metro sign global vars
double metroSignHorizontalPosition = 800;
double metroSignVerticalPositon = 0;

// start screen vars
int selectedOptionVerticalPosition = 200;
int selectedOptionPath = 0;

void resetGlobalVars() {
	isGameOver = false;
	scoreStep = 1000;
	constSpeed = 0.15;
	studentVerticalPosition = 0;
	studentPath = 0;
	obstacleHorizontalPosition = 800;
	obstacleVerticalPositon = 160;
	metroSignHorizontalPosition = 800;
	metroSignVerticalPositon = 160;
}