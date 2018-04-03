#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>


GLfloat ctrlpoints[4][3] = {
        { -8.5, -10.0, 0.0}, { -4.0, 12.0, 0.0}, 
        {4.0, 12.0, 0.0}, {8.5, -10.0, 0.0}};

GLfloat ctrlpoints1[4][3] = {
        { -8.3, -10.0, 0.0}, { -4.0, 11.0, 0.0}, 
        {4.0, 11.0, 0.0}, {8.3, -10.0, 0.0}};
        
        
void init (void)
{
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-12.0, 12.0, -12.0, 12.0, -12.0, 12.0);
   glClearColor(1.0,1.0,1.0,1.0);
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPointSize(10);	
	glColor3f(0.14902f, 0.247059f, 0.147059f);
	
	//Base Puente
	glBegin(GL_LINES);
		glVertex3f(-10.0,0.0,0);
		glVertex3f(10.0,0.0,0);
		glVertex3f(-10.0,-0.2,0);
		glVertex3f(10.0,-0.2,0);
	glEnd();
	 
	 //Union de base
	 glBegin(GL_LINES);
		glVertex3f(-10.0,0.0,0);
		glVertex3f(-10.0,-0.2,0);
		glVertex3f(10.0,0.0,0);
		glVertex3f(10.0,-0.2,0);
	glEnd();
	
	//Soporte de la base
	glBegin(GL_LINES);
		glVertex3f(-9.5,-0.8,0);
		glVertex3f(9.5,-0.8,0);
		glVertex3f(-9.5,-0.2,0);
		glVertex3f(-9.5,-0.8,0);
		glVertex3f(9.5,-0.2,0);
		glVertex3f(9.5,-0.8,0);
	glEnd();	
	
	//Pilar izquierdo
	glBegin(GL_LINES);
		glVertex3f(-8.5,-0.8,0);
		glVertex3f(-8.5,-10.0,0);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex3f(-8.25,-0.8,0);
		glVertex3f(-8.25,-10.0,0);
	glEnd();	
	
	glBegin(GL_LINES);
		glVertex3f(-8.5,-10.0,0);
		glVertex3f(-8.25,-10.0,0);
	glEnd();	
	
	//Soporte Pilares izquierdo
	glBegin(GL_LINES);
		glVertex3f(-8.5,-1.8,0);
		glVertex3f(-9.0,-0.8,0);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex3f(-8.5,-2.2,0);
		glVertex3f(-9.2,-0.8,0);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex3f(-8.25,-1.8,0);
		glVertex3f(-7.75,-0.8,0);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex3f(-8.25,-2.2,0);
		glVertex3f(-7.55,-0.8,0);
	glEnd();
	
	//Pilar derecho
	glBegin(GL_LINES);
		glVertex3f(8.5,-0.8,0);
		glVertex3f(8.5,-10.0,0);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex3f(8.25,-0.8,0);
		glVertex3f(8.25,-10.0,0);
	glEnd();	
	
	glBegin(GL_LINES);
		glVertex3f(8.5,-10.0,0);
		glVertex3f(8.25,-10.0,0);
	glEnd();
	
	//Soporte Pilares derecho
	glBegin(GL_LINES);
		glVertex3f(8.5,-1.8,0);
		glVertex3f(9.0,-0.8,0);
		glVertex3f(8.5,-2.2,0);
		glVertex3f(9.2,-0.8,0);
		glVertex3f(8.25,-1.8,0);
		glVertex3f(7.75,-0.8,0);
		glVertex3f(8.25,-2.2,0);
		glVertex3f(7.55,-0.8,0);
	glEnd();	
	
	//Arco Puente
	glShadeModel(GL_FLAT);	
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 4, &ctrlpoints[0][0]);   
	glEnable(GL_MAP1_VERTEX_3); 
	int i;
    glBegin(GL_LINE_STRIP);
      for (i = 0; i <= 30; i++) 
         glEvalCoord1f((GLfloat) i/30.0);
    glEnd();
    
    glShadeModel(GL_FLAT);    
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 4, &ctrlpoints1[0][0]);
    glEnable(GL_MAP1_VERTEX_3);   
    int i1;
    glBegin(GL_LINE_STRIP);
      for (i1 = 0; i1 <= 30; i1++) 
         glEvalCoord1f((GLfloat) i1/30.0);
    glEnd();
	
	//Barras Soporte
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.1,0,0);
		glVertex3f(-0.1,0.0,0);
		glVertex3f(-0.1,5.7,0);
		glVertex3f(0.1,5.7,0);
		glVertex3f(0.1,0,0);
	glEnd();

	glBegin(GL_LINE_STRIP);
		glVertex3f(1.7,0.0,0);
		glVertex3f(1.5,0.0,0);
		glVertex3f(1.5,5.35,0);
		glVertex3f(1.7,5.2,0);
		glVertex3f(1.7,0,0);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex3f(3.3,0,0);
		glVertex3f(3.1,0.0,0);
		glVertex3f(3.1,3.9,0);
		glVertex3f(3.3,3.67,0);
		glVertex3f(3.3,0,0);
	glEnd();
		
	glBegin(GL_LINE_STRIP);
		glVertex3f(4.8,0,0);
		glVertex3f(4.6,0.0,0);
		glVertex3f(4.6,1.6,0);
		glVertex3f(4.8,1.2,0);
		glVertex3f(4.8,0,0);
	glEnd();	
	
	glBegin(GL_LINE_STRIP);
		glVertex3f(-1.7,0.0,0);
		glVertex3f(-1.5,0.0,0);
		glVertex3f(-1.5,5.35,0);
		glVertex3f(-1.7,5.2,0);
		glVertex3f(-1.7,0,0);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex3f(-3.3,0,0);
		glVertex3f(-3.1,0.0,0);
		glVertex3f(-3.1,3.9,0);
		glVertex3f(-3.3,3.67,0);
		glVertex3f(-3.3,0.0,0);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex3f(-4.8,0.0,0);
		glVertex3f(-4.6,0.0,0);
		glVertex3f(-4.6,1.6,0);
		glVertex3f(-4.8,1.2,0);
		glVertex3f(-4.8,0.0,0);
	glEnd();	
	
	
	//Barras Debajo
	glBegin(GL_LINE_STRIP);
		glVertex3f(-6.5,-0.8,0);
		glVertex3f(-6.5,-2.2,0);
		glVertex3f(-6.7,-2.8,0);
		glVertex3f(-6.7,-0.8,0);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex3f(6.5,-0.8,0);
		glVertex3f(6.5,-2.2,0);
		glVertex3f(6.7,-2.8,0);
		glVertex3f(6.7,-0.8,0);
	glEnd();
	
	
	glFlush ();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (560, 240);
    glutCreateWindow ("Ejercicio 1");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

