

void drawMetroSign() {
	// metro sign box
	drawRectangle(10, 50, 40, 80, whiteColor);

	// metro sign text
	renderString(13, 55, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"M", blueColor);
}