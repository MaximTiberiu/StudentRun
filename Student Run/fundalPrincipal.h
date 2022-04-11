#include <iostream>
#include<windows.h>
#include <GL/freeglut.h>


using namespace std;

GLdouble left_m = -100.0;
GLdouble right_m = 700.0;
GLdouble bottom_m = -140.0;
GLdouble top_m = 460.0;

double ok = 1;
double j = 0.0;
double i = 0.0;

double contor = 0;
double loc_vert = 800;
int vector[3] = { 0, 160, 320 };
double height = vector[rand() % 3];
int score = 0;
double timp = 0.15;
int pct = 1000;

void FundalPrincipal(void) 
{
	glClear(GL_COLOR_BUFFER_BIT);

	// Trecere de pietoni - GRI
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2i(-100, -140);// Stanga jos
	glVertex2i(700, -140); // Dreapta jos
	glVertex2i(700, 0);  // Dreapta sus
	glVertex2i(-100, 0); // Stanga sus
	glEnd();

	//Trecere de pietoni - DUNGI
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(-80, -130);// Stanga jos
	glVertex2i(-40, -130); // Dreapta jos
	glVertex2i(-40, -10);  // Dreapta sus
	glVertex2i(-80, -10); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(0, -130);// Stanga jos
	glVertex2i(40, -130); // Dreapta jos
	glVertex2i(40, -10);  // Dreapta sus
	glVertex2i(0, -10); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(80, -130);// Stanga jos
	glVertex2i(120, -130); // Dreapta jos
	glVertex2i(120, -10);  // Dreapta sus
	glVertex2i(80, -10); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(160, -130);// Stanga jos
	glVertex2i(200, -130); // Dreapta jos
	glVertex2i(200, -10);  // Dreapta sus
	glVertex2i(160, -10); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(240, -130);// Stanga jos
	glVertex2i(280, -130); // Dreapta jos
	glVertex2i(280, -10);  // Dreapta sus
	glVertex2i(240, -10); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(320, -130);// Stanga jos
	glVertex2i(360, -130); // Dreapta jos
	glVertex2i(360, -10);  // Dreapta sus
	glVertex2i(320, -10); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(400, -130);// Stanga jos
	glVertex2i(440, -130); // Dreapta jos
	glVertex2i(440, -10);  // Dreapta sus
	glVertex2i(400, -10); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(480, -130);// Stanga jos
	glVertex2i(520, -130); // Dreapta jos
	glVertex2i(520, -10);  // Dreapta sus
	glVertex2i(480, -10); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(560, -130);// Stanga jos
	glVertex2i(600, -130); // Dreapta jos
	glVertex2i(600, -10);  // Dreapta sus
	glVertex2i(560, -10); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(640, -130);// Stanga jos
	glVertex2i(680, -130); // Dreapta jos
	glVertex2i(680, -10);  // Dreapta sus
	glVertex2i(640, -10); // Stanga sus
	glEnd();

	// Cerul
	glColor3f(0.6, 0.9, 1);
	glBegin(GL_POLYGON);
	glVertex2i(-100, 50);// Stanga jos
	glVertex2i(700, 50); // Dreapta jos
	glVertex2i(700, 460); // Dreapta sus
	glVertex2i(-100, 460);// Stanga sus
	glEnd();

	//Iarba
	glColor3f(0, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2i(-100, 0);// Stanga jos
	glVertex2i(700, 0); // Dreapta jos
	glVertex2i(700, 50); // Dreapta sus
	glVertex2i(-100, 50);// Stanga sus
	glEnd();

	//Bancute
	//PRIMA
	glColor3f(0.7, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(-30, 40);// Stanga jos
	glVertex2i(70, 40); // Dreapta jos
	glVertex2i(70, 70); // Dreapta sus
	glVertex2i(-30, 70);// Stanga sus
	glEnd();

	glColor3f(0.6, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(-50, 20);// Stanga jos
	glVertex2i(50, 20); // Dreapta jos
	glVertex2i(70, 40); // Dreapta sus
	glVertex2i(-30, 40);// Stanga sus
	glEnd();

	glLineWidth(6);

	glBegin(GL_LINES);
	glVertex2i(-47, 0);
	glVertex2i(-47, 20);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(47, 0);
	glVertex2i(47, 20);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(67, 10);
	glVertex2i(67, 40);
	glEnd();

	//A DOUA 
	glColor3f(0.7, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(270, 40);// Stanga jos
	glVertex2i(370, 40); // Dreapta jos
	glVertex2i(370, 70); // Dreapta sus
	glVertex2i(270, 70);// Stanga sus
	glEnd();

	glColor3f(0.6, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(250, 20);// Stanga jos
	glVertex2i(350, 20); // Dreapta jos
	glVertex2i(370, 40); // Dreapta sus
	glVertex2i(270, 40);// Stanga sus
	glEnd();

	glLineWidth(6);

	glBegin(GL_LINES);
	glVertex2i(253, 0);
	glVertex2i(253, 20);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(347, 0);
	glVertex2i(347, 20);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(367, 10);
	glVertex2i(367, 40);
	glEnd();

	//A TREIA
	glColor3f(0.7, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(570, 40);// Stanga jos
	glVertex2i(670, 40); // Dreapta jos
	glVertex2i(670, 70); // Dreapta sus
	glVertex2i(570, 70);// Stanga sus
	glEnd();

	glColor3f(0.6, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(550, 20);// Stanga jos
	glVertex2i(650, 20); // Dreapta jos
	glVertex2i(670, 40); // Dreapta sus
	glVertex2i(570, 40);// Stanga sus
	glEnd();

	glLineWidth(6);

	glBegin(GL_LINES);
	glVertex2i(553, 0);
	glVertex2i(553, 20);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(647, 0);
	glVertex2i(647, 20);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(667, 10);
	glVertex2i(667, 40);
	glEnd();

	//Semafor
	glColor3f(0, 0, 0);

	glBegin(GL_POLYGON);
	glVertex2i(680, 0);// Stanga jos
	glVertex2i(690, 0);// Stanga jos
	glVertex2i(690, 230);// Stanga jos
	glVertex2i(680, 230);// Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(690, 230);
	glVertex2i(660, 230);
	glVertex2i(660, 220);
	glVertex2i(690, 220);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(630, 185);
	glVertex2i(660, 185);
	glVertex2i(660, 265);
	glVertex2i(630, 265);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2i(635, 190);
	glVertex2i(655, 190);
	glVertex2i(655, 210);
	glVertex2i(635, 210);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 0);
	glVertex2i(635, 215);
	glVertex2i(655, 215);
	glVertex2i(655, 235);
	glVertex2i(635, 235);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex2i(635, 240);
	glVertex2i(655, 240);
	glVertex2i(655, 260);
	glVertex2i(635, 260);
	glEnd();

}
