
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-3.0, 3.0, -3.0, 3.0, -1.0, 1.0);
}

void display(void)
{
	glClearColor(0.5,1,0.6,0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glColor3f(0,1,0);
		glVertex3f(0.0f,0.5f,0.0f);
		glVertex3f(-0.5f,0.5f,0.0f);
		glVertex3f(-1.0f,0.0f,0.0f);
		glVertex3f(-1.0f,-0.5f,0.0f);	
		glVertex3f(0.0f,-0.5f,0.0f);
		//glVertex3f();
	glEnd();
	
	//Llanta
	glBegin(GL_POLYGON);
        glColor3f(1,1,0.8);
		glVertex3f(-0.75f,-0.3f,0.0f);
		glVertex3f(-0.35f,-0.3f,0.0f);
		glVertex3f(-0.35f,-0.8f,0.0f);
		glVertex3f(-0.75f,-0.8f,0.0f);
		glEnd();	
	
	glBegin(GL_POLYGON);
			glColor3f(1,0,0);
		glVertex3f(1.5f,0.0f,0.0f);
		glVertex3f(0.5f,-0.5f,0.0f);
		glVertex3f(3.0f,-0.5f,0.0f);
	glEnd();

    //Ventana
	glBegin(GL_POLYGON);
        glColor3f(1,1,0.8);
		glVertex3f(-0.55f,0.1f,0.0f);
		glVertex3f(-0.15f,0.1f,0.0f);
		glVertex3f(-0.15f,0.35f,0.0f);
		glVertex3f(-0.55f,0.35f,0.0f);
		glEnd();	
		
		//Llanta
	glBegin(GL_POLYGON);
        glColor3f(1,1,0.8);
		glVertex3f(1.0f,-0.3f,0.0f);
		glVertex3f(1.4f,-0.3f,0.0f);
		glVertex3f(1.4f,-0.8f,0.0f);
		glVertex3f(1.0f,-0.8f,0.0f);
		glEnd();
	
	//Llanta
	glBegin(GL_POLYGON);
        glColor3f(1,1,0.8);
		glVertex3f(1.7f,-0.3f,0.0f);
		glVertex3f(2.1f,-0.3f,0.0f);
		glVertex3f(2.1f,-0.8f,0.0f);
		glVertex3f(1.7f,-0.8f,0.0f);
		glEnd();
	
	
	glBegin(GL_POLYGON);
        glColor3f(0,1,0);
		glVertex3f(0.5f,0.5f,0.0f);
		glVertex3f(0.5f,0.0f,0.0f);
		glVertex3f(2.0f,0.0f,0.0f);
		glVertex3f(3.0f,0.5f,0.0f);
	glEnd();
	
	
	
	glFlush ();
    
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (560, 240);
    glutCreateWindow ("Ejemplo Puntos con Poligonos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
