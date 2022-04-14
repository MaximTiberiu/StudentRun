#include "appsettings.hpp"

int main(int argc, char** argv) {
	loadAppSettings(argc, argv);
	bootApp();
	glutMainLoop();
}