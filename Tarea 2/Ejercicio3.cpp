#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>


void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glClearColor(1.0,1.0,1.0,1.0);
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glColor3f( 0.0, 0.0, 0.0 );
	
    gluLookAt(2.0, 8.0, 12.0, //eye (x,y,z)
              0.0, 2.0, 0.0, //at(x,y,z)
              0.0, 1.0, 0.0); //up (x,y,z)
	
	glBegin(GL_LINE_STRIP);
		glVertex3f(-4.0,0.0,0.0);
		glVertex3f(-4.0,0.0,4.0);
		glVertex3f(8.0,0.0,4.0);
		glVertex3f(8.0,0.0,0.0);
		glVertex3f(-4.0,0.0,0.0);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex3f(-4.0,0.0,0.0);
		glVertex3f(-4.0,6.0,0.0);
		glVertex3f(-4.0,6.0,4.0);
		glVertex3f(-4.0,0.0,4.0);
		glVertex3f(-4.0,0.0,0.0);
	glEnd();

	//Triangulo peque
	glBegin(GL_LINE_STRIP);
		glVertex3f(-4.0,6.0,0.0);
		glVertex3f(-4.0,8.0,2.0);
		glVertex3f(-4.0,6.0,4.0);
	glEnd();
	
	//Triagunlo Grande
	glBegin(GL_LINE_STRIP);
		glVertex3f(8.0,0.0,0.0);
		glVertex3f(8.0,8.0,2.0);
		glVertex3f(8.0,0.0,4.0);
		glVertex3f(8.0,0.0,0.0);
	glEnd();
	
	//Union
	glBegin(GL_LINES);
		glVertex3f(-4.0,8.0,2.0);
		glVertex3f(8.0,8.0,2.0);
	glEnd();
	
	//Cuadrado dentro
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.0,0.0,0.0);
		glVertex3f(0.0,6.0,0.0);
		glVertex3f(0.0,8.0,2.0);
		glVertex3f(0.0,6.0,4.0);
		glVertex3f(0.0,0.0,4.0);
	glEnd();
	
	//Division
	glBegin(GL_LINE_STRIP);
		glVertex3f(-4.0,6.0,0.0);
		glVertex3f(0.0,6.0,0.0);
		glVertex3f(0.0,6.0,4.0);
		glVertex3f(-4.0,6.0,4.0);
	glEnd();
	
	//Division
	glBegin(GL_LINE_STRIP);
		glVertex3f(-4.0,3.0,0.0);
		glVertex3f(0.0,3.0,0.0);
		glVertex3f(0.0,3.0,4.0);
		glVertex3f(-4.0,3.0,4.0);
		glVertex3f(-4.0,3.0,0.0);
	glEnd();
	
	//Ventana
	glBegin(GL_LINE_STRIP);
		glVertex3f(-4.0,3.0,4.0);
		glVertex3f(-4.0,0.0,8.0);
		glVertex3f(0.0,0.0,8.0);
		glVertex3f(0.0,3.0,4.0);
	glEnd();
	
	//Columpios
	glBegin(GL_LINE_STRIP);
		glVertex3f(3.5,2.0,2.0);
		glVertex3f(3.5,8.0,2.0);
		glVertex3f(2.0,8.0,2.0);
		glVertex3f(2.0,2.0,2.0);
		glVertex3f(2.0,2.0,1.5);
		glVertex3f(3.5,2.0,1.5);
		glVertex3f(3.5,2.0,2.5);
		glVertex3f(2.0,2.0,2.5);
		glVertex3f(2.0,2.0,2.0);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glVertex3f(6.5,2.0,2.0);
		glVertex3f(6.5,8.0,2.0);
		glVertex3f(5.0,8.0,2.0);
		glVertex3f(5.0,2.0,2.0);
		glVertex3f(5.0,2.0,1.5);
		glVertex3f(6.5,2.0,1.5);
		glVertex3f(6.5,2.0,2.5);
		glVertex3f(5.0,2.0,2.5);
		glVertex3f(5.0,2.0,2.0);
	glEnd();

	glFlush ();
	glutSwapBuffers();
}


void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1.0, 1.0, -1.0, 1.0, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 400);
    glutInitWindowPosition (560, 240);
    glutCreateWindow ("Ejercicio 3");
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}

