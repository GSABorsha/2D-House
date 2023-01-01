#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <windows.h>
#define PI 3.1416

int windowWidth=1000;
int windowHeight=600;
int cnt=1;
double xboat=0;
double yboat=0;
double xsun=0;
double cld=0;
double xcar=0;
double ycar=0;


bool flagScale=false;


void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius){
int i;
int triangleAmount = 20; //# of triangles used to draw circle
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


void pahar (void)
{
      glPushMatrix();
  glBegin(GL_TRIANGLES);

  glColor3f(0.000, 0.392, 0.000);
  glVertex2f(0,450);
  glVertex2f(70,450);
  glVertex2f(35,490);

   glEnd();
glPopMatrix();
}

void home (void){

glPushMatrix();
  glBegin(GL_QUADS);
 glColor3f(1.0, 0.0, 0.0);

  glVertex2f(100,300);
 glVertex2f(100,250);
  glVertex2f(200,250);
 glVertex2f(200,300);

  glEnd();
glPopMatrix();


glPushMatrix();
  glBegin(GL_TRIANGLES);
 glColor3f(0.545, 0.000, 0.545);

  glVertex2f(100,300);
 glVertex2f(200,300);
 glVertex2f(150,350);

   glEnd();
glPopMatrix();

glPushMatrix();
  glBegin(GL_QUADS);
 glColor3f(0.545, 0.000, 0.545);

  glVertex2f(130,280);
 glVertex2f(130,250);
  glVertex2f(170,250);
 glVertex2f(170,280);

  glEnd();
glPopMatrix();



glPushMatrix();
  glBegin(GL_QUADS);
 glColor3f(0.622, 0.425, 0.033);

  glVertex2f(130,250);
 glVertex2f(130,150);
  glVertex2f(170,150);
 glVertex2f(170,250);

  glEnd();
glPopMatrix();



}

//boat 1
void boat1 (void)
{
  glPushMatrix();
  glBegin(GL_QUADS);
  glColor3f(0.0,0.0,0.0);

  glVertex2f(xboat+303,yboat+25);
  glVertex2f(xboat+313,yboat+15);
  glVertex2f(xboat+337,yboat+15);
  glVertex2f(xboat+347,yboat+25);

 glEnd();
glPopMatrix();


  glPushMatrix();
  glBegin(GL_POLYGON);
  glColor3f(0.545, 0.000, 0.545);

  glVertex2f(xboat+313,yboat+25);
  glVertex2f(xboat+313,yboat+32);
  glVertex2f(xboat+325,yboat+35);
  glVertex2f(xboat+337,yboat+32);
  glVertex2f(xboat+337,yboat+25);
  glVertex2f(xboat+325,yboat+21);

 glEnd();
glPopMatrix();
}


//road square

void roadsquare(void){


    glPushMatrix();
glBegin(GL_QUADS);

   glColor3f(1.0,0.0,1.0);
    glVertex2f(50,250);
    glVertex2f(50,240);
    glVertex2f(100,240);
    glVertex2f(100,250);


   glEnd();
    glPopMatrix();

}
//tree
void tree(void){


//tree
glPushMatrix();
  glBegin(GL_QUADS);
 glColor3f(0.622, 0.425, 0.033);

  glVertex2f(50,300);
 glVertex2f(50,250);
  glVertex2f(70,250);
 glVertex2f(70,300);

  glEnd();
glPopMatrix();

glPushMatrix();
  glBegin(GL_TRIANGLES);
 glColor3f(0.000, 0.392, 0.000);

  glVertex2f(20,300);
 glVertex2f(100,300);
 glVertex2f(60,350);

   glEnd();
glPopMatrix();


glPushMatrix();
  glBegin(GL_TRIANGLES);
 glColor3f(0.000, 0.392, 0.000);

  glVertex2f(25,320);
 glVertex2f(95,320);
 glVertex2f(60,360);

   glEnd();
glPopMatrix();


glPushMatrix();
  glBegin(GL_TRIANGLES);
 glColor3f(0.000, 0.392, 0.000);

  glVertex2f(30,340);
 glVertex2f(90,340);
 glVertex2f(60,370);

   glEnd();
glPopMatrix();

}


void cloud1(void){

 glPushMatrix();
 glColor3f(1.000, 1.000, 1.000);
glTranslatef(cld+260,0,0);
    drawFilledCircle(690,570,14);

   glPopMatrix();

 glPushMatrix();
 glColor3f(1.000, 1.000, 1.000);
glTranslatef(cld+255,0,0);
    drawFilledCircle(680,570,14);

   glPopMatrix();

    glPushMatrix();
    glColor3f(1.000, 1.000, 1.000);
glTranslatef(cld+260,0,0);
    drawFilledCircle(700,565,14);


   glPopMatrix();
 glPushMatrix();
 glColor3f(1.000, 1.000, 1.000);
glTranslatef(cld+260,0,0);
    drawFilledCircle(660,560,14);

   glPopMatrix();

    glPushMatrix();
    glColor3f(1.000, 1.000, 1.000);
glTranslatef(cld+260,0,0);
    drawFilledCircle(680,555,14);

   glPopMatrix();

}


//car
void car(void){

//car

glPushMatrix();
glBegin(GL_QUADS);

   glColor4f(0.0,1.0,1.0,1.0);

    glVertex2f(xcar+200,ycar+270);
    glColor3f( 0.118, 0.565, 1.000);
    glVertex2f(xcar+200,ycar+240);
    glColor3f( 0.118, 0.565, 1.000);
    glVertex2f(xcar+280,ycar+240);
    glColor4f(0.0,1.0,1.0,1.0);
    glVertex2f(xcar+280,ycar+270);

 glEnd();
    glPopMatrix();


    //car window

    glPushMatrix();
glBegin(GL_QUADS);

   glColor4f(1.0,1.0,0.0,1.0);

    glVertex2f(xcar+230,ycar+285);

    glVertex2f(xcar+210,ycar+270);

    glVertex2f(xcar+270,ycar+270);

    glVertex2f(xcar+260,ycar+285);

 glEnd();
    glPopMatrix();

//chaka

glPushMatrix();

glTranslatef(xcar+260,ycar+0,0);
    drawFilledCircle(-40,240,12);


   glPopMatrix();

   glPushMatrix();

glTranslatef(xcar+260,ycar+0,0);
    drawFilledCircle(-5,240,12);

   glPopMatrix();

}


void display1(void)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glMatrixMode( GL_PROJECTION );
glLoadIdentity();
gluOrtho2D(0,1000,0,600);
glMatrixMode( GL_MODELVIEW );
glLoadIdentity();
glViewport(0, 0 ,windowWidth ,windowHeight);


//sky1
glPushMatrix();
glBegin(GL_QUADS);

   glColor3f(0.000, 0.000, 0.000);

    glVertex2f(0,600);
    glColor3f(0.000, 0.000, 0.545);
    glVertex2f(0,430);
    glColor3f(0.000, 0.000, 0.545);
    glVertex2f(1000,430);
    glColor3f(0.000, 0.000, 0.000);
    glVertex2f(1000,600);

     glEnd();
    glPopMatrix();

//moon
 glPushMatrix();
 glColor3f(1.000, 1.000, 1.000);
glTranslatef(xsun,0,0);
    drawFilledCircle(600,550,14);
   glPopMatrix();


//field
glPushMatrix();
glBegin(GL_QUADS);

   glColor3f(0.420, 0.557, 0.137);

    glVertex2f(0,450);
    glVertex2f(0,250);
    glVertex2f(1000,250);
    glVertex2f(1000,450);

     glEnd();
    glPopMatrix();


//pahar
pahar();

//pahar
glPushMatrix();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glPopMatrix();


//tree
glPushMatrix();
 glTranslatef(0,180,0);
tree();
glPopMatrix();

glPushMatrix();
 glTranslatef(150,175,0);
tree();
glPopMatrix();

glPushMatrix();
 glTranslatef(220,175,0);
tree();
glPopMatrix();

glPushMatrix();
 glTranslatef(330,175,0);
tree();
glPopMatrix();

glPushMatrix();
 glTranslatef(400,175,0);
tree();
glPopMatrix();

glPushMatrix();
 glTranslatef(570,175,0);
tree();
glPopMatrix();


glPushMatrix();
 glTranslatef(670,175,0);
tree();
glPopMatrix();




glPushMatrix();
 glTranslatef(770,175,0);
tree();
glPopMatrix();

glPushMatrix();
 glTranslatef(840,175,0);
tree();
glPopMatrix();

//home
glPushMatrix();
glTranslatef(-30,130,0);
glScalef(1.1,1.1,1);
home();
glPopMatrix();

glPushMatrix();
glTranslatef(190,160,0);
glScalef(0.8,0.8,1);
home();
glPopMatrix();

glPushMatrix();
glTranslatef(600,200,0);
glScalef(0.6,0.6,1);
home();
glPopMatrix();







//road
glPushMatrix();
glBegin(GL_QUADS);

   glColor3f(0.863, 0.863, 0.863);
    glVertex2f(0,300);
    glVertex2f(0,150);
    glVertex2f(1000,150);
    glVertex2f(1000,300);


   glEnd();
    glPopMatrix();

    // road square

    roadsquare();

    //roadsquare

    glPushMatrix();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(90,0, 0);
roadsquare();
glPopMatrix();


//car

car();

//car2
glPushMatrix();
glTranslatef(430,0, 0);
car();
glPopMatrix();





//cloud1
 cloud1();

//cloud2

 glPushMatrix();
glTranslatef(-430,0, 0);
cloud1();

//cloud3

glTranslatef(-400,0,0);
cloud1();
glPopMatrix();


//rever
 glPushMatrix();
glBegin(GL_QUADS);

   glColor4f(0.0,1.0,1.0,1.0);

    glVertex2f(0,200);
    glColor3f( 0.118, 0.565, 1.000);
    glVertex2f(0,1);
    glColor3f( 0.118, 0.565, 1.000);
    glVertex2f(1000,1);
    glColor4f(0.0,1.0,1.0,1.0);
    glVertex2f(1000,200);

 glEnd();
    glPopMatrix();


//boat 1
glPushMatrix();
glTranslatef(-200,0,0);
glScalef(3,3,1);
boat1();
glPopMatrix();
//boat 2
glPushMatrix();
glTranslatef(-640,-10,0);
glScalef(3,3,1);
boat1();
glPopMatrix();


glFlush();
glutSwapBuffers();
}


