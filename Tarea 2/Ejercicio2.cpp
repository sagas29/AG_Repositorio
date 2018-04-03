#include <GL/gl.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>

void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int triangleAmount = 20; //# of triangles used to draw circle
	float PI=3.141592;
	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) { 
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)), 
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void init (void)
{
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-12.0, 12.0, -12.0, 12.0, -12.0, 12.0);
   glClearColor (1.0, 1.0, 1.0, 1.0);
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPointSize(10);
	
	//Centro	
	glColor3f(0.0f, 0.0f, 0.0f);
	GLfloat punto_x=0.0, r=3.0	;
    GLfloat punto_y=4.0;
    double h1,cx,cy;
    glPointSize(2);
    glBegin(GL_POLYGON);
    for (h1=0;h1<=6; h1+=0.001)
    {
		cx=r*cos(h1) + punto_x;
		cy=r*sin(h1) + punto_y;
		glVertex3f(cx,cy,0.0);
	}
	glEnd();
	
	glColor3f(1.0f, 1.0f, 1.0f);
	GLfloat punto_x3=0.0, r3=2.0	;
    GLfloat punto_y3=4.0;
    double h,cx3,cy3;
    glPointSize(2);
    glBegin(GL_POLYGON);
    for (h=0;h<=6; h+=0.001)
    {
		cx3=r3*cos(h) + punto_x3;
		cy3=r3*sin(h) + punto_y3;
		glVertex3f(cx3,cy3,0.0);
	}
	glEnd();
	
	//Izquierda
	glColor3f(0.0f, 0.5f, 0.2f);
	GLfloat puntox=-6.0, r1=3.0	;
    GLfloat puntoy=-2.0;
    double h3,cx1,cy1;
    glPointSize(2);
    glBegin(GL_POLYGON);
    for (h3=0;h3<=6; h3+=0.001)
    {
		cx1=r1*cos(h3) + puntox;
		cy1=r1*sin(h3) + puntoy;
		glVertex3f(cx1,cy1,0.0);
	}
	glEnd();
	
	glColor3f(1.0f, 1.0f, 1.0f);
	GLfloat punto_x2=-6.0, r2=2.0	;
    GLfloat punto_y2=-2.0;
    double h4,cx2,cy2;
    glPointSize(2);
    glBegin(GL_POLYGON);
    for (h4=0;h4<=6; h4+=0.001)
    {
		cx2=r2*cos(h4) + punto_x2;
		cy2=r2*sin(h4) + punto_y2;
		glVertex3f(cx2,cy2,0.0);
	}
	glEnd();
	
	//Derecha
	glColor3f(0.4f, 0.4f, 0.4f);
	GLfloat puntoz1=6.0, r5=3.0	;
    GLfloat puntoj1=-2.0;
    double h5,cx5,cy5;
    glPointSize(2);
    glBegin(GL_POLYGON);
    for (h5=0;h5<=6; h5+=0.001)
    {
		cx5=r5*cos(h5) + puntoz1;
		cy5=r5*sin(h5) + puntoj1;
		glVertex3f(cx5,cy5,0.0);
	}
	glEnd();
	
	glColor3f(1.0f, 1.0f, 1.0f);
	GLfloat puntox6=6.0, r6=2.0	;
    GLfloat puntoy6=-2.0;
    double h6,cx6,cy6;
    glPointSize(2);
    glBegin(GL_POLYGON);
    for (h6=0;h6<=6; h6+=0.001)
    {
		cx6=r6*cos(h6) + puntox6;
		cy6=r6*sin(h6) + puntoy6;
		glVertex3f(cx6,cy6,0.0);
	}
	glEnd();
	
	//Tuercas del centro
	glColor3f(0.0f, 0.0f, 0.0f);
	int nn=0, punto1=5,punto2=13,punto3 =23,punto4=31;
		 while(nn<=10){
			glBegin(GL_POLYGON);
			glVertex2f(3*cos(punto1*M_PI/180.0),3*sin(punto1*M_PI/180.0)+4.0);
			glVertex2f(3.7*cos(punto2*M_PI/180.0),3.7*sin(punto2*M_PI/180.0)+4.0); 
			glVertex2f(3.65*cos(punto3*M_PI/180.0),3.7*sin(punto3*M_PI/180.0)+4.0);
			glVertex2f(3*cos(punto4*M_PI/180.0),3*sin(punto4*M_PI/180.0)+4.0);
			glEnd();
			nn+=1;
			punto1+=36;
			punto2+=36;
			punto3+=36;
			punto4+=36;
		}

	//Tuercas de la derecha
	glColor3f(0.4f, 0.4f, 0.4f);
	int n=0, puntox1=5,puntox2=13,puntox3 =23,puntox4=31;
		 while(n<=10){
			glBegin(GL_POLYGON);
			glVertex2f(3*cos(puntox1*M_PI/180.0)+6.0,3*sin(puntox1*M_PI/180.0)-2.0);
			glVertex2f(3.7*cos(puntox2*M_PI/180.0)+6.0,3.7*sin(puntox2*M_PI/180.0)-2.0); 
			glVertex2f(3.65*cos(puntox3*M_PI/180.0)+6.0,3.7*sin(puntox3*M_PI/180.0)-2.0);
			glVertex2f(3*cos(puntox4*M_PI/180.0)+6.0,3*sin(puntox4*M_PI/180.0)-2.0);
			glEnd();
			n+=1;
			puntox1+=36;
			puntox2+=36;
			puntox3+=36;
			puntox4+=36;
		}

	//Tuercas de la izquierda
	glColor3f(0.0f, 0.5f, 0.2f);
	int n1=0, puntoy1=5,puntoy2=13,puntoy3 =23,puntoy4=31;
		 while(n1<=10){
			glBegin(GL_POLYGON);
			glVertex2f(3*cos(puntoy1*M_PI/180.0)-6.0,3*sin(puntoy1*M_PI/180.0)-2.0);
			glVertex2f(3.7*cos(puntoy2*M_PI/180.0)-6.0,3.7*sin(puntoy2*M_PI/180.0)-2.0); 
			glVertex2f(3.65*cos(puntoy3*M_PI/180.0)-6.0,3.7*sin(puntoy3*M_PI/180.0)-2.0);
			glVertex2f(3*cos(puntoy4*M_PI/180.0)-6.0,3*sin(puntoy4*M_PI/180.0)-2.0);
			glEnd();
			n1+=1;
			puntoy1+=36;
			puntoy2+=36;
			puntoy3+=36;
			puntoy4+=36;
		}
		
	glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (560, 240);
    glutCreateWindow ("Ejercicio 2");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
