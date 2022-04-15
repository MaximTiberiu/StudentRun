#pragma once
#include "utils.hpp"
#include "colors.hpp"

Color orangeColor(0.949f, 0.478f, 0.007f);
float x_min = -30.0f;
float x_max = 600.0f;
float dist_red = 250.0f;
float dist_orange = 50.0f;
float dist_green = 20.0f;
double i = 0.0;
double alpha = 0.3;

void move() {
	i = i + alpha;
	if (i < x_min+20)
		alpha = 0.3;
	else if (i > x_max+20)
		alpha = -0.3;
	glutPostRedisplay();
}


void keyboard(unsigned char key,int x , int y) {
	switch (key) {
	case ' ':
		alpha = 0;
		break;
	default:
		break;
	}
}

void drawBar(){
	float red1 = x_min + dist_red;
	float orange1 = red1 + dist_orange;
	float green1 = orange1 + dist_green;
	float orange2 = green1 + dist_orange;
	drawRectangle(x_min,85.0f,red1,100.0f,redColor);
	drawRectangle(red1,85.0f,orange1,100.0f,orangeColor);
	drawRectangle(orange1,85.0f,green1,100.0f,greenColor);
	drawRectangle(green1,85.0f,orange2,100.0f,orangeColor);
	drawRectangle(orange2, 85.0f, x_max, 100.0f, redColor);
	glPushMatrix();
	glTranslated(i, 0.0f, 0.0f);
	glPushMatrix();
	drawTriangle(x_min-10, 70.0f, x_min + 10, 70.0f, x_min, 85.0f,blackColor);
	glPopMatrix();
	glutSwapBuffers();
	glPopMatrix();
	glutIdleFunc(move);
	glutKeyboardFunc(keyboard);
}