void display2(void)
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glMatrixMode( GL_PROJECTION );
glLoadIdentity();
gluOrtho2D(0,1000,0,600);
glMatrixMode( GL_MODELVIEW );
glLoadIdentity();
glViewport(0, 0 ,windowWidth ,windowHeight);


//sky2
glPushMatrix();
glBegin(GL_QUADS);

   glColor3f(1.000, 0.000, 1.0);

    glVertex2f(0,600);

    glVertex2f(0,430);

    glVertex2f(1000,430);

    glVertex2f(1000,600);

     glEnd();
    glPopMatrix();

//sun
 glPushMatrix();
glTranslatef(xsun,0,0);
glColor3f(1.000, 1.000, 0.000);

    drawFilledCircle(600,550,14);
   glPopMatrix();


//field
glPushMatrix();
glBegin(GL_QUADS);

   glColor3f(0.420, 0.557, 0.137);

    glVertex2f(0,450);
    glVertex2f(0,250);
    glVertex2f(1000,250);
    glVertex2f(1000,450);

     glEnd();
    glPopMatrix();


//pahar
pahar();

//pahar
glPushMatrix();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glTranslatef(50,0, 0);
pahar();
glPopMatrix();


//tree
glPushMatrix();
 glTranslatef(0,180,0);
tree();
glPopMatrix();

