// headers
#include "globals.h"
#include "colors.h"
#include "utils.h"

void metroSign(void) {
	//metrou box
	drawRectangle(10, 50, 40, 80, white);

	//"M" letter
	glColor3f(0.0, 0.0, 1.0); //blue
	glRasterPos2i(13, 55);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'M');

	glFlush();
}