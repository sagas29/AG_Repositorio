#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glClearColor (1.0, 1.0, 1.0, 1.0);
}

void display(void)
{
	gluLookAt(1.7, 1.6, 1.3, //eye (x,y,z)
              0.0, 0.0, 0.0, //at(x,y,z)
			  0.0, 1.0, 0.0); //up (x,y,z)
	
	
	glColor3f(0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPointSize(3);
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.0,0.0,0.0);
		glVertex3f(0.0,0.0,0.7);
		glVertex3f(0.0,1.0,0.7);
		glVertex3f(0.0,1.0,0.0);
		glVertex3f(0.0,0.0,0.0);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.0,0.0,0.0);
		glVertex3f(1.0,0.0,0.0);
		glVertex3f(0.0,1.0,0.0);
		glVertex3f(0.0,0.0,0.0);
	glEnd();
	
	//Cholladero
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.0,1.0,0.0);
		glVertex3f(0.0,1.0,-0.3);
		glVertex3f(1.0,0.0,-0.3);
		glVertex3f(1.0,0.0,0.0);	
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.0,1.0,-0.3);
		glVertex3f(-0.2,1.0,-0.3);
		glVertex3f(-0.2,1.0,0.7);
		glVertex3f(0.0,1.0,0.7);
	glEnd();
	
	
	//Ventana
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.0,0.3,0.15);
		glVertex3f(0.0,0.7,0.15);
		glVertex3f(0.0,0.7,0.55);
		glVertex3f(0.0,0.3,0.55);
		glVertex3f(0.0,0.3,0.15);
	glEnd();
	
	//Uniones
	glBegin(GL_LINES);
		glVertex3f(-0.2,0.3,0.15);
		glVertex3f(0.0,0.3,0.15);
	glEnd();
	//Ventana del centro
	glBegin(GL_LINE_STRIP);
		glVertex3f(-0.2,0.6,0.15);
		glVertex3f(-0.2,0.3,0.15);
		glVertex3f(-0.2,0.3,0.45);
	glEnd();
		
		
	//Circulo
	glPointSize(1);
    GLfloat puntox1=0.75, r1=0.15;
    GLfloat puntoy1=0.5;
    double h1,cx1,cy1;
    glBegin(GL_POINTS);
    for (h1=0;h1<=8; h1+=0.001)
    {
		cx1=r1*cos(h1) + puntox1;
		cy1=r1*sin(h1) + puntoy1;
		glVertex3f(cx1,0.0,cy1);
	}
	glEnd();
	
	//Lineas por fuera
	glBegin(GL_LINES);
		glVertex3f(-0.2,1.0,0.7);
		glVertex3f(-0.2,-0.2,0.7);
		glVertex3f(-0.2,-0.2,0.7);
		glVertex3f(0.9,-0.2,0.7);
		glVertex3f(1.0,-0.2,0.6);
		glVertex3f(1.0,-0.2,-0.3);
	glEnd();
	
	//Lineas por fuera
	glBegin(GL_LINES);
		glVertex3f(0.0,0.0,0.7);
		glVertex3f(0.9,0.0,0.7);
		glVertex3f(1.0,0.0,0.6);
		glVertex3f(1.0,0.0,-0.3);
		
	//Union de las lineas
		glVertex3f(1.0,0.0,-0.3);
		glVertex3f(1.0,-0.2,-0.3);
	glEnd();
	
	//Curvas
	glPointSize(1);
	GLfloat puntox=0.9, r=0.1;
    GLfloat puntoy=0.6;
    double h,cx,cy;
    glBegin(GL_POINTS);
    for (h=6;h<=8; h+=0.001)
    {
		cx=r*cos(h) + puntox;
		cy=r*sin(h) + puntoy;
		glVertex3f(cx,0.0,cy);
	}
	glEnd();
	
	glPointSize(1);
	GLfloat puntox2=0.9, r2=0.1;
    GLfloat puntoy2=0.6;
    double h2,cx2,cy2;
    glBegin(GL_POINTS);
    for (h2=6;h2<=8; h2+=0.001)
    {
		cx2=r2*cos(h2) + puntox2;
		cy2=r2*sin(h2) + puntoy2;
		glVertex3f(cx2,-0.2,cy2);
	}
	glEnd();
	
	
	glFlush();

}

void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1.0, 1.2, -1.0, 1.0, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (560, 240);
    glutCreateWindow ("Ejercicio 5");
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}