glPushMatrix();
 glTranslatef(150,175,0);
tree();
glPopMatrix();

glPushMatrix();
 glTranslatef(220,175,0);
tree();
glPopMatrix();

glPushMatrix();
 glTranslatef(330,175,0);
tree();
glPopMatrix();

glPushMatrix();
 glTranslatef(400,175,0);
tree();
glPopMatrix();

glPushMatrix();
 glTranslatef(570,175,0);
tree();
glPopMatrix();


glPushMatrix();
 glTranslatef(670,175,0);
tree();
glPopMatrix();




glPushMatrix();
 glTranslatef(770,175,0);
tree();
glPopMatrix();

glPushMatrix();
 glTranslatef(840,175,0);
tree();
glPopMatrix();

//home
glPushMatrix();
glTranslatef(-30,130,0);
glScalef(1.1,1.1,1);
home();
glPopMatrix();

glPushMatrix();
glTranslatef(190,160,0);
glScalef(0.8,0.8,1);
home();
glPopMatrix();

glPushMatrix();
glTranslatef(600,200,0);
glScalef(0.6,0.6,1);
home();
glPopMatrix();







//road
glPushMatrix();
glBegin(GL_QUADS);

   glColor3f(0.863, 0.863, 0.863);
    glVertex2f(0,300);
    glVertex2f(0,150);
    glVertex2f(1000,150);
    glVertex2f(1000,300);


   glEnd();
    glPopMatrix();

    // road square

    roadsquare();

    //roadsquare

    glPushMatrix();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(100,0, 0);
