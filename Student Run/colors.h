#pragma once

#include <GL/freeglut.h>

struct Color {
	GLfloat red;
	GLfloat green;
	GLfloat blue;

	Color(GLfloat red, GLfloat green, GLfloat blue) {
		this->red = red;
		this->green = green;
		this->blue = blue;
	}
};

// basic colors
Color white(1.0f, 1.0f, 1.0f);
Color black(0.0f, 0.0f, 0.0f);
Color green(0.0f, 1.0f, 0.0f);

// app color
Color mainBackgroundColor(0.98f, 0.929f, 0.792f);

// metro background colors
Color metroFloorColor(0.22f, 0.28f, 0.44f);
Color metroFloorShadeColor(0.31f, 0.37f, 0.51f);
Color metroMetricsBackgroundColor(0.93f, 0.95f, 0.92f);
Color metroVentilationColor(0.59f, 0.84f, 0.94f);
Color metroDoorColor(0.32f, 0.55f, 0.61f);
Color bottomMetroDoorColor(0.72f, 0.73f, 0.77f);
Color metroWindowColor(0.14f, 0.15f, 0.16f);
Color metroBackrestColor(0.42f, 0.53f, 0.65f);
Color metroBackrestShadeColor(0.58f, 0.66f, 0.76f);
Color metroSeatColor(0.42f, 0.53f, 0.65f);
Color metroSeatShadeColor(0.58f, 0.66f, 0.76f);
Color metroHandleColor(0.56f, 0.26f, 0.23f);
Color metroBarColor(0.69f, 0.81f, 0.82f);
Color metroCarMargin(0.40f, 0.40f, 0.41f);

//bottles colors
Color bottleColorCalcium(0.9f, 0.9f, 0.9f);
Color labelWritingCalcium(0.0f, 1.0f, 1.0f);
Color bottleColorMagnesium(0.65f,0.117f,0.376f);
Color labelWritingMagnesium(0.423f,0.176f,0.478f);
Color bottleColorVitC(1.0f,0.925f,0.25f);