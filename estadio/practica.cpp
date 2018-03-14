

/*Integrantes:
 * Jonathan Rene Zavala Rivas
 * Victor Enrique Coreas Robles
 * Guadalupe de Jesus Sagastume Garcia
 * Algoritmos Graficos
 */
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(10.0, -10.0, 10.0, -10.0, 10.0, -10.0);
}

void display(void)
{
	//Cuadro de Estadio mediante lineas
	glClearColor(0.0,1.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_LINES);
		glVertex3f(-9.0f,9.0f,0.0f);
		glVertex3f(9.0f,9.0f,0.0f);
		glVertex3f(9.0f,9.0f,0.0f);
		glVertex3f(9.0f,-9.0f,0.0f);
		glVertex3f(9.0f,-9.0f,0.0f);
		glVertex3f(-9.0f,-9.0f,0.0f);	
		glVertex3f(-9.0f,-9.0f,0.0f);
		glVertex3f(-9.0f,9.0f,0.0f);
	glEnd();
	
	  glBegin(GL_LINES);
		glVertex3f(0.0f,9.0f,0.0f);
		glVertex3f(0.0f,-9.0f,0.0f);
	glEnd();
	
	  glBegin(GL_LINES);
		glVertex3f(-9.0f,6.0f,0.0f);
		glVertex3f(-6.0f,6.0f,0.0f);
		glVertex3f(-6.0f,6.0f,0.0f);
		glVertex3f(-6.0f,-6.0f,0.0f);
		glVertex3f(-6.0f,-6.0f,0.0f);
		glVertex3f(-9.0f,-6.0f,0.0f);
	glEnd();
	
	  glBegin(GL_LINES);
		glVertex3f(-9.0f,3.0f,0.0f);
		glVertex3f(-7.5f,3.0f,0.0f);
		glVertex3f(-7.5f,3.0f,0.0f);
		glVertex3f(-7.5f,-3.0f,0.0f);
		glVertex3f(-7.5f,-3.0f,0.0f);
		glVertex3f(-9.0f,-3.0f,0.0f);
	glEnd();
	

	//Area Grande 1
		  glBegin(GL_LINES);
		glVertex3f(9.0f,6.0f,0.0f);
		glVertex3f(6.0f,6.0f,0.0f);
		glVertex3f(6.0f,6.0f,0.0f);
		glVertex3f(6.0f,-6.0f,0.0f);
		glVertex3f(6.0f,-6.0f,0.0f);
		glVertex3f(9.0f,-6.0f,0.0f);
	glEnd();
	//Area Grande 2
	  glBegin(GL_LINES);
		glVertex3f(9.0f,3.0f,0.0f);
		glVertex3f(7.5f,3.0f,0.0f);
		glVertex3f(7.5f,3.0f,0.0f);
		glVertex3f(7.5f,-3.0f,0.0f);
		glVertex3f(7.5f,-3.0f,0.0f);
		glVertex3f(9.0f,-3.0f,0.0f);
	glEnd();
	glPointSize(4);
	
	//penal primero
	glPointSize(4);
	  glBegin(GL_POINTS);
		glVertex3f(-6.75F,0.0f,0.0f);
	glEnd();
	
	//penal segundo
	  glBegin(GL_POINTS);
		glVertex3f(6.75F,0.0f,0.0f);
	glEnd();
	
	//centro
	glPointSize(4);
		glBegin(GL_POINTS);
		glVertex3f(0.0F,0.0f,0.0f);
	glEnd();
	
   //Centro del estadio
   GLfloat punto_x=0;
   GLfloat punto_y=0;
    
    double i,cx,cy;
    int radiox=2;
    int radioy=2;
    
    glPointSize(1);
    glBegin(GL_POINTS);
    for (i=0;i<=8; i+=0.01)
    {
		cx=radiox*cos(i) + punto_x;
		cy=radiox*sin(i) + punto_y;
		glVertex3f(cx,cy,0.0);
	}
	 glEnd();
	
	//media luna
	GLfloat punto_x1=-6;
   GLfloat punto_y1=0;
    
    double n,cx1,cy1;
    double radiox1=2.0;
    double radioy1=2.0;
    
    glPointSize(1);
    glBegin(GL_POINTS);
    for (n=-1.6;n<=1.6; n+=0.01)
    {
		cx1=radiox1*cos(n) + punto_x1;
		cy1=radiox1*sin(n) + punto_y1;
		glVertex3f(cx1,cy1,0.0);
	}
	 glEnd();
	
	//media luna2
	GLfloat punto_x2=6;
   GLfloat punto_y2=0;
    
    double k,cx2,cy2;
    double radiox2=2.0;
    double radioy2=2.0;
    
    glPointSize(1);
    glBegin(GL_POINTS);
    for (k=1.6;k<=4.7; k+=0.01)
    {
		cx2=radiox2*cos(k) + punto_x2;
		cy2=radiox2*sin(k) + punto_y2;
		glVertex3f(cx2,cy2,0.0);
	}
	 glEnd();

	//Esquina 1
	GLfloat punto_x3=-9, r3=1.2;
   GLfloat punto_y3=9;
    
    double h,cx3,cy3;
    
    glPointSize(1);
    glBegin(GL_POINTS);
    for (h=-1.5;h<=0.0; h+=0.001)
    {
		cx3=r3*cos(h) + punto_x3;
		cy3=r3*sin(h) + punto_y3;
		glVertex3f(cx3,cy3,0.0);
	}
	 glEnd();
	 
	//Esquina 2	 
	GLfloat punto_x4=9, r4=1.2;
   GLfloat punto_y4=-9;
    
    double h1,cx4,cy4;
    
    glPointSize(1);
    glBegin(GL_POINTS);
    for (h1=1.6;h1<=3.1; h1+=0.001)
    {
		cx4=r4*cos(h1) + punto_x4;
		cy4=r4*sin(h1) + punto_y4;
		glVertex3f(cx4,cy4,0.0);
	}
	 glEnd();

	//Esquina 3	
	GLfloat punto_x5=9, r5=1.2;
   GLfloat punto_y5=9;
    
    double h2,cx5,cy5;
    
    glPointSize(1);
    glBegin(GL_POINTS);
    for (h2=3.16;h2<=4.7; h2+=0.001)
    {
		cx5=r5*cos(h2) + punto_x5;
		cy5=r5*sin(h2) + punto_y5;
		glVertex3f(cx5,cy5,0.0);
	}
	 glEnd();
	//Esquina 4	 
	GLfloat punto_x6=-9, r6=1.2;
   GLfloat punto_y6=-9;
    
    double h3,cx6,cy6;
    
    glPointSize(1);
    glBegin(GL_POINTS);
    for (h3=0.0;h3<=1.5; h3+=0.001)
    {
		cx6=r6*cos(h3) + punto_x6;
		cy6=r6*sin(h3) + punto_y6;
		glVertex3f(cx6,cy6,0.0);
	}
	 glEnd();
	glFlush ();
    
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 420);
    glutInitWindowPosition (560, 240);
    glutCreateWindow ("Ejemplo Estadio");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
