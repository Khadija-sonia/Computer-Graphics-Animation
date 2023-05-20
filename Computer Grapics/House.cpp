#include <iostream>
#include <windows.h>
#include <GL/glut.h>

using namespace std;

#define WINDOW_WIDTH 500.0
#define WINDOW_HEIGHT 500.0




void display(){


	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	glMatrixMode(GL_MODELVIEW);


	glLoadIdentity();


	glMatrixMode(GL_MODELVIEW);



   //Lines
	glColor3f(0.9,0.9,0.9);
	glBegin(GL_LINES);{
		glVertex3f( 0.125f, 0.55f,0.0f);
		glVertex3f( 0.125f, 0.50f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.150f, 0.6f,0.0f);
		glVertex3f( 0.150f, 0.50f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.175f, 0.65f,0.0f);
		glVertex3f( 0.175f, 0.50f,0.0f);
	}glEnd();
    glBegin(GL_LINES);{
		glVertex3f( 0.2f, 0.7f,0.0f);
		glVertex3f( 0.2f, 0.50f,0.0f);
	}glEnd();

	glBegin(GL_LINES);{
		glVertex3f( 0.275f, 0.7f,0.0f);
		glVertex3f( 0.275f, 0.50f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.35f, 0.7f,0.0f);
		glVertex3f( 0.350f, 0.50f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.425f, 0.7f,0.0f);
		glVertex3f( 0.425f, 0.50f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.5f, 0.7f,0.0f);
		glVertex3f( 0.5f, 0.50f,0.0f);
	}glEnd();glBegin(GL_LINES);{
		glVertex3f( 0.575f, 0.7f,0.0f);
		glVertex3f( 0.575f, 0.50f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.625f, 0.7f,0.0f);
		glVertex3f( 0.625f, 0.50f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.700f, 0.7f,0.0f);
		glVertex3f( 0.700f, 0.50f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.775f, 0.7f,0.0f);
		glVertex3f( 0.775f, 0.50f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.850f, 0.7f,0.0f);
		glVertex3f( 0.850f, 0.50f,0.0f);
	}glEnd();

	glBegin(GL_LINES);{
		glVertex3f( 0.875f, 0.65f,0.0f);
		glVertex3f( 0.875f, 0.50f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.90f, 0.6f,0.0f);
		glVertex3f( 0.90f, 0.50f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.925f, 0.55f,0.0f);
		glVertex3f( 0.925f, 0.50f,0.0f);
	}glEnd();


	glBegin(GL_LINES);{
		glVertex3f( 0.125f, 0.55f,0.0f);
		glVertex3f( 0.925f, 0.55f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.150f, 0.6f,0.0f);
		glVertex3f( 0.90f, 0.60f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.175f, 0.65f,0.0f);
		glVertex3f( 0.875f, 0.65f,0.0f);
	}glEnd();

//Lines inside small quads
	glBegin(GL_LINES);{
		glVertex3f( 0.15f, 0.1f,0.0f);
		glVertex3f( 0.25f, 0.27f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.175f, 0.1f,0.0f);
		glVertex3f( 0.25f, 0.2275f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.2f, 0.1f,0.0f);
		glVertex3f( 0.25f, 0.185f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.225f, 0.1f,0.0f);
		glVertex3f( 0.25f, 0.142f,0.0f);
	}glEnd();

    glBegin(GL_LINES);{
		glVertex3f( 0.15f, 0.1425f,0.0f);
		glVertex3f( 0.225f, 0.27f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.15f, 0.185f,0.0f);
		glVertex3f( 0.2f, 0.27f,0.0f);
	}glEnd();
	glBegin(GL_LINES);{
		glVertex3f( 0.15f, 0.2275f,0.0f);
		glVertex3f( 0.175f, 0.27f,0.0f);
	}glEnd();





    glColor3f(0.0,0.9,0.0);
	glBegin(GL_TRIANGLES);{
		glVertex3f( 0.10f, 0.50f,0.0f);
		glVertex3f( 0.30f, 0.50f,0.0f);
		glVertex3f( 0.20f, 0.70f,0.0f);
	}glEnd();


	glColor3f(0.0,0.8,0.0);
	glBegin(GL_QUADS);{
		glVertex3f( 0.30f, 0.50f,0.0f);
		glVertex3f( 0.95f, 0.50f,0.0f);
		glVertex3f( 0.85f, 0.70f,0.0f);
		glVertex3f( 0.20f, 0.70f,0.0f);
	}glEnd();




    glColor3f(0.9,0.4,0.0);
	glBegin(GL_QUADS);{
		glVertex3f( 0.30f, 0.10f,0.0f);
		glVertex3f( 0.95f, 0.10f,0.0f);
		glVertex3f( 0.95f, 0.50f,0.0f);
		glVertex3f( 0.30f, 0.50f,0.0f);
	}glEnd();

    glColor3f(0.0,0.0,1.0);
	glBegin(GL_QUADS);{
		glVertex3f( 0.15f, 0.10f,0.0f);
		glVertex3f( 0.25f, 0.10f,0.0f);
		glVertex3f( 0.25f, 0.27f,0.0f);
		glVertex3f( 0.15f, 0.27f,0.0f);
	}glEnd();


    glColor3f(0.8,0.3,0.0);
	glBegin(GL_QUADS);{
		glVertex3f( 0.10f, 0.10f,0.0f);
		glVertex3f( 0.30f, 0.10f,0.0f);
		glVertex3f( 0.30f, 0.50f,0.0f);
		glVertex3f( 0.10f, 0.50f,0.0f);
	}glEnd();


	glutSwapBuffers();
}


void init(){

	//clear the screen
	glClearColor(0,0,0,0);

	/************************
	/ set-up projection here
	************************/
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

	glutCreateWindow("2019200011003_House");

	init();

	glEnable(GL_DEPTH_TEST);

	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}
