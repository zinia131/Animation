#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
int windowWidth=500; int windowHeight=500;
bool flagScale=false;
double boat_move=0;
double boat1_move=0;
double bird1_move=0;
double bird2_move=0;
double bird3_move=0;
double bird4_move=0;

void sky()
{
    glPushMatrix();
    glBegin(GL_QUADS);
glColor3f(255,140,0);
    glVertex2f(-16,8);
glColor3f(255 ,255, 0);
    glVertex2f(16,8);
glColor3f(255 ,140 ,0);
    glVertex2f(16,16);

    glVertex2f(-16,16);
    glEnd();
glPopMatrix();
}

void boat()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(0,2.2);
    glVertex2f(4,2.2);
    glVertex2f(5,4);

    glVertex2f(-1,4);


    glEnd();
glPopMatrix();

glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(2,5);
    glVertex2f(4,5);

    glVertex2f(4,7);
    glVertex2f(2,7);


    glEnd();
glPopMatrix();

glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(4,4);
    glVertex2f(4,7);

    glEnd();
glPopMatrix();
}

void boat1()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(-12,-15);
    glVertex2f(-10,-15);
    glVertex2f(-9,-14);

    glVertex2f(-13,-14);


    glEnd();
glPopMatrix();

glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(-11,-13);
    glVertex2f(-10,-13);
    glVertex2f(-10,-12);

    glVertex2f(-11,-12);


    glEnd();
glPopMatrix();

glPushMatrix();
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-10,-12);
    glVertex2f(-10,-14);

    glEnd();
glPopMatrix();
}




void field()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(192, 255 ,62);
    glVertex2f(-16,-12);
    glVertex2f(-11,-12.5);
    glColor3f(0, 139 ,0);
    glVertex2f(-6,-12);
    glVertex2f(-2,-9.5);

    glVertex2f(-0.5,-7);
    glVertex2f(0.5,-2);
    glVertex2f(1,-2);

    glVertex2f(-1,-0.5);
    glVertex2f(-16,3);
    glEnd();
glPopMatrix();

glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0 ,139 ,0);
    glVertex2f(0,-16);
    glVertex2f(4,-9);
    glColor3f(0,128,0);
    glVertex2f(5,-5);
    glVertex2f(7,-2);
    glColor3f(153,204,0);
    glVertex2f(9.5,-0.5);
    glVertex2f(10,0);
    glVertex2f(14,1);
    glVertex2f(16,2);
    glVertex2f(16,-16);

    glEnd();
glPopMatrix();

}

void tree()
{
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(12.7,0);
    glVertex2f(15,0);
    glVertex2f(14,4);

    glEnd();
glPopMatrix();


glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.0f, 0.0f);
    glVertex2f(13.7,-2.5);
    glVertex2f(14.2,-2.5);
    glVertex2f(14.2,0);
    glVertex2f(13.7,0);

    glEnd();
glPopMatrix();
}

void house()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
    glVertex2f(-3.5,-4);
    glVertex2f(-1,-4);
    glVertex2f(-1,0);
    glVertex2f(-3.5,0);
    glEnd();
glPopMatrix();
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.8f, 0.0f);
    glVertex2f(-3.5,0);
    glVertex2f(-0.5,0);
    glVertex2f(-2,3);
    glVertex2f(-5,3);
    glEnd();
glPopMatrix();
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.1f, 0.1f, 0.0f);
    glVertex2f(-6,-4);
    glVertex2f(-3.5,-4);
    glVertex2f(-3.5,0);
    glVertex2f(-6,0);
    glEnd();
glPopMatrix();
glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0,0.5,0.0);
    glVertex2f(-6,0);
    glVertex2f(-3.5,0);
    glVertex2f(-5,3);

    glEnd();
glPopMatrix();

glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,0.5,0.0);
    glVertex2f(-2.5,-4);
    glVertex2f(-1.5,-4);
    glVertex2f(-1.5,-2);
    glVertex2f(-2.5,-2);
    glEnd();
glPopMatrix();

glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-2.7,-4.5);
    glVertex2f(-1.3,-4.5);
    glVertex2f(-1.3,-4);
    glVertex2f(-2.7,-4);
    glEnd();
glPopMatrix();
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,0,0);
    glVertex2f(-2.5,-5);
    glVertex2f(-1.5,-5);
    glVertex2f(-1.5,-4);
    glVertex2f(-2.5,-4);
    glEnd();
glPopMatrix();
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,0,0);
    glVertex2f(-4.8,-2);
    glVertex2f(-4,-2);
    glVertex2f(-4,-1);
    glVertex2f(-4.8,-1);
    glEnd();
glPopMatrix();

}

void brige()
{
   glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,0.5,0);
    glVertex2f(-1,-7);
    glVertex2f(5,-8);
    glVertex2f(6,-6);

    glVertex2f(-2,-5);

    glEnd();
glPopMatrix();
}

void river()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0,204,255);
    glVertex2f(-16,-16);
    glVertex2f(16,-16);

    glVertex2f(16,8);
    glVertex2f(-16,8);


    glEnd();
glPopMatrix();

}

void forest()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
glColor3f(0,128,0);
    glVertex2f(-16,8);

    glVertex2f(-14.5,9);

    glVertex2f(-13,9.2);
    glVertex2f(-11.2,8);
    glEnd();
glPopMatrix();
}

void rcloud()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
glColor3f(0 ,191 ,255);
    glVertex2f(-16,8);
glColor3f(0,204,255);
    glVertex2f(-14.5,9);
glColor3f(204,153,255);
    glVertex2f(-13,9.2);
    glVertex2f(-11.2,8);
    glEnd();
glPopMatrix();
}

void bird1()
{
  glPushMatrix();
    glBegin(GL_POLYGON);
glColor3f(0,0,0);
    glVertex2f(-1,8.5);

    glVertex2f(-0.5,9.5);

    glVertex2f(-1,10);
    glVertex2f(-0.5,9.5);
    glEnd();
glPopMatrix();
}

void bird2()
{
  glPushMatrix();
    glBegin(GL_POLYGON);
glColor3f(0,0,0);
    glVertex2f(-2,8.3);

    glVertex2f(-1.5,9.5);

    glVertex2f(-2,10.3);
    glVertex2f(-1.9,9.5);
    glEnd();
glPopMatrix();
}

void bird3()
{
  glPushMatrix();
    glBegin(GL_POLYGON);
glColor3f(0,0,0);
    glVertex2f(-1.5,10);

    glVertex2f(-1,10.5);

    glVertex2f(-1.5,11);
    glVertex2f(-1,10.5);
    glEnd();
glPopMatrix();
}
void bird4()
{
  glPushMatrix();
    glBegin(GL_POLYGON);
glColor3f(0,0,0);
    glVertex2f(-1.5,10);

    glVertex2f(-1,10.5);

    glVertex2f(-1.5,11);
    glVertex2f(-1,10.5);
    glEnd();
glPopMatrix();
}


void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-15,16,-17,15);

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glViewport(0, 0 ,windowWidth ,windowHeight);

    rcloud();

    glPushMatrix();
    glTranslatef(3,3,0);
    rcloud();
glPopMatrix();
glPushMatrix();
    glTranslatef(4,4,0);
    rcloud();
glPopMatrix();

glPushMatrix();
    glTranslatef(8,5,0);
    rcloud();
glPopMatrix();



    forest();
glPushMatrix();
    glTranslatef(1,0,0);
    forest();
glPopMatrix();
glPushMatrix();
    glTranslatef(4,0,0);
    forest();
glPopMatrix();
glPushMatrix();
    glTranslatef(6,0,0);
    forest();
glPopMatrix();
glPushMatrix();
    glTranslatef(7.5,1,0);
    forest();
glPopMatrix();
glPushMatrix();
    glTranslatef(7.9,0,0);
    forest();
glPopMatrix();
glPushMatrix();
    glTranslatef(9.7,0,0);
    forest();
glPopMatrix();
glPushMatrix();
    glTranslatef(10.5,0,0);
    forest();
