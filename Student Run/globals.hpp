#pragma once
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

// game global vars
bool isGameOver = false;
int verticalPositions[3] = { 0, 160, 320 };
int scoreStep = 1000;
double constSpeed = 0.15;

// student global vars
int studentVerticalPosition = 0;
int studentPath = 0;


// obstacle global vars
double obstacleHorizontalPosition = 800;
double obstacleVerticalPositon = 160;