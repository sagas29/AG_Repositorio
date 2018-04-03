#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

GLfloat ctrlpoints[4][3] = {
        { -1.7, -0.8	, 0.0}, { -1.8, 0.8, 0.0}, 
        {-0.6, -0.1, 0.0}, {-0.4, 0.8, 0.0}};
        
GLfloat ctrlpoints1[4][3] = {
        { 1.7, 0.4	, 0.0}, { 1.6, 0.1, 0.0}, 
        {0.3, 0.1, 0.0}, {0.4, 0.8, 0.0}};

void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.5, 2.5, -2.5, 2.5, -2.5, 2.5);
       glClearColor (1.0, 1.0, 1.0, 1.0);
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPointSize(3);
    glColor3f(0.0f, 0.0f, 0.0f);
	
	glBegin(GL_LINE_STRIP);
		glVertex2f(1.68,-0.4);
		glVertex2f(1.9,-0.4);
		glVertex2f(1.9,0.4);
		glVertex2f(1.7,0.4);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex2f(0.4,0.8);
		glVertex2f(0.4,1.0);
		glVertex2f(-0.4,1.0);
		glVertex2f(-0.4,0.8);
	glEnd();
	
	glBegin(GL_LINE_STRIP);
		glVertex2f(0.3,1.0);
		glVertex2f(0.3,1.2);
		glVertex2f(-0.3,1.2);
		glVertex2f(-0.3,1.0);
	glEnd();
	
	//Desague
	glBegin(GL_LINE_STRIP);
		glVertex2f(-1.1,-0.6);
		glVertex2f(-1.1,-0.8);
		glVertex2f(-1.7,-0.8);
		glVertex2f(-1.7,-0.6);
	glEnd();
	
	glShadeModel(GL_FLAT);	
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 4, &ctrlpoints[0][0]);   
	glEnable(GL_MAP1_VERTEX_3); 
	int i;
    glBegin(GL_LINE_STRIP);
      for (i = 0; i <= 30; i++) 
         glEvalCoord1f((GLfloat) i/30.0);
    glEnd();
    
    /*glBegin(GL_POINTS);
      for (i = 0; i <= 4; i++) 
         glVertex3fv(&ctrlpoints[i][0]);
    glEnd();
    
    */
    //Llave
    glBegin(GL_LINES);
		glVertex2f(0.1,1.2);
		glVertex2f(0.1,1.8);
		glVertex2f(-0.1,1.2);
		glVertex2f(-0.1,1.8);
    glEnd();
    
    glPointSize(1);
    GLfloat puntox=0.0, r=0.25;
    GLfloat puntoy=2.0;
    double h,cx,cy;
    glBegin(GL_POINTS);
    for (h=-1.15;h<=4.3; h+=0.001)
    {
		cx=r*cos(h) + puntox;
		cy=r*sin(h) + puntoy;
		glVertex3f(cx,cy,0.0);
	}
	glEnd();
    
    glBegin(GL_LINE_STRIP);
		glVertex2f(0.25,2.0);
		glVertex2f(0.7,2.1);
		glVertex2f(0.7,1.9);
		glVertex2f(0.25,2.0);
    glEnd();
    
    glBegin(GL_LINE_STRIP);
		glVertex2f(-0.25,2.0);
		glVertex2f(-0.7,2.1);
		glVertex2f(-0.7,1.9);
		glVertex2f(-0.25,2.0);
    glEnd();
    
    glBegin(GL_LINES);
		glVertex2f(0.4,-0.3);
		glVertex2f(1.4,-0.3);
		glVertex2f(-0.4,-0.3);
		glVertex2f(-0.8,-0.3);
    glEnd();
        
    //Esquina Desague
    glPointSize(1);
    GLfloat puntox2=-0.72, r2=0.4;
    GLfloat puntoy2=-0.69;
    double h2,cx2,cy2;
    glBegin(GL_POINTS);
    for (h2=1.75;h2<=2.92; h2+=0.001)
    {
		cx2=r2*cos(h2) + puntox2;
		cy2=r2*sin(h2) + puntoy2;
		glVertex3f(cx2,cy2,0.0);
	}
	glEnd();
    
    //Esquinas del centro Izquierda  
    glPointSize(1);
    GLfloat puntox3=-0.43, r3=0.14;
    GLfloat puntoy3=-0.44;
    double h3,cx3,cy3;
    glBegin(GL_POINTS);
    for (h3=0;h3<=1.5; h3+=0.001)
    {
		cx3=r3*cos(h3) + puntox3;
		cy3=r3*sin(h3) + puntoy3;
		glVertex3f(cx3,cy3,0.0);
	}
	glEnd();
	
	//Esquinas del centro Derecha
	glPointSize(1);
    GLfloat puntox4=0.43, r4=0.14;
    GLfloat puntoy4=-0.44;
    double h4,cx4,cy4;
    glBegin(GL_POINTS);
    for (h4=1.57;h4<=3.14; h4+=0.001)
    {
		cx4=r4*cos(h4) + puntox4;
		cy4=r4*sin(h4) + puntoy4;
		glVertex3f(cx4,cy4,0.0);
	}
	glEnd();
	
	//Esquina Derecha debajo
	glPointSize(1);
    GLfloat puntox5=1.505, r5=0.2;
    GLfloat puntoy5=-0.47;
    double h5,cx5,cy5;
    glBegin(GL_POINTS);
    for (h5=0.4;h5<=2.09; h5+=0.001)
    {
		cx5=r5*cos(h5) + puntox5;
		cy5=r5*sin(h5) + puntoy5;
		glVertex3f(cx5,cy5,0.0);
	}
	glEnd();
	
	
  
	glShadeModel(GL_FLAT);	
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 4, &ctrlpoints1[0][0]);   
	glEnable(GL_MAP1_VERTEX_3); 
	int j;
    glBegin(GL_LINE_STRIP);
      for (j = 0; j <= 30; j++) 
         glEvalCoord1f((GLfloat) j/30.0);
    glEnd();


     //Media Luna
    glPointSize(1);
    GLfloat puntox1=0.0, r1=0.3;
    GLfloat puntoy1=-0.39;
    double h1,cx1,cy1;
    glBegin(GL_POINTS);
    for (h1=3.2;h1<=6.2; h1+=0.001)
    {
		cx1=r1*cos(h1) + puntox1;
		cy1=r1*sin(h1) + puntoy1;
		glVertex3f(cx1,cy1,0.0);
	}
	glEnd();
	
	glFlush ();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (560, 240);
    glutCreateWindow ("Ejercicio 4");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

