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
    gluLookAt(20.0, 11, 18,  //eye(x,y,z)
              0.0, 0.0, 0.0,  //at (x,y,z)
              0.0, 1.0, 0.0); //up (x,y,z)
              	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(0.6,0.78,0.85);
	//Base de la casa
	glBegin(GL_POLYGON);
		glVertex3f(0.0,0.0,0.0);
		glVertex3f(0.0,0.0,8.0);
		glVertex3f(7.0,0.0,8.0);
		glVertex3f(7.0,0.0,6.0);
		glVertex3f(8.0,0.0,6.0);
		
		glVertex3f(8.0,0.0,1.0);
		glVertex3f(7.0,0.0,1.0);
		glVertex3f(7.0,0.0,0.0);
		glVertex3f(0.0,0.0,0.0);
	glEnd();
	
	//Pared Trasera
	glBegin(GL_POLYGON);
		glVertex3f(0.0,0.0,0.0);
		glVertex3f(0.0,0.0,8.0);
		glVertex3f(0.0,8.0,8.0);
		glVertex3f(0.0,8.0,0.0);
		glVertex3f(0.0,0.0,0.0);
	glEnd();
		
	glColor3f(0.6,0.78,0.85);
	//Pared costado
	glBegin(GL_POLYGON);
		glVertex3f(0.0,0.0,0.0);
		glVertex3f(7.0,0.0,0.0);
		glVertex3f(7.0,8.0,0.0);
		glVertex3f(3.5,10.0,0.0);
		glVertex3f(0.0,8.0,0.0);
		glVertex3f(0.0,0.0,0.0);
	glEnd();
	
	glColor3f(0.6,0.78,0.85);
	//Pared garage
	glBegin(GL_POLYGON);
		glVertex3f(0.0,0.0,8.0);
		glVertex3f(0.0,8.0,8.0);
		glVertex3f(3.5,10.0,8.0);
		glVertex3f(7.0,8.0,8.0);
		glVertex3f(7.0,0.0,8.0);
		glVertex3f(0.0,0.0,8.0);
	glEnd();
	
	//Pared Frente
	glBegin(GL_POLYGON);
		glVertex3f(7.0,0.0,6.0);
		glVertex3f(7.0,0.0,8.0);
		glVertex3f(7.0,8.0,8.0);
		glVertex3f(7.0,8.0,6.0);
		glVertex3f(8.0,8.0,6.0);
		glVertex3f(8.0,9.5,3.5);
		//Hasta aqui mitad	
		glVertex3f(8.0,8.0,1.0);
		glVertex3f(8.0,0.0,1.0);
		glVertex3f(8.0,8.0,1.0);
		glVertex3f(7.0,8.0,1.0);	
		glVertex3f(7.0,8.0,0.0);
		//Hasta aqui up part	
		glVertex3f(7.0,0.0,0.0);	
		glVertex3f(7.0,0.0,1.0);	
		glVertex3f(8.0,0.0,1.0);	
		glVertex3f(8.0,0.0,6.0);	

	glEnd();
	
	glColor3f(0.0,0.1,0.4);
	//Segunda Planta
	glBegin(GL_LINE_STRIP);
		glVertex3f(8.0,4.0,1.0);
		glVertex3f(8.0,4.0,6.0);
		glVertex3f(7.0,4.0,6.0);
		glVertex3f(7.0,4.0,8.0);
		glVertex3f(0.0,4.0,8.0);
	glEnd();
	
	//Lineas Verticales
	glBegin(GL_LINES);
		glVertex3f(7.0,0.0,8.0);
		glVertex3f(7.0,8.0,8.0);
		
		glVertex3f(8.0,0.0,1.0);
		glVertex3f(8.0,8.0,1.0);
		
		glVertex3f(8.0,0.0,6.0);
		glVertex3f(8.0,8.0,6.0);

		glVertex3f(7.0,0.0,6.0);
		glVertex3f(7.0,8.0,6.0);		

		glVertex3f(0.0,0.0,8.0);
		glVertex3f(7.0,0.0,8.0);		

		glVertex3f(0.0,0.0,8.0);
		glVertex3f(7.0,0.0,8.0);
		
		glVertex3f(0.0,0.0,8.0);
		glVertex3f(0.0,8.0,8.0);		

		glVertex3f(8.0,0.0,1.0);
		glVertex3f(8.0,0.0,6.0);		

		glVertex3f(7.0,0.0,6.0);
		glVertex3f(8.0,0.0,6.0);		

		glVertex3f(7.0,0.0,6.0);
		glVertex3f(7.0,0.0,6.4);		
	
		glVertex3f(7.0,0.0,7.6);
		glVertex3f(7.0,0.0,8.0);		
	
	glEnd();
	
	//Puerta
	glBegin(GL_LINE_STRIP);
		glVertex3f(7.0,0.0,6.4);
		glVertex3f(7.0,3.0,6.4);
		glVertex3f(7.0,3.0,7.6);
		glVertex3f(7.0,0.0,7.6);
		glVertex3f(7.0,0.0,6.4);
	glEnd();
	
	//Ventana Frontal abajo
	glBegin(GL_LINE_STRIP);
		glVertex3f(8.0,1.5,2.0);
		glVertex3f(8.0,3.5,2.0);
		glVertex3f(8.0,3.5,5.0);
		glVertex3f(8.0,1.5,5.0);
		glVertex3f(8.0,1.5,2.0);
	glEnd();

	//Ventana Frontal arriba
	glBegin(GL_LINE_STRIP);
		glVertex3f(8.0,5.5,2.0);
		glVertex3f(8.0,7.5,2.0);
		glVertex3f(8.0,7.5,5.0);
		glVertex3f(8.0,5.5,5.0);
		glVertex3f(8.0,5.5,2.0);
	glEnd();
	
	//Ventana Frontal puerta
	glBegin(GL_LINE_STRIP);
		glVertex3f(7.0,5.5,6.5);
		glVertex3f(7.0,7.5,6.5);
		glVertex3f(7.0,7.5,7.5);
		glVertex3f(7.0,5.5,7.5);
		glVertex3f(7.0,5.5,6.5);
	glEnd();
	
	//Ventana costado primera
	glBegin(GL_LINE_STRIP);
		glVertex3f(1.0,5.5,8.0);
		glVertex3f(1.0,7.5,8.0);
		glVertex3f(3.0,7.5,8.0);
		glVertex3f(3.0,5.5,8.0);
		glVertex3f(1.0,5.5,8.0);
	glEnd();
	
	//Ventana costado segunda
	glBegin(GL_LINE_STRIP);
		glVertex3f(4.0,5.5,8.0);
		glVertex3f(4.0,7.5,8.0);
		glVertex3f(6.0,7.5,8.0);
		glVertex3f(6.0,5.5,8.0);
		glVertex3f(4.0,5.5,8.0);
	glEnd();
	
	glColor3f(0.663, 0.663, 0.663);
	//Garage - Parte Trasera
	glBegin(GL_POLYGON);
		glVertex3f(0.0,0.0,8.0);
		glVertex3f(0.0,3.5,8.0);
		glVertex3f(0.0,4.0,10.0);
		glVertex3f(0.0,3.5,12.0);
		glVertex3f(0.0,0.0,12.0);
		glVertex3f(0.0,0.0,8.0);
	glEnd();
	
	//Garage - Parte Izquierda
	glBegin(GL_POLYGON);
		glVertex3f(0.0,0.0,12.0);
		glVertex3f(6.0,0.0,12.0);
		glVertex3f(6.0,3.5,12.0);
		glVertex3f(0.0,3.5,12.0);
		glVertex3f(0.0,0.0,12.0);
	glEnd();
	
	//Garage - Parte Derecha
	glBegin(GL_POLYGON);
		glVertex3f(6.0,0.0,8.0);
		glVertex3f(6.0,3.0,8.0);
		glVertex3f(6.0,3.0,8.25);
		glVertex3f(6.0,0.0,8.25);
		glVertex3f(6.0,0.0,8.0);
	glEnd();
	
	glColor3f(0.0,0.1,0.4);
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.0,3.5,12.0);
		glVertex3f(0.0,0.0,12.0);
		glVertex3f(6.0,0.0,12.0);
		glVertex3f(6.0,3.5,12.0);
	glEnd();	

	glBegin(GL_LINE_STRIP);
		glVertex3f(6.0,0,12.0);
		glVertex3f(6.0,0.0,11.75);
		glVertex3f(6.0,3.0,11.75);
		glVertex3f(6.0,3.0,8.25);
		glVertex3f(6.0,0.0,8.25);
	glEnd();	
	glColor3f(0.529, 0.808, 0.980);
	//Porton
	glBegin(GL_POLYGON);
		glVertex3f(5.5,3.5,11.75);
		glVertex3f(5.5,3.5,8.25);
		glVertex3f(7.0,1.0,8.25);
		glVertex3f(7.0,1.0,11.75);
		glVertex3f(5.5,3.5,11.75);
	glEnd();
	


	glColor3f(0.663, 0.663, 0.663);
	//Garage - Parte Frontal
	glBegin(GL_POLYGON);
		glVertex3f(6.0,0.0,12.0);
		glVertex3f(6.0,3.0,12.0);
		glVertex3f(6.0,3.0,11.75);
		glVertex3f(6.0,0.0,11.75);
		glVertex3f(6.0,0.0,12.0);
	glEnd();
	
	glBegin(GL_POLYGON);
		glVertex3f(6.0,3.0,12.0);
		glVertex3f(6.0,3.5,12.0);
		glVertex3f(6.0,4.0,10.0);
		glVertex3f(6.0,3.5,8.0);
		glVertex3f(6.0,3.0,8.0);
	glEnd();
	
	glColor3f(0.0,0.1,0.4);
	glBegin(GL_LINES);
		glVertex3f(6.0,3.0,11.75);
		glVertex3f(6.0,3.0,8.25);
	glEnd();
		
	glColor3f(0.722, 0.525, 0.043);//Brown
	//Garage - Techo
	glBegin(GL_POLYGON);
		glVertex3f(0.0,3.5,8.0);
		glVertex3f(0.0,4.0,10.0);
		glVertex3f(0.0,3.5,12.0);
		glVertex3f(6.0,3.5,12.0);
		glVertex3f(6.0,4.0,10.0);
		glVertex3f(6.0,3.5,8.0);
		glVertex3f(0.0,3.5,8.0);
	glEnd();
	
	glBegin(GL_POLYGON);
		glVertex3f(0.0,3.7,8.0);
		glVertex3f(0.0,4.2,10.0);
		glVertex3f(0.0,3.7,12.0);
		glVertex3f(6.0,3.7,12.0);
		glVertex3f(6.0,4.2,10.0);
		glVertex3f(6.0,3.7,8.0);
		glVertex3f(0.0,3.7,8.0);
	glEnd();
		glColor3f(0.0,0.1,0.4);
	//Lineas Garage
	glBegin(GL_LINES);
		glVertex3f(0.0,3.5,12.0);
		glVertex3f(0.0,3.7,12.0);
		
		glVertex3f(6.0,3.5,12.0);
		glVertex3f(6.0,3.7,12.0);
		
		glVertex3f(6.0,4.0,10.0);
		glVertex3f(6.0,4.2,10.0);
		
		glVertex3f(6.0,3.5,8.0);
		glVertex3f(6.0,3.7,8.0);
		
		glVertex3f(6.0,4.2,10.0);
		glVertex3f(0.0,4.2,10.0);
			
		glVertex3f(0.0,3.5,12.0);
		glVertex3f(6.0,3.5,12.0);

		glVertex3f(0.0,3.7,12.0);
		glVertex3f(6.0,3.7,12.0);
		
		glVertex3f(6.0,4.0,10.0);
		glVertex3f(6.0,3.5,12.0);

		glVertex3f(6.0,4.2,10.0);
		glVertex3f(6.0,3.7,12.0);

		glVertex3f(6.0,4.2,10.0);
		glVertex3f(6.0,3.7,8.0);

		glVertex3f(6.0,4.0,10.0);
		glVertex3f(6.0,3.5,8.0);

		glVertex3f(0.0,4.2,10.0);
		glVertex3f(0.0,3.7,8.0);

		glVertex3f(0.0,4.2,10.0);
		glVertex3f(0.0,3.7,12.0);

		glVertex3f(0.0,3.7,8.0);
		glVertex3f(6.0,3.7,8.0);
		
	glEnd();
	
	
	
	//Ventana Garage
	glBegin(GL_LINE_STRIP);
		glVertex3f(4.0,1.5,12.0);
		glVertex3f(5.0,1.5,12.0);
		glVertex3f(5.0,3.0,12.0);
		glVertex3f(4.0,3.0,12.0);
		glVertex3f(4.0,1.5,12.0);
	glEnd();
	
	//Piso puerta alfombra
	glColor3f(0.722, 0.525, 0.043);//Brown
	glBegin(GL_POLYGON);
		glVertex3f(7.0,0.1,6.4);
		glVertex3f(7.5,0.1,6.4);
		glVertex3f(7.5,0.1,7.6);
		glVertex3f(7.0,0.1,7.6);
		glVertex3f(7.0,0.1,6.4);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex3f(7.5,0.1,6.4);
		glVertex3f(7.5,0,6.4);
		glVertex3f(7.5,0,7.6);
		glVertex3f(7.5,0.1,7.6);
	glEnd();
	glBegin(GL_POLYGON);		
		glVertex3f(7.5,0,7.6);
		glVertex3f(7.0,0,7.6);
		glVertex3f(7.0,0.1,7.6);
		glVertex3f(7.5,0.1,7.6);
	glEnd();
	glColor3f(0.0,0.1,0.4);
	glBegin(GL_LINE_STRIP);
		glVertex3f(7.0,0,7.6);
		glVertex3f(7.0,0.1,7.6);
		glVertex3f(7.5,0.1,7.6);
		glVertex3f(7.5,0.1,6.4);
		glVertex3f(7.5,0,6.4);
		glVertex3f(7.5,0,7.6);
		glVertex3f(7.5,0.1,7.6);
		glVertex3f(7.5,0,7.6);
		glVertex3f(7.0,0,7.6);
	glEnd();
	