glPopMatrix();
glPushMatrix();
    glTranslatef(12,0,0);
    forest();
glPopMatrix();
glPushMatrix();
    glTranslatef(15,0,0);
    forest();
glPopMatrix();
glPushMatrix();
    glTranslatef(18.2,0,0);
    forest();
glPopMatrix();
glPushMatrix();
    glTranslatef(19.5,1,0);
    forest();
glPopMatrix();
glPushMatrix();
    glTranslatef(20,0,0);
    forest();
glPopMatrix();
glPushMatrix();
    glTranslatef(22,0,0);
    forest();
glPopMatrix();
glPushMatrix();
    glTranslatef(25,0,0);
    forest();
glPopMatrix();
glPushMatrix();
    glTranslatef(27.3,0,0);
    forest();
glPopMatrix();

glPushMatrix();
 glTranslatef(bird4_move,0,0);
   bird4();
glPopMatrix();
glPushMatrix();
 glTranslatef(bird3_move,0,0);
   bird3();
glPopMatrix();
glPushMatrix();
 glTranslatef(bird2_move,0,0);
   bird2();
glPopMatrix();

glPushMatrix();
 glTranslatef(bird1_move,0,0);
   bird1();
glPopMatrix();

sky();
tree();
glPushMatrix();
    glTranslatef(-1,-1.7,0);
    tree();
glPopMatrix();
glPushMatrix();
    glTranslatef(1,-2.5,0);
    tree();
glPopMatrix();
glPushMatrix();
    glTranslatef(-20.5,3,0);
    tree();
glPopMatrix();
glPushMatrix();
    glTranslatef(-21.5,3,0);
    tree();
glPopMatrix();


glPushMatrix();
    glTranslatef(-4,-2.5,0);
    house();
glPopMatrix();
house();
glPushMatrix();
    glTranslatef(12,-4,0);
    house();
glPopMatrix();
brige();
field();
glPushMatrix();
 glTranslatef(boat_move,0,0);
   boat();
glPopMatrix();

 glPushMatrix();
 glTranslatef(boat1_move,0,0);
   boat1();
glPopMatrix();
river();

    glFlush();
    glutSwapBuffers();
}
void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {

    case 'M':
        flagScale=true;
        break;
    case 'm':
        flagScale=false;
        break;



    case 16:	// Escape key
        exit(1);
    }
    glutPostRedisplay();
}

void animate()
{
	if (flagScale == true)
	{
		boat_move-= 0.009;
		if(boat_move < -15.2)
			boat_move = 12;
	}
	if (flagScale == false)
	{
		boat_move = 0;

	}

	if (flagScale == true)
	{
		boat1_move+= 0.007;
		if(boat1_move >10)
			boat1_move = -3;
	}
	if (flagScale == false)
	{
		boat1_move = 0;

	}

	if (flagScale == true)
	{
		bird1_move+= 0.007;
		if(bird1_move >16)
			bird1_move = -15.5;
	}
	if (flagScale == false)
	{
		bird1_move = 0;

	}


	if (flagScale == true)
	{
		bird2_move+= 0.007;
		if(bird2_move >16)
			bird2_move = -14;
	}
	if (flagScale == false)
	{
		bird2_move = 0;

	}

	if (flagScale == true)
	{
		bird3_move+= 0.007;
		if(bird3_move >16)
			bird3_move = -14;
	}
	if (flagScale == false)
	{
		bird3_move = 0;

	}

	if (flagScale == true)
	{
		bird4_move+= 0.006;
		if(bird4_move >16)
			bird4_move = -15;
	}
	if (flagScale == false)
	{
		bird4_move = 0;

	}

	glutPostRedisplay();
}


void init()
{
    glClearColor (0.0,0.0,1.0,0.0 );

}


int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("Traingle-Demo");

    glShadeModel( GL_SMOOTH );
    glEnable( GL_DEPTH_TEST );
glutKeyboardFunc(myKeyboardFunc);
    glutIdleFunc(animate);
    glutDisplayFunc(display);

    init();

    glutMainLoop();

    return 0;
}


