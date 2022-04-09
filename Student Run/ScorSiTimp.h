#pragma once
#include <iostream>
#include<windows.h>
#include <GL/freeglut.h>
#include <string>
#include <time.h>
int score;

clock_t start = clock();


void RenderString(float x, float y, void* font, const unsigned char* string)
{

	glColor3f(0.0f, 0.0f, 0.0f);
	glRasterPos2f(x, y);

	glutBitmapString(font, string);
}


void deseneazaScor() {
	std::string str = "Score: ";
	str = str + std::to_string(score);
	unsigned char scor[256];
	std::copy(str.begin(), str.end(), scor);
	scor[str.length()] = 0;
	//auto uCharArr = reinterpret_cast<unsigned char*>(str.c_str());
	RenderString(-75.0f, 425.0f, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)scor);
}

void deseneazaTimp() {

	clock_t end = clock();
	int time = (int)(end - start) / CLOCKS_PER_SEC;
	std::string str = "Time: ";
	str = str + std::to_string(time) + " sec";
	unsigned char timp[256];
	std::copy(str.begin(), str.end(), timp);
	timp[str.length()] = 0;
	RenderString(450.0f, 425.0f, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)timp);

}