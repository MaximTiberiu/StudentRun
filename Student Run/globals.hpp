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
int finalScore = 1500;

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
double metroSignVerticalPositon = 160;
bool isMetroSignCollisionEnabled = false;

// bottle global vars
double bottleHorizontalPosition = 800;
double bottleVerticalPositon = 160;
bool isBottleCollisionEnabled = false;

// metro stop bar sign global vars
double metroStopBarSignHorizontalPosition = 800;
double metroStopBarSignVerticalPosition = 160;
bool isMetroStopBarSignCollisionEnabled = false;
bool isMetroStopBarSignActive = false;

// screens vars
int selectedOptionVerticalPosition = 240;
int selectedOptionPath = 0;

// bar settings
float leftBarMargin = -30.0f;
float rightBarMargin = 600.0f;

// coloured bars settings
float redBarWidth = 250.0f;
float orangeBarWidth = 50.0f;
float greenBarWidth = 20.0f;

// pointer settings
double currentPointerPosition = 0.0;
double speedFactor = 0.3;

float redBar = leftBarMargin + redBarWidth;
float firstOrangeBar = redBar + orangeBarWidth;
float greenBar = firstOrangeBar + greenBarWidth;
float secondOrangeBar = greenBar + orangeBarWidth;

// university
double universityHorizontalPosition = 800;
double universityVerticalPositon = 160;
bool isUniversityCollisionEnabled = false;


void resetGlobalVars() {
	// game global vars
	isGameOver = false;
	scoreStep = 1000;
	constSpeed = 0.15;
	score = 0;

	// student global vars
	studentVerticalPosition = 0;
	studentPath = 0;

	// obstacle global vars
	obstacleHorizontalPosition = 800;
	obstacleVerticalPositon = 160;

	// metro sign global vars
	metroSignHorizontalPosition = 800;
	metroSignVerticalPositon = 160;
	isMetroSignCollisionEnabled = false;

	// bottle global vars
	bottleHorizontalPosition = 800;
	bottleVerticalPositon = 160;
	isBottleCollisionEnabled = false;

	// metro stop bar sign global vars
	metroStopBarSignHorizontalPosition = 800;
	metroStopBarSignVerticalPosition = 160;
	isMetroStopBarSignCollisionEnabled = false;
	isMetroStopBarSignActive = false;

	// pointer settings
	currentPointerPosition = 0.0;
	speedFactor = 0.3;

	// university
	universityHorizontalPosition = 800;
	universityVerticalPositon = 160;
	isUniversityCollisionEnabled = false;
}