roadsquare();
glTranslatef(90,0, 0);
roadsquare();
glPopMatrix();


//car

car();

//car2
glPushMatrix();
glTranslatef(430,0, 0);
car();
glPopMatrix();





//cloud1
 cloud1();

//cloud2

 glPushMatrix();
glTranslatef(-430,0, 0);
cloud1();

//cloud3

glTranslatef(-400,0,0);
cloud1();
glPopMatrix();


//rever
 glPushMatrix();
glBegin(GL_QUADS);

   glColor4f(0.0,1.0,1.0,1.0);

    glVertex2f(0,200);
    glColor3f( 0.118, 0.565, 1.000);
    glVertex2f(0,1);
    glColor3f( 0.118, 0.565, 1.000);
    glVertex2f(1000,1);
    glColor4f(0.0,1.0,1.0,1.0);
    glVertex2f(1000,200);

 glEnd();
    glPopMatrix();


//boat 1
glPushMatrix();
glTranslatef(-200,0,0);
glScalef(3,3,1);
boat1();
glPopMatrix();
//boat 2
glPushMatrix();
glTranslatef(-640,-10,0);
glScalef(3,3,1);
boat1();
glPopMatrix();


glFlush();
glutSwapBuffers();
}


void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {
    case 's':
        flagScale=true;
        break;
    case 'e':
        flagScale=false;
        break;


    case 27: // Escape key
        exit(1);
    }
    glutPostRedisplay();
}


void animate()
{



//sun
if (flagScale == true)
{
xsun+=2;
if(xsun > 430){
xsun = -690;

cnt++;

        if(cnt%2!=0){

                    glutDisplayFunc(display1);

}
else
                    glutDisplayFunc(display2);

}
}
if (flagScale == false)
{
xsun = 0;
}
glutPostRedisplay();




//cloud





//boat
   if (flagScale == true)
{
xboat += 0.07;
if(xboat > 260)
xboat = -275;
}
if (flagScale == false)
{
xboat = 0;
}
glutPostRedisplay();




//car
    if (flagScale == true)
{
xcar += 1.5;
if(xcar > 800)
xcar = -690;

}
if (flagScale == false)
{
xcar = 0;
}
glutPostRedisplay();



//cloud
    if (flagScale == true)
{
cld+= 2;
if(cld >900)
cld = -1000;
}
if (flagScale == false)
{
cld = 0;
}
glutPostRedisplay();

}

int main (int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowPosition(100,100);
glutInitWindowSize(windowWidth, windowHeight);
glutCreateWindow("Borsha House");
glutKeyboardFunc(myKeyboardFunc);
glutIdleFunc(animate);
glutDisplayFunc(display1);
glutMainLoop();
return 0;
}
