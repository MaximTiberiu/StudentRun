

void drawMetroSign(void) {
	// metro sign box
	drawRectangle(10, 50, 40, 80, white);

	// metro sign text
	renderString(13, 55, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"M", blue);
}