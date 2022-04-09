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


double ok = 1;
double j = 0.0;
double i = 0.0;

double contor = 0;
double loc_vert = 800;
int vector[3] = { 0, 160, 320 };
double height = vector[rand() % 3];
double timp = 0.15;
int pct = 1000;