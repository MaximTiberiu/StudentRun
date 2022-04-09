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


void FundalMetrou(void)
{
	glClear(GL_COLOR_BUFFER_BIT);


	// Podea
	glBegin(GL_POLYGON);
	glColor3f(0.22, 0.28, 0.44);
	glVertex2i(-100, -140);// Stanga jos
	glVertex2i(700, -140); // Dreapta jos
	glVertex2i(700, -90);  // Dreapta sus
	glVertex2i(-100, -90); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.22, 0.28, 0.44);
	glVertex2i(-100, -65);// Stanga jos
	glVertex2i(700, -65); // Dreapta jos
	glVertex2i(700, -50);  // Dreapta sus
	glVertex2i(-100, -50); // Stanga sus
	glEnd();

	//Umbra podea
	glBegin(GL_POLYGON);
	glColor3f(0.31, 0.37, 0.51);
	glVertex2i(-100, -90);// Stanga jos
	glVertex2i(700, -90); // Dreapta jos
	glVertex2i(700, -65);  // Dreapta sus
	glVertex2i(-100, -65); // Stanga sus
	glEnd();

	// Meniu sus
	glBegin(GL_POLYGON);
	glColor3f(0.93, 0.95, 0.92);
	glVertex2i(-100, 400);// Stanga jos
	glVertex2i(700, 400); // Dreapta jos
	glVertex2i(700, 460); // Dreapta sus
	glVertex2i(-100, 460);// Stanga sus
	glEnd();

	//Set liniii meniu 1
	glBegin(GL_POLYGON);
	glColor3f(0.59, 0.82, 0.94);
	glVertex2i(-90 + 20, 435);// Stanga jos
	glVertex2i(50 + 20, 435); // Dreapta jos
	glVertex2i(50 + 20, 445);  // Dreapta sus
	glVertex2i(-90 + 20, 445); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.59, 0.82, 0.94);
	glVertex2i(-90 + 20, 420);// Stanga jos
	glVertex2i(50 + 20, 420); // Dreapta jos
	glVertex2i(50 + 20, 430);  // Dreapta sus
	glVertex2i(-90 + 20, 430); // Stanga sus
	glEnd();

	//Set liniii meniu 2
	glBegin(GL_POLYGON);
	glColor3f(0.59, 0.82, 0.94);
	glVertex2i(90 + 20, 435);// Stanga jos
	glVertex2i(230 + 20, 435); // Dreapta jos
	glVertex2i(230 + 20, 445);  // Dreapta sus
	glVertex2i(90 + 20, 445); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.59, 0.82, 0.94);
	glVertex2i(90 + 20, 420);// Stanga jos
	glVertex2i(230 + 20, 420); // Dreapta jos
	glVertex2i(230 + 20, 430);  // Dreapta sus
	glVertex2i(90 + 20, 430); // Stanga sus
	glEnd();

	//Set liniii meniu 3
	glBegin(GL_POLYGON);
	glColor3f(0.59, 0.82, 0.94);
	glVertex2i(270 + 20, 435);// Stanga jos
	glVertex2i(430 + 20, 435); // Dreapta jos
	glVertex2i(430 + 20, 445);  // Dreapta sus
	glVertex2i(270 + 20, 445); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.59, 0.82, 0.94);
	glVertex2i(270 + 20, 420);// Stanga jos
	glVertex2i(430 + 20, 420); // Dreapta jos
	glVertex2i(430 + 20, 430);  // Dreapta sus
	glVertex2i(270 + 20, 430); // Stanga sus
	glEnd();

	//Set liniii meniu 4
	glBegin(GL_POLYGON);
	glColor3f(0.59, 0.82, 0.94);
	glVertex2i(460 + 20, 435);// Stanga jos
	glVertex2i(610 + 20, 435); // Dreapta jos
	glVertex2i(610 + 20, 445);  // Dreapta sus
	glVertex2i(460 + 20, 445); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.59, 0.82, 0.94);
	glVertex2i(460 + 20, 420);// Stanga jos
	glVertex2i(610 + 20, 420); // Dreapta jos
	glVertex2i(610 + 20, 430);  // Dreapta sus
	glVertex2i(460 + 20, 430); // Stanga sus
	glEnd();

	//RenderString(200.0f, 425.0f, GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"Depaseste masinile!");

	//Usa metrou
	glBegin(GL_POLYGON);
	glColor3f(0.53, 0.55, 0.61);
	glVertex2i(400, -10);// Stanga jos
	glVertex2i(675, -10); // Dreapta jos
	glVertex2i(675, 300);  // Dreapta sus
	glVertex2i(400, 300); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.72, 0.73, 0.77);
	glVertex2i(400, -50);// Stanga jos
	glVertex2i(675, -50); // Dreapta jos
	glVertex2i(675, -10);  // Dreapta sus
	glVertex2i(400, -10); // Stanga sus
	glEnd();

	//Delimitare usi
	glLineWidth(2);
	glColor3f(0, 0, 0);

	//delimitare stanga, dreapta, sus, mijloc
	glBegin(GL_LINES);
	glVertex2i(400, -50);
	glVertex2i(400, 300);

	glVertex2i(675, -50);
	glVertex2i(675, 300);

	glVertex2i(400, 300);
	glVertex2i(675, 300);

	glVertex2i(539, -50);
	glVertex2i(539, 300);
	glEnd();

	//ferestre usi
	glBegin(GL_POLYGON);
	glColor3f(0.14, 0.15, 0.16);
	glVertex2i(425, 100);// Stanga jos
	glVertex2i(515, 100); // Dreapta jos
	glVertex2i(515, 250);  // Dreapta sus
	glVertex2i(425, 250); // Stanga sus
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.14, 0.15, 0.16);
	glVertex2i(560, 100);// Stanga jos
	glVertex2i(650, 100); // Dreapta jos
	glVertex2i(650, 250);  // Dreapta sus
	glVertex2i(560, 250); // Stanga sus
	glEnd();

	//fereastra mare
	glBegin(GL_POLYGON);
	glColor3f(0.14, 0.15, 0.16);
	glVertex2i(-15, 125);// Stanga jos
	glVertex2i(320, 125); // Dreapta jos
	glVertex2i(320, 300);  // Dreapta sus
	glVertex2i(-15, 300); // Stanga sus
	glEnd();

	//scaun
	//spatar mare
	glBegin(GL_POLYGON);
	glColor3f(0.42, 0.53, 0.65);
	glVertex2i(-40, 0);// Stanga jos
	glVertex2i(350, 0); // Dreapta jos
	glVertex2i(350, 100);  // Dreapta sus
	glVertex2i(-40, 100); // Stanga sus
	glEnd();

	//delimitare spatar mare
	glLineWidth(2);
	glColor3f(0, 0, 0);

	glBegin(GL_LINES);
	glVertex2i(-40, 100);
	glVertex2i(350, 100);
	glVertex2i(-40, 100);
	glVertex2i(-40, 0);
	glVertex2i(-40, 0);
	glVertex2i(350, 0);
	glVertex2i(350, 0);
	glVertex2i(350, 100);
	glEnd();

	//spatar mic
	glBegin(GL_POLYGON);
	glColor3f(0.58, 0.66, 0.76);
	glVertex2i(-20, 10);// Stanga jos
	glVertex2i(330, 10); // Dreapta jos
	glVertex2i(330, 80);  // Dreapta sus
	glVertex2i(-20, 80); // Stanga sus
	glEnd();


	//sezut mare
	glBegin(GL_POLYGON);
	glColor3f(0.42, 0.53, 0.65);
	glVertex2i(-45, -40);// Stanga jos
	glVertex2i(355, -40); // Dreapta jos
	glVertex2i(355, 10);  // Dreapta sus
	glVertex2i(-45, 10); // Stanga sus
	glEnd();

	// Delimitare sezut mare 
	glLineWidth(2);
	glColor3f(0, 0, 0);

	glBegin(GL_LINES);
	glVertex2i(-45, 10);
	glVertex2i(355, 10);
	glVertex2i(-45, 10);
	glVertex2i(-45, -40);
	glVertex2i(-45, -40);
	glVertex2i(355, -40);
	glVertex2i(355, -40);
	glVertex2i(355, 10);
	glEnd();

	//sezut mic
	glBegin(GL_POLYGON);
	glColor3f(0.58, 0.66, 0.76);
	glVertex2i(-25, -30);// Stanga jos
	glVertex2i(335, -30); // Dreapta jos
	glVertex2i(335, 0);  // Dreapta sus
	glVertex2i(-25, 0); // Stanga sus
	glEnd();

	//maner stanga
	glBegin(GL_POLYGON);
	glColor3f(0.56, 0.26, 0.23);
	glVertex2i(-55, -45);// Stanga jos
	glVertex2i(-30, -45); // Dreapta jos
	glVertex2i(-30, 20);  // Dreapta sus
	glVertex2i(-55, 20); // Stanga sus
	glEnd();

	//maner dreapta
	glBegin(GL_POLYGON);
	glColor3f(0.56, 0.26, 0.23);
	glVertex2i(335, -45);// Stanga jos
	glVertex2i(360, -45); // Dreapta jos
	glVertex2i(360, 20);  // Dreapta sus
	glVertex2i(335, 20); // Stanga sus
	glEnd();

	//bara sustinere 1
	glBegin(GL_POLYGON);
	glColor3f(0.69, 0.81, 0.82);
	glVertex2i(-80, -50);// Stanga jos
	glVertex2i(-65, -50); // Dreapta jos
	glVertex2i(-65, 350);  // Dreapta sus
	glVertex2i(-80, 350); // Stanga sus
	glEnd();

	//bara sustinere 2
	glBegin(GL_POLYGON);
	glColor3f(0.69, 0.81, 0.82);
	glVertex2i(370, -50);// Stanga jos
	glVertex2i(385, -50); // Dreapta jos
	glVertex2i(385, 350);  // Dreapta sus
	glVertex2i(370, 350); // Stanga sus
	glEnd();


	// Delimitare sosea
	glLineWidth(3);
	glColor3f(0.4, 0.4, 0.41);

	// Delimitam soseaua de iarba partea de jos
	glBegin(GL_LINES);
	glVertex2i(-100, -50);
	glVertex2i(1500, -50);
	glEnd();

	//delimitare ceva
	glBegin(GL_LINES);
	glVertex2i(-100, 350);
	glVertex2i(1500, 350);
	glEnd();


	// Delimitam soseaua de iarba partea de sus
	glBegin(GL_LINES);
	glVertex2i(-100, 400);
	glVertex2i(1500, 400);
	glEnd();



	//desenam masina
	glPushMatrix();
	glTranslated(0.0, j, 0.0);



	glColor3f(0.996, 0.365, 0.149);
	glRecti(-45, -15, 45, 15);


	glPopMatrix();
	glPopMatrix();

	if (ok == 0) {
		RenderString(250.0f, 200.0f, GLUT_BITMAP_8_BY_13, (const unsigned char*)"GAME OVER");
	}

	if (contor == 1 && (j != 160 && j != 320))
		j = j + 1;
	else if (contor == -1 && (j != 160 && j != 0))
		j = j - 1;
	else {
		contor = 0;

	}

	//desenam a doua masina (adversara)
	glPushMatrix();
	glTranslated(loc_vert, height, 0.0);

	glColor3f(0.471, 0.667, 0.949);
	glRecti(-45, -15, 45, 15);


	glPopMatrix();

	startgame();
	glutPostRedisplay();
	glutSwapBuffers();
	glFlush();
}