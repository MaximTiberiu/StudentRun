// headers
#include "globals.h"
#include "colors.h"
#include "utils.h"

Color white(1.0f, 1.0f, 1.0f);
Color blue(0.0f, 0.0f, 1.0f);


void metroSign(void) {
	//metrou box
	drawRectangle(10, 50, 40, 80, white);

	//"M" letter
	renderString(13, 55, GLUT_BITMAP_TIMES_ROMAN_24, blue);
}