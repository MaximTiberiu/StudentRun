// headers
#include "globals.h"
#include "colors.h"
#include "utils.h"

void metroBackground(void)
{
	// floor 
	drawRectangle(-100, -140, 700, -50, metroFloorColor);

	// floor shade
	drawRectangle(-100, -90, 700, -65, metroFloorShadeColor);

	// metrics zone
	drawRectangle(-100, 400, 700, 460, metroMetricsBackgroundColor);

	// ventilation
	drawRectangle(-70, 435, 70, 445, metroVentilationColor);
	drawRectangle(-70, 420, 70, 430, metroVentilationColor);
	drawRectangle(110, 435, 250, 445, metroVentilationColor);
	drawRectangle(110, 420, 250, 430, metroVentilationColor);
	drawRectangle(290, 435, 450, 445, metroVentilationColor);
	drawRectangle(290, 420, 450, 430, metroVentilationColor);
	drawRectangle(480, 435, 630, 445, metroVentilationColor);
	drawRectangle(480, 420, 630, 430, metroVentilationColor);

	// metro door
	drawRectangle(400, -10, 675, 300, metroDoorColor);
	drawRectangle(400, -50, 675, -10, bottomMetroDoorColor);

	// metro door margins
	drawLine(400, -50, 400, 300, black, 2);
	drawLine(675, -50, 675, 300, black, 2);
	drawLine(400, 300, 675, 300, black, 2);
	drawLine(539, -50, 539, 300, black, 2);


	// metro door windows
	drawRectangle(425, 100, 515, 250, metroWindowColor);
	drawRectangle(560, 100, 650, 250, metroWindowColor);

	// window
	drawRectangle(-15, 125, 320, 300, metroWindowColor);

	// backrest
	drawRectangle(-40, 0, 350, 100, metroBackrestColor);

	// backrest shade
	drawRectangle(-20, 20, 330, 90, metroBackrestShadeColor);

	// backrest margins
	drawLine(-40, 100, 350, 100, black, 2);
	drawLine(-40, 100, -40, 0, black, 2);
	drawLine(-40, 0, 350, 0, black, 2);
	drawLine(350, 0, 350, 100, black, 2);


	// seat
	drawRectangle(-45, -40, 355, 10, metroSeatColor);

	// seat margins
	drawLine(-45, 10, 355, 10, black, 2);
	drawLine(-45, 10, -45, -40, black, 2);
	drawLine(-45, -40, 355, -40, black, 2);
	drawLine(355, -40, 355, 10, black, 2);

	// seat shade
	drawRectangle(-25, -30, 335, 0, metroSeatShadeColor);

	// handles
	drawRectangle(-55, -45, -30, 20, metroHandleColor);
	drawRectangle(335, -45, 360, 20, metroHandleColor);

	// bars
	drawRectangle(-80, -50, -65, 350, metroBarColor);
	drawRectangle(370, -50, 385, 350, metroBarColor);

	// metro car margins
	drawLine(-100, -50, 1500, -50, metroCarMargin, 10);
	drawLine(-100, 350, 1500, 350, metroCarMargin, 3);
	drawLine(-100, 400, 1500, 400, metroCarMargin, 3);
}