glColor3f(0.722, 0.525, 0.043);//Brown	
	//Techo de puerta
	glBegin(GL_POLYGON);
		glVertex3f(7.0,3.5,6.4);
		glVertex3f(7.0,3.5,7.6);
		glVertex3f(7.3,3.0,7.6);
		glVertex3f(7.3,3.0,6.4);
		glVertex3f(7.0,3.5,6.4);
		
		glVertex3f(7.0,3.5,7.6);
		glVertex3f(7.0,3.0,7.6);
		glVertex3f(7.3,3.0,7.6);
		glVertex3f(7.0,3.5,7.6);
		
	glEnd();
	
	glColor3f(0.722, 0.525, 0.043);//Brown	
	//Techo de la casa
	glBegin(GL_POLYGON);
		glVertex3f(-0.2,8.0,0.0);
		glVertex3f(-0.2,8.0,8.2);
		glVertex3f(3.5,10.0,8.2);
		glVertex3f(7.2,8.0,8.2);
		glVertex3f(7.2,8.0,0.0);
		glVertex3f(3.5,10.0,0.0);
		glVertex3f(-0.2,8.0,0.0);
		glVertex3f(-0.2,8.0,8.2);
		glVertex3f(3.5,10.0,8.2);
		glVertex3f(3.5,10.0,0.0);
	glEnd();
	
	glBegin(GL_POLYGON);
		glVertex3f(-0.2,8.1,0.0);
		glVertex3f(-0.2,8.1,8.2);
		glVertex3f(3.5,10.1,8.2);
		glVertex3f(7.2,8.1,8.2);
		glVertex3f(7.2,8.1,0.0);
		glVertex3f(3.5,10.1,0.0);
		glVertex3f(-0.2,8.1,0.0);
		glVertex3f(-0.2,8.1,8.2);
		glVertex3f(3.5,10.1,8.2);
		glVertex3f(3.5,10.1,0.0);
	glEnd();
	
	glColor3f(0.0,0.1,0.4);
	//Lineas del techo principal
	glBegin(GL_LINE_STRIP);
		glVertex3f(-0.2,8.0,8.2);
		glVertex3f(3.5,10.0,8.2);
		glVertex3f(7.2,8.0,8.2);
		glVertex3f(7.2,8.0,6.0);
		glVertex3f(7.2,8.1,6.0);
		glVertex3f(7.2,8.1,8.2);
		glVertex3f(3.5,10.1,8.2);
		glVertex3f(-0.2,8.1,8.2);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3f(3.5,10.1,8.2);
		glVertex3f(3.5,10.1,0.0);
		glVertex3f(3.5,10.1,0.0);
		glVertex3f(7.2,8.1,0.0);
	glEnd();
	
	glColor3f(0.722, 0.525, 0.043);//Brown		
	//Techo frente
	//Capa bajo
	glBegin(GL_POLYGON);
		glVertex3f(8.0,8.0,1.0);
		glVertex3f(8.0,9.5,3.5);
		glVertex3f(5.0,9.5,3.5);
		glVertex3f(7.0,8.0,1.0);
		glVertex3f(8.0,8.0,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
		glVertex3f(8.0,8.0,6.0);
		glVertex3f(7.0,8.0,6.0);
		glVertex3f(5.0,9.5,3.5);
		glVertex3f(8.0,9.5,3.5);
		glVertex3f(8.0,8.0,6.0);
	glEnd();

	//Capa arriba
	glBegin(GL_POLYGON);
		glVertex3f(8.0,8.1,1.0);
		glVertex3f(8.0,9.6,3.5);
		glVertex3f(5.0,9.6,3.5);
		glVertex3f(7.0,8.1,1.0);
		glVertex3f(8.0,8.1,1.0);
	glEnd();
	
	glBegin(GL_POLYGON);
		glVertex3f(8.0,8.1,6.0);
		glVertex3f(7.0,8.1,6.0);
		glVertex3f(5.0,9.6,3.5);
		glVertex3f(8.0,9.6,3.5);
		glVertex3f(8.0,8.1,6.0);
	glEnd();
	
	
	//Lineas del techo de frente
	glColor3f(0.0,0.1,0.4);
	glBegin(GL_LINES);
		glVertex3f(8.0,8.0,6.0);
		glVertex3f(8.0,8.1,6.0);
		
		glVertex3f(7.0,8.1,6.0);
		glVertex3f(7.0,8.0,6.0);

		glVertex3f(7.0,8.0,6.0);
		glVertex3f(8.0,8.0,6.0);

		glVertex3f(7.0,8.1,6.0);
		glVertex3f(8.0,8.1,6.0);
		
		glVertex3f(8.0,9.6,3.5);
		glVertex3f(5.0,9.6,3.5);

		glVertex3f(8.0,9.6,3.5);
		glVertex3f(8.0,8.1,6.0);

		glVertex3f(8.0,9.6,3.5);
		glVertex3f(8.0,8.1,1.0);

		glVertex3f(8.0,9.5,3.5);
		glVertex3f(8.0,8.0,6.0);

		glVertex3f(8.0,9.5,3.5);
		glVertex3f(8.0,8.0,1.0);

		glVertex3f(5.0,9.5,3.5);
		glVertex3f(7.0,8.1,6.0);
				
		glVertex3f(8.0,8.1,1.0);
		glVertex3f(8.0,8.0,1.0);
		
	glEnd();
	
		glColor3f(0.529, 0.808, 0.980);
	//Chimenea	
	glBegin(GL_POLYGON);
	//Superficie
		glVertex3f(3.25,10.5,4.6);
		glVertex3f(3.25,10.5,3.6);
		glVertex3f(3.75,10.5,3.6);
		glVertex3f(3.75,10.5,4.6);
		glVertex3f(3.25,10.5,4.6);
	glEnd();
	
	glBegin(GL_QUADS);
		glVertex3f(3.25,9.5,4.6);
		glVertex3f(3.25,10.5,4.6);
		glVertex3f(3.75,10.5,4.6);
		glVertex3f(3.75,9.5,4.6);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(3.75,9.5,4.6);
		glVertex3f(3.75,10.5,4.6);
		glVertex3f(3.75,10.5,3.6);
		glVertex3f(3.75,9.5,3.6);
	glEnd();
	
		
	glColor3f(0.0,0.1,0.4);
	glBegin(GL_LINE_LOOP);
		glVertex3f(3.75,9.5,4.6);
		glVertex3f(3.75,10.5,4.6);
		glVertex3f(3.75,10.5,3.6);
		glVertex3f(3.75,9.5,3.6);
	glEnd();

	glBegin(GL_LINE_LOOP);
		glVertex3f(3.25,9.5,4.6);
		glVertex3f(3.25,10.5,4.6);
		glVertex3f(3.75,10.5,4.6);
		glVertex3f(3.75,9.5,4.6);
	glEnd();
	
		glColor3f(0.0,0.1,0.4);
	//Detalles de la puerta
	glBegin(GL_QUADS);
		glVertex3f(7.0,1.4,6.7);
		glVertex3f(7.0,1.4,7.3);
		glVertex3f(7.0,1.6,7.3);
		glVertex3f(7.0,1.6,6.7);
	glEnd();
	
	glBegin(GL_QUADS);
		glVertex3f(7.0,2.8,6.5);
		glVertex3f(7.0,2.8,6.9);
		glVertex3f(7.0,1.8,6.9);
		glVertex3f(7.0,1.8,6.5);
	glEnd();
	
	glBegin(GL_QUADS);
		glVertex3f(7.0,2.8,7.0);
		glVertex3f(7.0,2.8,7.4);
		glVertex3f(7.0,1.8,7.4);
		glVertex3f(7.0,1.8,7.0);
	glEnd();
	
	glBegin(GL_QUADS);
		glVertex3f(7.0,0.2,6.5);
		glVertex3f(7.0,0.2,6.9);
		glVertex3f(7.0,1.2,6.9);
		glVertex3f(7.0,1.2,6.5);
	glEnd();
	
	glBegin(GL_QUADS);
		glVertex3f(7.0,0.2,7.0);
		glVertex3f(7.0,0.2,7.4);
		glVertex3f(7.0,1.2,7.4);
		glVertex3f(7.0,1.2,7.0);
	glEnd();
	
	//Detalles de Ventana Frente- Abajo
	glBegin(GL_QUADS);
		glVertex3f(8.0,1.6,2.1);
		glVertex3f(8.0,3.4,2.1);
		glVertex3f(8.0,3.4,2.9);
		glVertex3f(8.0,1.6,2.9);
	glEnd();
	
	glBegin(GL_QUADS);
		glVertex3f(8.0,1.6,3.1);
		glVertex3f(8.0,3.4,3.1);
		glVertex3f(8.0,3.4,3.9);
		glVertex3f(8.0,1.6,3.9);
	glEnd();	
	
	glBegin(GL_QUADS);
		glVertex3f(8.0,1.6,4.1);
		glVertex3f(8.0,3.4,4.1);
		glVertex3f(8.0,3.4,4.9);
		glVertex3f(8.0,1.6,4.9);
	glEnd();

	//Detalles de Ventana Frente- ARRIBA
	glBegin(GL_QUADS);
		glVertex3f(8.0,5.6,2.1);
		glVertex3f(8.0,7.4,2.1);
		glVertex3f(8.0,7.4,2.9);
		glVertex3f(8.0,5.6,2.9);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(8.0,5.6,3.1);
		glVertex3f(8.0,7.4,3.1);
		glVertex3f(8.0,7.4,3.9);
		glVertex3f(8.0,5.6,3.9);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(8.0,5.6,4.1);
		glVertex3f(8.0,7.4,4.1);
		glVertex3f(8.0,7.4,4.9);
		glVertex3f(8.0,5.6,4.9);
	glEnd();
	
	//Detalles de ventana - Arriba puerta
	glBegin(GL_QUADS);
		glVertex3f(7.0,5.6,6.6);
		glVertex3f(7.0,7.4,6.6);
		glVertex3f(7.0,7.4,7.4);
		glVertex3f(7.0,5.6,7.4);
	glEnd();

	//Detalles de ventana - Pared Garage 1
	glBegin(GL_QUADS);
		glVertex3f(1.1,5.6,8.0);
		glVertex3f(1.1,7.4,8.0);
		glVertex3f(1.9,7.4,8.0);
		glVertex3f(1.9,5.6,8.0);
	glEnd();	

	glBegin(GL_QUADS);
		glVertex3f(2.1,5.6,8.0);
		glVertex3f(2.1,7.4,8.0);
		glVertex3f(2.9,7.4,8.0);
		glVertex3f(2.9,5.6,8.0);
	glEnd();	

	//Detalles de ventana - Pared Garage 2
	glBegin(GL_QUADS);
		glVertex3f(4.1,5.6,8.0);
		glVertex3f(4.1,7.4,8.0);
		glVertex3f(4.9,7.4,8.0);
		glVertex3f(4.9,5.6,8.0);
	glEnd();	

	glBegin(GL_QUADS);
		glVertex3f(5.1,5.6,8.0);
		glVertex3f(5.1,7.4,8.0);
		glVertex3f(5.9,7.4,8.0);
		glVertex3f(5.9,5.6,8.0);
	glEnd();	

	//Ventana Garage
	glBegin(GL_QUADS);
		glVertex3f(4.1,1.6,12.0);
		glVertex3f(4.9,1.6,12.0);
		glVertex3f(4.9,2.9,12.0);
		glVertex3f(4.1,2.9,12.0);
	glEnd();
	
	glColor3f(0.6,0.78,0.85);
	//Relleno de pared principales
	glBegin(GL_POLYGON);
		glVertex3f(0.0,8.0,8.0);
		glVertex3f(3.5,9.8,8.0);
		glVertex3f(6.8,8.0,8.0);
	glEnd();
	
	glBegin(GL_POLYGON);
		glVertex3f(8.0,8.0,6.0);
		glVertex3f(8.0,9.5,3.5);
		glVertex3f(8.0,8.0,1.0);
	glEnd();

	glColor3f(0.0,0.1,0.4);	
	//Lineas de Ventana de puerta
	glBegin(GL_LINE_STRIP);	
		glVertex3f(7.0,3.5,6.4);
		glVertex3f(7.0,3.5,7.6);
		glVertex3f(7.0,3.0,7.6);
		glVertex3f(7.3,3.0,7.6);
		glVertex3f(7.3,3.0,6.4);
		glVertex3f(7.0,3.5,6.4);
		glVertex3f(7.0,3.5,7.6);
		glVertex3f(7.3,3.0,7.6);
	glEnd();
	
	//Lineas de Garage	
	glBegin(GL_LINE_STRIP);
		glVertex3f(6.0,3.0,8.25);
		glVertex3f(7.0,1.0,8.25);
		glVertex3f(7.0,1.0,11.75);
		glVertex3f(6.0,3.0,11.75);
	glEnd();


	glFlush();
	glutSwapBuffers();
}

void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1.0, 1.0, -1.0, 1.0, 2.0, 30.0);
	glMatrixMode(GL_MODELVIEW);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (560, 240);
    glutCreateWindow ("Ejercicio 6");
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}

