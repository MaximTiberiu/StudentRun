#pragma once

// libraries
#include <math.h>

// headers
#include "globals.hpp"
#include "colors.hpp"

#define PI 3.14f

void renderString(float x, float y, void* font, const unsigned char* string, Color color)
{
	glColor3f(color.red, color.green, color.blue);
	glRasterPos2f(x, y);
	glutBitmapString(font, string);
}

void drawCircle(GLfloat x, GLfloat y, GLfloat radius, Color color) {
	int numberOfTriangles = 20;
	GLfloat doublePI = 2.0f * PI;

	glColor3f(color.red, color.green, color.blue);

	glBegin(GL_TRIANGLE_FAN);
	
	glVertex2f(x, y); // center of circle
	for (int i = 0; i <= numberOfTriangles; i++) {
		glVertex2f(x + (radius * cos(i * doublePI / numberOfTriangles)), y + (radius * sin(i * doublePI / numberOfTriangles)));
	}

	glEnd();
}

void drawHollowCircle(GLfloat x, GLfloat y, GLfloat radius, Color color) {
	int numberOfLines = 100;
	GLfloat doublePI = 2.0f * PI;

	glColor3f(color.red, color.green, color.blue);

	glBegin(GL_LINE_LOOP);

	for (int i = 0; i <= numberOfLines; i++) {
		glVertex2f(x + (radius * cos(i * doublePI / numberOfLines)), y + (radius * sin(i * doublePI / numberOfLines)));
	}

	glEnd();
}

void drawRectangle(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, Color color) {
	glColor3f(color.red, color.green, color.blue);

	glBegin(GL_QUADS);

	glVertex2f(x1, y1);
	glVertex2f(x2, y1);
	glVertex2f(x2, y2);
	glVertex2f(x1, y2);

	glEnd();
}

void drawHollowRectangle(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, Color color) {
	glColor3f(color.red, color.green, color.blue);

	glBegin(GL_LINE_LOOP);

	glVertex2f(x1, y1);
	glVertex2f(x2, y1);
	glVertex2f(x2, y2);
	glVertex2f(x1, y2);

	glEnd();
}

void drawTriangle(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat x3, GLfloat y3, Color color) {
	glColor3f(color.red, color.green, color.blue);

	glBegin(GL_TRIANGLES);

	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glVertex2f(x3, y3);

	glEnd();
}

void drawHollowTriangle(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat x3, GLfloat y3, Color color) {
	glColor3f(color.red, color.green, color.blue);

	glBegin(GL_LINE_LOOP);

	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glVertex2f(x3, y3);

	glEnd();
}

void drawLine(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, Color color, GLfloat lineWidth) {
	glColor3f(color.red, color.green, color.blue);
	glLineWidth(lineWidth);

	glBegin(GL_LINES);

	glVertex2f(x1, y1);
	glVertex2f(x2, y2);

	glEnd();
}

void drawParallelogram(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat x3, GLfloat y3, GLfloat x4, GLfloat y4, Color color) {
	glColor3f(color.red, color.green, color.blue);

	glBegin(GL_POLYGON);

	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glVertex2f(x3, y3);
	glVertex2f(x4, y4);

	glEnd();
}