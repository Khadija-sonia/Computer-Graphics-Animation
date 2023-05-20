#include <iostream>
#include <fstream>
#include <cassert>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <vector>
#include <windows.h>
#include <GL/glut.h>

using namespace std;

#define eps 0.00001
#define WINDOW_WIDTH 500.0
#define WINDOW_HEIGHT 500.0
#define pi (2*acos(0.0))

#define MAX_VAL 9999999
#define MIN_VAL -9999999

void drawCircle(float r, float x, float y) {
        float i = 0.0f;

        glBegin(GL_TRIANGLE_FAN);

        glVertex2f(x, y); // Center
        for(i = 0.0f; i <= 360; i++)
                glVertex2f(r*cos(M_PI * i / 180.0) + x, r*sin(M_PI * i / 180.0) + y);

        glEnd();

}

void display(){


	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	glMatrixMode(GL_MODELVIEW);


	glLoadIdentity();


	glMatrixMode(GL_MODELVIEW);

    glColor3f(0.8,0.0,0.0);
    drawCircle(0.14,0.415, 0.31);

    glColor3f(0.0,0.6,0.0);
	glBegin(GL_QUADS);{
		glVertex3f( 0.1f, 0.1f,0.0f);
		glVertex3f( 0.8f, 0.1f,0.0f);
		glVertex3f( 0.8f, 0.52f,0.0f);
		glVertex3f( 0.1f, 0.52f,0.0f);
	}glEnd();






	glutSwapBuffers();

}


void init(){

	//clear the screen
	glClearColor(0,0,0,0);

	//load the PROJECTION matrix
	glMatrixMode(GL_PROJECTION);


	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);

}

int main(int argc, char **argv){

	glutInit(&argc,argv);
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
	glutInitWindowPosition(100, 100);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGB);	//Depth, Double buffer, RGB color

	glutCreateWindow("2019200011003_Flag");

	init();

	glEnable(GL_DEPTH_TEST);

	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}
