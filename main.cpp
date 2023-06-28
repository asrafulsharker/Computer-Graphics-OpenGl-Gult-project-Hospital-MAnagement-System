
#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
float xPos = 0.0f;



void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    glOrtho(0.0, 50.0, 0.0, 50.0, -1.0, 1.0);
    //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}



float bx = 10;

void car()
{

    glPushMatrix();
    glTranslatef(bx, 0, 0);








//CAR START


    glBegin(GL_POLYGON);
    glColor3f(0.761, 0.153, 0.176);
    glVertex3f(30.5625f, 4.75f, 0.0f);
    glVertex3f(30.1875f, 5.125f, 0.0f);
    glVertex3f(30.25f, 5.875f, 0.0f);
    glVertex3f(30.8125f, 7.1875f, 0.0f);
    glVertex3f(34.5f, 7.25f, 0.0f);
    glVertex3f(35.4375f, 5.9375f, 0.0f);
    glVertex3f(36.625f, 5.8125f, 0.0f);
    glVertex3f(36.75f, 5.0f, 0.0f);
    glVertex3f(36.125f, 4.75f, 0.0f);
    glVertex3f(34.6875f, 4.75f, 0.0f);

    glEnd();

//window start1
    glBegin(GL_QUADS);

    glColor3f(0.427, 0.514, 0.506);
    glVertex3f(30.5625f, 6.1875f, 0.0f);
    glVertex3f(31.0f, 7.0f, 0.0f);
    glVertex3f(31.75f, 6.9375f, 0.0f);
    glVertex3f(31.8125f, 6.0625f, 0.0f);
    glEnd();


//window start2
    glBegin(GL_QUADS);

    glColor3f(0.427, 0.514, 0.506);
    glVertex3f(32.0625f, 6.1875f, 0.0f);
    glVertex3f(32.0f, 7.0625f, 0.0f);
    glVertex3f(34.3125f, 7.0f, 0.0f);
    glVertex3f(35.125f, 5.9375f, 0.0f);
    glEnd();


//car stripe
    glBegin(GL_QUADS);

    glColor3f(0.427, 0.514, 0.506);
    glVertex3f(31.1875f, 5.4375f, 0.0f);
    glVertex3f(35.3125f, 5.1875f, 0.0f);
    glVertex3f(35.3125f, 5.4375f, 0.0f);
    glVertex3f(31.375f, 5.625f, 0.0f);
    glEnd();


//car while
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.169, 0.267, 0.251);
    glVertex3f(31.625f, 4.6875f, 0.0f);
    glVertex3f(31.75f, 4.3125f, 0.0f);
    glVertex3f(31.6875f, 4.3125f, 0.0f);
    glVertex3f(31.6875f, 4.25f, 0.0f);
    glVertex3f(31.625f, 4.25f, 0.0f);
    glVertex3f(31.5625f, 4.25f, 0.0f);
    glVertex3f(31.5f, 4.25f, 0.0f);
    glVertex3f(31.4375f, 4.25f, 0.0f);
    glVertex3f(31.4375f, 4.3125f, 0.0f);
    glVertex3f(31.375f, 4.3125f, 0.0f);
    glVertex3f(31.3125f, 4.3125f, 0.0f);
    glVertex3f(31.3125f, 4.375f, 0.0f);
    glVertex3f(31.25f, 4.375f, 0.0f);
    glVertex3f(31.1875f, 4.375f, 0.0f);
    glVertex3f(31.1875f, 4.4375f, 0.0f);
    glVertex3f(31.125f, 4.4375f, 0.0f);
    glVertex3f(31.125f, 4.5f, 0.0f);
    glVertex3f(31.0625f, 4.5f, 0.0f);
    glVertex3f(31.0f, 4.5625f, 0.0f);
    glVertex3f(31.0f, 4.625f, 0.0f);
    glVertex3f(31.0f, 4.6875f, 0.0f);
    glVertex3f(31.0f, 4.75f, 0.0f);
    glVertex3f(31.0f, 4.8125f, 0.0f);
    glVertex3f(31.0f, 4.875f, 0.0f);
    glVertex3f(31.0f, 4.9375f, 0.0f);
    glVertex3f(31.0f, 5.0f, 0.0f);
    glVertex3f(31.0625f, 5.0f, 0.0f);
    glVertex3f(31.0625f, 5.0625f, 0.0f);
    glVertex3f(31.125f, 5.0625f, 0.0f);
    glVertex3f(31.1875f, 5.0625f, 0.0f);
    glVertex3f(31.1875f, 5.125f, 0.0f);
    glVertex3f(31.25f, 5.125f, 0.0f);
    glVertex3f(31.3125f, 5.125f, 0.0f);
    glVertex3f(31.3125f, 5.1875f, 0.0f);
    glVertex3f(31.375f, 5.1875f, 0.0f);
    glVertex3f(31.4375f, 5.1875f, 0.0f);
    glVertex3f(31.5f, 5.1875f, 0.0f);
    glVertex3f(31.5625f, 5.1875f, 0.0f);
    glVertex3f(31.625f, 5.1875f, 0.0f);
    glVertex3f(31.6875f, 5.1875f, 0.0f);
    glVertex3f(31.6875f, 5.125f, 0.0f);
    glVertex3f(31.75f, 5.125f, 0.0f);
    glVertex3f(31.75f, 5.0625f, 0.0f);
    glVertex3f(31.8125f, 5.0625f, 0.0f);
    glVertex3f(31.8125f, 5.0f, 0.0f);
    glVertex3f(31.875f, 5.0f, 0.0f);
    glVertex3f(31.875f, 4.9375f, 0.0f);
    glVertex3f(31.9375f, 4.9375f, 0.0f);
    glVertex3f(31.9375f, 4.875f, 0.0f);
    glVertex3f(32.0f, 4.875f, 0.0f);
    glVertex3f(32.0f, 4.8125f, 0.0f);
    glVertex3f(32.0625f, 4.8125f, 0.0f);
    glVertex3f(32.0625f, 4.75f, 0.0f);
    glVertex3f(32.0625f, 4.6875f, 0.0f);
    glVertex3f(32.0625f, 4.625f, 0.0f);
    glVertex3f(32.0625f, 4.5625f, 0.0f);
    glVertex3f(32.0625f, 4.5f, 0.0f);
    glVertex3f(32.0f, 4.5f, 0.0f);
    glVertex3f(32.0f, 4.4375f, 0.0f);
    glVertex3f(31.9375f, 4.4375f, 0.0f);
    glVertex3f(31.9375f, 4.375f, 0.0f);

    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.2, 0.247, 0.239);
    glVertex3f(35.875f, 4.9375f, 0.0f);
    glVertex3f(35.0625f, 4.375f, 0.0f);
    glVertex3f(35.0625f, 4.4375f, 0.0f);
    glVertex3f(35.0625f, 4.5f, 0.0f);
    glVertex3f(35.0f, 4.5f, 0.0f);
    glVertex3f(35.0f, 4.5625f, 0.0f);
    glVertex3f(35.0f, 4.625f, 0.0f);
    glVertex3f(35.0f, 4.6875f, 0.0f);
    glVertex3f(35.0f, 4.75f, 0.0f);
    glVertex3f(35.0f, 4.8125f, 0.0f);
    glVertex3f(35.0f, 4.875f, 0.0f);
    glVertex3f(35.0f, 4.9375f, 0.0f);
    glVertex3f(35.0f, 5.0f, 0.0f);
    glVertex3f(35.0f, 5.0625f, 0.0f);
    glVertex3f(35.0f, 5.125f, 0.0f);
    glVertex3f(35.0f, 5.1875f, 0.0f);
    glVertex3f(35.0f, 5.25f, 0.0f);
    glVertex3f(35.0625f, 5.25f, 0.0f);
    glVertex3f(35.0625f, 5.3125f, 0.0f);
    glVertex3f(35.125f, 5.375f, 0.0f);
    glVertex3f(35.1875f, 5.4375f, 0.0f);
    glVertex3f(35.25f, 5.4375f, 0.0f);
    glVertex3f(35.3125f, 5.5f, 0.0f);
    glVertex3f(35.3125f, 5.5625f, 0.0f);
    glVertex3f(35.375f, 5.5625f, 0.0f);
    glVertex3f(35.4375f, 5.5625f, 0.0f);
    glVertex3f(35.5f, 5.5625f, 0.0f);
    glVertex3f(35.5625f, 5.5625f, 0.0f);
    glVertex3f(35.625f, 5.5625f, 0.0f);
    glVertex3f(35.625f, 5.5f, 0.0f);
    glVertex3f(35.6875f, 5.5f, 0.0f);
    glVertex3f(35.75f, 5.5f, 0.0f);
    glVertex3f(35.75f, 5.4375f, 0.0f);
    glVertex3f(35.8125f, 5.4375f, 0.0f);
    glVertex3f(35.8125f, 5.375f, 0.0f);
    glVertex3f(35.875f, 5.375f, 0.0f);
    glVertex3f(35.875f, 5.3125f, 0.0f);
    glVertex3f(35.9375f, 5.3125f, 0.0f);
    glVertex3f(35.9375f, 5.25f, 0.0f);
    glVertex3f(35.9375f, 5.1875f, 0.0f);
    glVertex3f(36.0f, 5.125f, 0.0f);
    glVertex3f(36.0f, 5.0625f, 0.0f);
    glVertex3f(36.0625f, 5.0625f, 0.0f);
    glVertex3f(36.0625f, 5.0f, 0.0f);
    glVertex3f(36.0625f, 4.9375f, 0.0f);
    glVertex3f(36.0625f, 4.875f, 0.0f);
    glVertex3f(36.0625f, 4.8125f, 0.0f);
    glVertex3f(36.0625f, 4.75f, 0.0f);
    glVertex3f(36.0625f, 4.6875f, 0.0f);
    glVertex3f(36.0625f, 4.625f, 0.0f);
    glVertex3f(36.0625f, 4.5625f, 0.0f);
    glVertex3f(36.0625f, 4.5f, 0.0f);
    glVertex3f(36.0625f, 4.4375f, 0.0f);
    glVertex3f(36.0625f, 4.375f, 0.0f);
    glVertex3f(36.0f, 4.375f, 0.0f);
    glVertex3f(36.0f, 4.3125f, 0.0f);
    glVertex3f(35.9375f, 4.3125f, 0.0f);
    glVertex3f(35.9375f, 4.25f, 0.0f);
    glVertex3f(35.875f, 4.25f, 0.0f);
    glVertex3f(35.8125f, 4.25f, 0.0f);
    glVertex3f(35.75f, 4.25f, 0.0f);
    glVertex3f(35.75f, 4.1875f, 0.0f);
    glVertex3f(35.6875f, 4.1875f, 0.0f);
    glVertex3f(35.625f, 4.1875f, 0.0f);
    glVertex3f(35.5625f, 4.1875f, 0.0f);
    glVertex3f(35.5f, 4.1875f, 0.0f);
    glVertex3f(35.4375f, 4.1875f, 0.0f);
    glVertex3f(35.375f, 4.1875f, 0.0f);
    glVertex3f(35.3125f, 4.1875f, 0.0f);
    glVertex3f(35.25f, 4.1875f, 0.0f);
    glVertex3f(35.1875f, 4.1875f, 0.0f);
    glVertex3f(35.1875f, 4.25f, 0.0f);
    glVertex3f(35.1875f, 4.3125f, 0.0f);
    glVertex3f(35.1875f, 4.375f, 0.0f);

    glEnd();







//CAR END



    glPopMatrix();
    bx += .012;
    if (bx > 40)
        bx = -50;
    glutPostRedisplay();






}


void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

//full screan blue color
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.78, 0.933);
    glVertex3f(0.0f, 0.0625f, 0.0f);
    glVertex3f(0.0625f, 49.875f, 0.0f);
    glVertex3f(49.875f, 49.9375f, 0.0f);
    glVertex3f(49.9375f, 0.0f, 0.0f);
    glEnd();




//bottom gray road
    glBegin(GL_QUADS);
    glColor3f(0.404, 0.737, 0.239);
    glVertex3f(0.0f, 11.4375f, 0.0f);
    glVertex3f(49.9375f, 11.4375f, 0.0f);
    glVertex3f(49.9375f, 2.75f, 0.0f);
    glVertex3f(0.0625f, 2.75f, 0.0f);


    glEnd();





//bottom screan green color grass
    glBegin(GL_QUADS);
    glColor3f(0.365, 0.773, 0.149);
    glVertex3f(0.0625f, 10.875f, 0.0f);
    glVertex3f(49.9375f, 10.875f, 0.0f);
    glVertex3f(50.0f, 0.6875f, 0.0f);
    glVertex3f(0.0625f, 0.75f, 0.0f);


    glEnd();

//bottom screan black color road
    glBegin(GL_QUADS);
    glColor3f(0.275, 0.349, 0.333);
    glVertex3f(0.1875f, 9.0f, 0.0f);
    glVertex3f(49.8125f, 9.0625f, 0.0f);
    glVertex3f(49.9375f, 3.5625f, 0.0f);
    glVertex3f(0.0625f, 3.4375f, 0.0f);


    glEnd();


//bottom screan road white line 1
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.996, 1.0);
    glVertex3f(1.5f, 5.9375f, 0.0f);
    glVertex3f(1.5625f, 6.5f, 0.0f);
    glVertex3f(2.4375f, 6.5f, 0.0f);
    glVertex3f(2.375f, 5.9375f, 0.0f);

    glEnd();


//bottom screan road white line 2
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.996, 1.0);
    glVertex3f(4.6875f, 6.5625f, 0.0f);
    glVertex3f(9.1875f, 6.5f, 0.0f);
    glVertex3f(9.25f, 5.875f, 0.0f);
    glVertex3f(4.6875f, 5.8125f, 0.0f);

    glEnd();

//bottom screan road white line 3
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.996, 1.0);
    glVertex3f(10.9375f, 6.5625f, 0.0f);
    glVertex3f(17.375f, 6.5625f, 0.0f);
    glVertex3f(17.4375f, 5.75f, 0.0f);
    glVertex3f(10.9375f, 5.625f, 0.0f);

    glEnd();


//bottom screan road white line 4
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.996, 1.0);
    glVertex3f(24.0f, 6.5f, 0.0f);
    glVertex3f(29.875f, 6.5625f, 0.0f);
    glVertex3f(30.0f, 5.8125f, 0.0f);
    glVertex3f(23.9375f, 5.8125f, 0.0f);



    glEnd();

//bottom screan road white line 5
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.996, 1.0);
    glVertex3f(37.625f, 6.625f, 0.0f);
    glVertex3f(43.75f, 6.5625f, 0.0f);
    glVertex3f(43.875f, 5.75f, 0.0f);
    glVertex3f(37.8125f, 5.6875f, 0.0f);



    glEnd();


//bottom screan road white line 6
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.996, 1.0);
    glVertex3f(46.125f, 6.5625f, 0.0f);
    glVertex3f(49.9375f, 6.5f, 0.0f);
    glVertex3f(49.9375f, 5.875f, 0.0f);
    glVertex3f(46.3125f, 5.875f, 0.0f);

    glEnd();

//second building start


// second bulding base
    glBegin(GL_QUADS);

    glColor3f(0.875, 0.882, 0.725);
    glVertex3f(28.8125f, 30.125f, 0.0f);
    glVertex3f(28.6875f, 11.625f, 0.0f);
    glVertex3f(38.75f, 11.4375f, 0.0f);
    glVertex3f(38.625f, 30.0f, 0.0f);


    glEnd();

// second bulding glass shape gray
    glBegin(GL_QUADS);

    glColor3f(0.588, 0.529, 0.541);
    glVertex3f(32.0625f, 29.25f, 0.0f);
    glVertex3f(35.5f, 29.3125f, 0.0f);
    glVertex3f(35.4375f, 13.4375f, 0.0f);
    glVertex3f(32.1875f, 13.5625f, 0.0f);

    glEnd();


// second bulding glass shape glass blue
    glBegin(GL_QUADS);

    glColor3f(0.671, 0.898, 0.953);
    glVertex3f(32.4375f, 28.9375f, 0.0f);
    glVertex3f(35.0625f, 28.8125f, 0.0f);
    glVertex3f(35.0625f, 13.8125f, 0.0f);
    glVertex3f(32.3125f, 13.625f, 0.0f);
    glEnd();


// second bulding red sad
    glBegin(GL_QUADS);

    glColor3f(0.949, 0.361, 0.224);
    glVertex3f(28.4375f, 31.1875f, 0.0f);
    glVertex3f(38.9375f, 31.1875f, 0.0f);
    glVertex3f(38.9375f, 30.0625f, 0.0f);
    glVertex3f(28.5625f, 30.0625f, 0.0f);


    glEnd();


// second bulding top window 1 gray shape
    glBegin(GL_QUADS);

    glColor3f(0.6, 0.522, 0.557);
    glVertex3f(29.5f, 29.1875f, 0.0f);
    glVertex3f(31.25f, 29.125f, 0.0f);
    glVertex3f(31.375f, 27.3125f, 0.0f);
    glVertex3f(29.625f, 27.375f, 0.0f);

    glEnd();

// second bulding top window 2 gray shape
    glBegin(GL_QUADS);

    glColor3f(0.6, 0.522, 0.557);
    glVertex3f(36.1875f, 29.125f, 0.0f);
    glVertex3f(37.875f, 29.125f, 0.0f);
    glVertex3f(37.875f, 27.4375f, 0.0f);
    glVertex3f(36.25f, 27.5f, 0.0f);

    glEnd();

// second bulding top window 3 gray shape
    glBegin(GL_QUADS);

    glColor3f(0.6, 0.522, 0.557);
    glVertex3f(36.125f, 26.5625f, 0.0f);
    glVertex3f(37.875f, 26.5625f, 0.0f);
    glVertex3f(38.0f, 24.6875f, 0.0f);
    glVertex3f(36.1875f, 24.75f, 0.0f);


    glEnd();

// second bulding top window 4 gray shape
    glBegin(GL_QUADS);

    glColor3f(0.6, 0.522, 0.557);
    glVertex3f(36.25f, 23.8125f, 0.0f);
    glVertex3f(37.875f, 23.875f, 0.0f);
    glVertex3f(38.0f, 22.0625f, 0.0f);
    glVertex3f(36.25f, 22.125f, 0.0f);

    glEnd();

// second bulding top window 5 gray shape
    glBegin(GL_QUADS);

    glColor3f(0.6, 0.522, 0.557);
    glVertex3f(36.25f, 21.0f, 0.0f);
    glVertex3f(38.0f, 20.9375f, 0.0f);
    glVertex3f(37.875f, 19.3125f, 0.0f);
    glVertex3f(36.3125f, 19.1875f, 0.0f);

    glEnd();
// second bulding top window 6 gray shape
    glBegin(GL_QUADS);

    glColor3f(0.6, 0.522, 0.557);
    glVertex3f(36.1875f, 18.25f, 0.0f);
    glVertex3f(37.875f, 18.25f, 0.0f);
    glVertex3f(37.875f, 16.5f, 0.0f);
    glVertex3f(36.25f, 16.5f, 0.0f);

    glEnd();




//first building start


//base first building
    glBegin(GL_QUADS);
    glColor3f(0.945, 0.945, 0.843);
    glVertex3f(16.875f, 11.5625f, 0.0f);
    glVertex3f(16.875f, 23.5625f, 0.0f);
    glVertex3f(30.75f, 23.4375f, 0.0f);
    glVertex3f(30.625f, 11.5f, 0.0f);



    glEnd();

//red siri 1
    glBegin(GL_QUADS);
    glColor3f(0.941, 0.412, 0.294);
    glVertex3f(18.3125f, 11.5f, 0.0f);
    glVertex3f(18.3125f, 11.9375f, 0.0f);
    glVertex3f(29.375f, 11.9375f, 0.0f);
    glVertex3f(29.4375f, 11.4375f, 0.0f);



    glEnd();

//white siri 2
    glBegin(GL_QUADS);
    glColor3f(0.988, 1.0, 0.992);
    glVertex3f(19.125f, 11.9375f, 0.0f);
    glVertex3f(19.1875f, 12.4375f, 0.0f);
    glVertex3f(28.75f, 12.4375f, 0.0f);
    glVertex3f(28.75f, 12.0f, 0.0f);





    glEnd();

//red siri 1
    glBegin(GL_QUADS);
    glColor3f(0.941, 0.412, 0.294);
    glVertex3f(19.875f, 12.4375f, 0.0f);
    glVertex3f(19.875f, 12.875f, 0.0f);
    glVertex3f(27.875f, 12.875f, 0.0f);
    glVertex3f(27.875f, 12.375f, 0.0f);

    glEnd();

//main door gray shape
    glBegin(GL_QUADS);
    glColor3f(0.592, 0.529, 0.541);
    glVertex3f(20.6875f, 12.9375f, 0.0f);
    glVertex3f(20.6875f, 18.3125f, 0.0f);
    glVertex3f(27.0f, 18.375f, 0.0f);
    glVertex3f(26.9375f, 12.875f, 0.0f);



    glEnd();

//blue door left
    glBegin(GL_QUADS);

    glColor3f(0.596, 0.878, 0.933);
    glVertex3f(21.1875f, 13.375f, 0.0f);
    glVertex3f(21.25f, 17.75f, 0.0f);
    glVertex3f(23.625f, 17.8125f, 0.0f);
    glVertex3f(23.5625f, 13.375f, 0.0f);

    glEnd();


//blue door right
    glBegin(GL_QUADS);

    glColor3f(0.596, 0.878, 0.933);
    glVertex3f(24.1875f, 17.875f, 0.0f);
    glVertex3f(26.5625f, 17.75f, 0.0f);
    glVertex3f(26.4375f, 13.25f, 0.0f);
    glVertex3f(24.1875f, 13.3125f, 0.0f);



    glEnd();

//door handle left
    glBegin(GL_QUADS);

    glColor3f(0.541, 0.639, 0.667);
    glVertex3f(23.0f, 15.1875f, 0.0f);
    glVertex3f(23.0625f, 16.3125f, 0.0f);
    glVertex3f(23.375f, 16.3125f, 0.0f);
    glVertex3f(23.375f, 15.0625f, 0.0f);

    glEnd();


//door handle right
    glBegin(GL_QUADS);

    glColor3f(0.541, 0.639, 0.667);
    glVertex3f(24.5625f, 15.0f, 0.0f);
    glVertex3f(24.5f, 16.1875f, 0.0f);
    glVertex3f(24.875f, 16.25f, 0.0f);
    glVertex3f(24.9375f, 15.0f, 0.0f);

    glEnd();


//signboard plus
    glBegin(GL_QUADS);

    glColor3f(0.941, 0.365, 0.231);
    glVertex3f(19.875f, 19.8125f, 0.0f);
    glVertex3f(27.8125f, 19.75f, 0.0f);
    glVertex3f(27.875f, 18.3125f, 0.0f);
    glVertex3f(19.875f, 18.375f, 0.0f);
    glEnd();


// plus1
    glBegin(GL_QUADS);

    glColor3f(1.0, 1.0, 0.984);
    glVertex3f(23.1875f, 19.3125f, 0.0f);
    glVertex3f(24.625f, 19.25f, 0.0f);
    glVertex3f(24.625f, 18.875f, 0.0f);
    glVertex3f(23.125f, 18.875f, 0.0f);


    glEnd();

// plus2
    glBegin(GL_QUADS);

    glColor3f(1.0, 1.0, 0.984);
    glVertex3f(23.5625f, 19.625f, 0.0f);
    glVertex3f(23.625f, 18.5625f, 0.0f);
    glVertex3f(24.1875f, 18.5625f, 0.0f);
    glVertex3f(24.1875f, 19.5625f, 0.0f);




    glEnd();

// top left window first building
    glBegin(GL_QUADS);

    glColor3f(0.749, 0.702, 0.71);
    glVertex3f(18.375f, 17.125f, 0.0f);
    glVertex3f(19.375f, 17.125f, 0.0f);
    glVertex3f(19.4375f, 16.0f, 0.0f);
    glVertex3f(18.375f, 16.125f, 0.0f);

    glEnd();

// top left window first building
    glBegin(GL_QUADS);

    glColor3f(0.604, 0.525, 0.569);
    glVertex3f(18.4375f, 15.1875f, 0.0f);
    glVertex3f(19.4375f, 15.1875f, 0.0f);
    glVertex3f(19.4375f, 14.0625f, 0.0f);
    glVertex3f(18.4375f, 14.0625f, 0.0f);



    glEnd();


// top right window first building
    glBegin(GL_QUADS);

    glColor3f(0.749, 0.702, 0.71);
    glVertex3f(28.5f, 17.0f, 0.0f);
    glVertex3f(29.5625f, 17.0625f, 0.0f);
    glVertex3f(29.5625f, 16.125f, 0.0f);
    glVertex3f(28.625f, 16.0625f, 0.0f);



    glEnd();



// top left window first building
    glBegin(GL_QUADS);

    glColor3f(0.604, 0.525, 0.569);
    glVertex3f(28.5625f, 15.0625f, 0.0f);
    glVertex3f(29.625f, 15.125f, 0.0f);
    glVertex3f(29.625f, 14.0625f, 0.0f);
    glVertex3f(28.625f, 14.0f, 0.0f);





    glEnd();


// first building sad
    glBegin(GL_QUADS);
    glColor3f(0.945, 0.361, 0.231);
    glVertex3f(16.4375f, 25.125f, 0.0f);
    glVertex3f(16.4375f, 23.5625f, 0.0f);
    glVertex3f(31.375f, 23.5f, 0.0f);
    glVertex3f(31.3125f, 25.0f, 0.0f);

    glEnd();


// top left window first building1
    glBegin(GL_QUADS);

    glColor3f(0.604, 0.525, 0.569);
    glVertex3f(17.8125f, 22.625f, 0.0f);
    glVertex3f(20.0f, 22.625f, 0.0f);
    glVertex3f(20.0f, 20.4375f, 0.0f);
    glVertex3f(17.8125f, 20.375f, 0.0f);




    glEnd();

// top left window first building2
    glBegin(GL_QUADS);

    glColor3f(0.604, 0.525, 0.569);
    glVertex3f(21.125f, 22.6875f, 0.0f);
    glVertex3f(23.375f, 22.6875f, 0.0f);
    glVertex3f(23.4375f, 20.375f, 0.0f);
    glVertex3f(21.125f, 20.375f, 0.0f);


    glEnd();



// top left window first building3
    glBegin(GL_QUADS);

    glColor3f(0.604, 0.525, 0.569);
    glVertex3f(24.5f, 22.625f, 0.0f);
    glVertex3f(26.75f, 22.625f, 0.0f);
    glVertex3f(26.8125f, 20.4375f, 0.0f);
    glVertex3f(24.5f, 20.375f, 0.0f);

    glEnd();


// top left window first building4
    glBegin(GL_QUADS);

    glColor3f(0.604, 0.525, 0.569);
    glVertex3f(27.875f, 22.6875f, 0.0f);
    glVertex3f(30.125f, 22.5625f, 0.0f);
    glVertex3f(30.125f, 20.375f, 0.0f);
    glVertex3f(27.75f, 20.375f, 0.0f);

    glEnd();


// top left window first building1 blue glass1
    glBegin(GL_QUADS);

    glColor3f(0.608, 0.875, 0.918);
    glVertex3f(18.0625f, 22.3125f, 0.0f);
    glVertex3f(19.6875f, 22.3125f, 0.0f);
    glVertex3f(19.6875f, 20.6875f, 0.0f);
    glVertex3f(18.0625f, 20.625f, 0.0f);
    glEnd();

// top left window first building1 blue glass2
    glBegin(GL_QUADS);

    glColor3f(0.608, 0.875, 0.918);
    glVertex3f(21.4375f, 22.4375f, 0.0f);
    glVertex3f(23.125f, 22.4375f, 0.0f);
    glVertex3f(23.125f, 20.625f, 0.0f);
    glVertex3f(21.375f, 20.6875f, 0.0f);
    glEnd();

// top left window first building1 blue glass3
    glBegin(GL_QUADS);

    glColor3f(0.608, 0.875, 0.918);
    glVertex3f(24.8125f, 22.3125f, 0.0f);
    glVertex3f(26.5f, 22.375f, 0.0f);
    glVertex3f(26.5f, 20.6875f, 0.0f);
    glVertex3f(24.8125f, 20.6875f, 0.0f);
    glEnd();

// top left window first building1 blue glass4
    glBegin(GL_QUADS);

    glColor3f(0.608, 0.875, 0.918);
    glVertex3f(28.0f, 22.4375f, 0.0f);
    glVertex3f(29.875f, 22.375f, 0.0f);
    glVertex3f(29.875f, 20.625f, 0.0f);
    glVertex3f(28.125f, 20.5625f, 0.0f);
    glEnd();




//banch start
// banch bottom paya 1
    glBegin(GL_QUADS);

    glColor3f(0.522, 0.384, 0.275);
    glVertex3f(3.125f, 11.5f, 0.0f);
    glVertex3f(3.125f, 12.375f, 0.0f);
    glVertex3f(3.5f, 12.375f, 0.0f);
    glVertex3f(3.5625f, 11.5f, 0.0f);

    glEnd();

// banch bottom paya 2
    glBegin(GL_QUADS);

    glColor3f(0.522, 0.384, 0.275);
    glVertex3f(8.9375f, 11.5f, 0.0f);
    glVertex3f(8.875f, 12.3125f, 0.0f);
    glVertex3f(8.5f, 12.375f, 0.0f);
    glVertex3f(8.5625f, 11.5f, 0.0f);

    glEnd();

// banch wood shadow
    glBegin(GL_QUADS);

    glColor3f(0.522, 0.384, 0.275);
    glVertex3f(3.125f, 12.5f, 0.0f);
    glVertex3f(8.6875f, 12.4375f, 0.0f);
    glVertex3f(8.8125f, 12.25f, 0.0f);
    glVertex3f(3.25f, 12.1875f, 0.0f);



    glEnd();



// banch wood 1
    glBegin(GL_QUADS);

    glColor3f(0.659, 0.475, 0.365);
    glVertex3f(3.0f, 13.0f, 0.0f);
    glVertex3f(9.0f, 13.0f, 0.0f);
    glVertex3f(9.125f, 12.4375f, 0.0f);
    glVertex3f(3.0f, 12.4375f, 0.0f);

    glEnd();

// banch wood support 1
    glBegin(GL_QUADS);

    glColor3f(0.659, 0.475, 0.365);
    glVertex3f(3.625f, 13.0f, 0.0f);
    glVertex3f(3.625f, 14.4375f, 0.0f);
    glVertex3f(3.875f, 14.5f, 0.0f);
    glVertex3f(3.875f, 12.9375f, 0.0f);

    glEnd();



// banch wood support 1
    glBegin(GL_QUADS);

    glColor3f(0.659, 0.475, 0.365);
    glVertex3f(3.625f, 13.0f, 0.0f);
    glVertex3f(3.625f, 14.4375f, 0.0f);
    glVertex3f(3.875f, 14.5f, 0.0f);
    glVertex3f(3.875f, 12.9375f, 0.0f);

    glEnd();
// banch wood support 2
    glBegin(GL_QUADS);

    glColor3f(0.659, 0.475, 0.365);
    glVertex3f(8.1875f, 13.0f, 0.0f);
    glVertex3f(8.1875f, 14.4375f, 0.0f);
    glVertex3f(8.5f, 14.5625f, 0.0f);
    glVertex3f(8.4375f, 12.9375f, 0.0f);

    glEnd();



// banch wood helan dewar wood bootom 1
    glBegin(GL_QUADS);

    glColor3f(0.855, 0.522, 0.361);
    glVertex3f(3.1875f, 13.5625f, 0.0f);
    glVertex3f(8.875f, 13.5625f, 0.0f);
    glVertex3f(8.9375f, 13.125f, 0.0f);
    glVertex3f(3.1875f, 13.125f, 0.0f);

    glEnd();

// banch wood helan dewar wood bootom 2
    glBegin(GL_QUADS);

    glColor3f(0.855, 0.522, 0.361);
    glVertex3f(3.125f, 14.125f, 0.0f);
    glVertex3f(8.875f, 14.125f, 0.0f);
    glVertex3f(8.875f, 13.8125f, 0.0f);
    glVertex3f(3.25f, 13.75f, 0.0f);

    glEnd();

// banch wood helan dewar wood bootom 2
    glBegin(GL_QUADS);

    glColor3f(0.855, 0.522, 0.361);
    glVertex3f(3.1875f, 15.0f, 0.0f);
    glVertex3f(8.9375f, 15.0f, 0.0f);
    glVertex3f(8.875f, 14.5625f, 0.0f);
    glVertex3f(3.0625f, 14.375f, 0.0f);

    glEnd();



//small tree


//small tree wood


// banch wood helan dewar wood bootom 2
    glBegin(GL_QUADS);

    glColor3f(0.541, 0.373, 0.235);
    glVertex3f(11.125f, 11.5f, 0.0f);
    glVertex3f(11.125f, 15.375f, 0.0f);
    glVertex3f(11.8125f, 15.375f, 0.0f);
    glVertex3f(11.8125f, 11.5f, 0.0f);

    glEnd();

//bottom leaf 1
    glBegin(GL_TRIANGLES);

    glColor3f(0.494, 0.741, 0.039);
    glVertex3f(9.4375f, 15.375f, 0.0f);
    glVertex3f(11.375f, 17.6875f, 0.0f);
    glVertex3f(13.4375f, 15.375f, 0.0f);

    glEnd();

//bottom leaf 2
    glBegin(GL_TRIANGLES);

    glColor3f(0.404, 0.608, 0.0);
    glVertex3f(8.9375f, 16.1875f, 0.0f);
    glVertex3f(11.8125f, 18.4375f, 0.0f);
    glVertex3f(14.0f, 16.125f, 0.0f);

    glEnd();

//TOP leaf 3
    glBegin(GL_TRIANGLES);

    glColor3f(0.2, 0.4, 0.004);
    glVertex3f(9.125f, 16.9375f, 0.0f);
    glVertex3f(11.6875f, 19.625f, 0.0f);
    glVertex3f(13.8125f, 17.0f, 0.0f);

    glEnd();



//RIGHT BIG TREE START

    glBegin(GL_QUADS);

    glColor3f(0.533, 0.38, 0.227);
    glVertex3f(44.5f, 11.5625f, 0.0f);
    glVertex3f(44.5625f, 17.9375f, 0.0f);
    glVertex3f(45.625f, 17.875f, 0.0f);
    glVertex3f(45.5625f, 11.5f, 0.0f);

    glEnd();


//bottom leaf 1
    glBegin(GL_TRIANGLES);

    glColor3f(0.494, 0.741, 0.039);
    glVertex3f(41.625f, 17.9375f, 0.0f);
    glVertex3f(45.0f, 21.9375f, 0.0f);
    glVertex3f(47.8125f, 17.875f, 0.0f);



    glEnd();


//bottom leaf 2
    glBegin(GL_TRIANGLES);

    glColor3f(0.404, 0.608, 0.0);
    glVertex3f(40.8125f, 19.1875f, 0.0f);
    glVertex3f(45.375f, 23.0f, 0.0f);
    glVertex3f(49.0f, 19.25f, 0.0f);

    glEnd();

//TOP leaf 3
    glBegin(GL_TRIANGLES);

    glColor3f(0.2, 0.4, 0.004);
    glVertex3f(41.375f, 20.625f, 0.0f);
    glVertex3f(45.3125f, 24.875f, 0.0f);
    glVertex3f(48.6875f, 20.5f, 0.0f);

    glEnd();







    car();





//
//sun rays start

//ray left big
    glBegin(GL_QUADS);

    glColor3f(0.698, 0.933, 0.835);
    glVertex3f(0.0625f, 38.125f, 0.0f);
    glVertex3f(22.625f, 43.25f, 0.0f);
    glVertex3f(23.625f, 41.375f, 0.0f);
    glVertex3f(0.0f, 28.4375f, 0.0f);

    glEnd();


//ray left top
    glBegin(GL_QUADS);

    glColor3f(0.698, 0.933, 0.835);
    glVertex3f(23.125f, 43.5f, 0.0f);
    glVertex3f(24.5f, 44.375f, 0.0f);
    glVertex3f(22.625f, 49.75f, 0.0f);
    glVertex3f(14.125f, 49.875f, 0.0f);

    glEnd();


//ray right top


    glBegin(GL_QUADS);

    glColor3f(0.698, 0.933, 0.835);
    glVertex3f(25.1875f, 45.625f, 0.0f);
    glVertex3f(28.9375f, 49.9375f, 0.0f);
    glVertex3f(41.1875f, 49.75f, 0.0f);
    glVertex3f(26.0f, 43.75f, 0.0f);

    glEnd();


//ray right bottom  big
    glBegin(GL_QUADS);

    glColor3f(0.698, 0.933, 0.835);
    glVertex3f(26.625f, 43.3125f, 0.0f);
    glVertex3f(49.8125f, 40.75f, 0.0f);
    glVertex3f(50.0625f, 24.5625f, 0.0f);
    glVertex3f(26.1875f, 41.125f, 0.0f);

    glEnd();


//SUN USING TRINGLE FAN
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.906, 0.341);
    glVertex3f(25.0f, 43.6875f, 0.0f);
    glVertex3f(21.9375f, 42.5f, 0.0f);
    glVertex3f(21.9375f, 42.5625f, 0.0f);
    glVertex3f(21.9375f, 42.625f, 0.0f);
    glVertex3f(21.9375f, 42.6875f, 0.0f);
    glVertex3f(21.875f, 42.6875f, 0.0f);
    glVertex3f(21.875f, 42.75f, 0.0f);
    glVertex3f(21.875f, 42.8125f, 0.0f);
    glVertex3f(21.875f, 42.875f, 0.0f);
    glVertex3f(21.875f, 42.9375f, 0.0f);
    glVertex3f(21.875f, 43.0f, 0.0f);
    glVertex3f(21.875f, 43.0625f, 0.0f);
    glVertex3f(21.875f, 43.125f, 0.0f);
    glVertex3f(21.875f, 43.1875f, 0.0f);
    glVertex3f(21.875f, 43.25f, 0.0f);
    glVertex3f(21.875f, 43.3125f, 0.0f);
    glVertex3f(21.875f, 43.375f, 0.0f);
    glVertex3f(21.8125f, 43.375f, 0.0f);
    glVertex3f(21.8125f, 43.4375f, 0.0f);
    glVertex3f(21.8125f, 43.5f, 0.0f);
    glVertex3f(21.75f, 43.5625f, 0.0f);
    glVertex3f(21.75f, 43.625f, 0.0f);
    glVertex3f(21.75f, 43.6875f, 0.0f);
    glVertex3f(21.75f, 43.75f, 0.0f);
    glVertex3f(21.75f, 43.8125f, 0.0f);
    glVertex3f(21.75f, 43.875f, 0.0f);
    glVertex3f(21.75f, 43.9375f, 0.0f);
    glVertex3f(21.75f, 44.0f, 0.0f);
    glVertex3f(21.75f, 44.0625f, 0.0f);
    glVertex3f(21.75f, 44.125f, 0.0f);
    glVertex3f(21.75f, 44.1875f, 0.0f);
    glVertex3f(21.75f, 44.25f, 0.0f);
    glVertex3f(21.8125f, 44.25f, 0.0f);
    glVertex3f(21.8125f, 44.3125f, 0.0f);
    glVertex3f(21.875f, 44.3125f, 0.0f);
    glVertex3f(21.875f, 44.375f, 0.0f);
    glVertex3f(21.875f, 44.4375f, 0.0f);
    glVertex3f(21.9375f, 44.4375f, 0.0f);
    glVertex3f(21.9375f, 44.5f, 0.0f);
    glVertex3f(21.9375f, 44.5625f, 0.0f);
    glVertex3f(21.9375f, 44.625f, 0.0f);
    glVertex3f(22.0f, 44.625f, 0.0f);
    glVertex3f(22.0f, 44.6875f, 0.0f);
    glVertex3f(22.0f, 44.75f, 0.0f);
    glVertex3f(22.0f, 44.8125f, 0.0f);
    glVertex3f(22.0625f, 44.8125f, 0.0f);
    glVertex3f(22.0625f, 44.875f, 0.0f);
    glVertex3f(22.125f, 44.875f, 0.0f);
    glVertex3f(22.125f, 44.9375f, 0.0f);
    glVertex3f(22.125f, 45.0f, 0.0f);
    glVertex3f(22.125f, 45.0625f, 0.0f);
    glVertex3f(22.1875f, 45.0625f, 0.0f);
    glVertex3f(22.1875f, 45.125f, 0.0f);
    glVertex3f(22.1875f, 45.1875f, 0.0f);
    glVertex3f(22.25f, 45.1875f, 0.0f);
    glVertex3f(22.25f, 45.25f, 0.0f);
    glVertex3f(22.25f, 45.3125f, 0.0f);
    glVertex3f(22.3125f, 45.3125f, 0.0f);
    glVertex3f(22.375f, 45.3125f, 0.0f);
    glVertex3f(22.375f, 45.375f, 0.0f);
    glVertex3f(22.375f, 45.4375f, 0.0f);
    glVertex3f(22.4375f, 45.4375f, 0.0f);
    glVertex3f(22.4375f, 45.5f, 0.0f);
    glVertex3f(22.5f, 45.5f, 0.0f);
    glVertex3f(22.5f, 45.5625f, 0.0f);
    glVertex3f(22.5625f, 45.5625f, 0.0f);
    glVertex3f(22.5625f, 45.625f, 0.0f);
    glVertex3f(22.625f, 45.625f, 0.0f);
    glVertex3f(22.625f, 45.6875f, 0.0f);
    glVertex3f(22.625f, 45.75f, 0.0f);
    glVertex3f(22.6875f, 45.75f, 0.0f);
    glVertex3f(22.6875f, 45.8125f, 0.0f);
    glVertex3f(22.75f, 45.8125f, 0.0f);
    glVertex3f(22.75f, 45.875f, 0.0f);
    glVertex3f(22.8125f, 45.875f, 0.0f);
    glVertex3f(22.875f, 45.9375f, 0.0f);
    glVertex3f(22.875f, 46.0f, 0.0f);
    glVertex3f(22.9375f, 46.0f, 0.0f);
    glVertex3f(23.0f, 46.0f, 0.0f);
    glVertex3f(23.0f, 46.0625f, 0.0f);
    glVertex3f(23.0625f, 46.0625f, 0.0f);
    glVertex3f(23.125f, 46.0625f, 0.0f);
    glVertex3f(23.125f, 46.125f, 0.0f);
    glVertex3f(23.1875f, 46.125f, 0.0f);
    glVertex3f(23.25f, 46.125f, 0.0f);
    glVertex3f(23.3125f, 46.125f, 0.0f);
    glVertex3f(23.3125f, 46.1875f, 0.0f);
    glVertex3f(23.375f, 46.1875f, 0.0f);
    glVertex3f(23.4375f, 46.1875f, 0.0f);
    glVertex3f(23.4375f, 46.25f, 0.0f);
    glVertex3f(23.5f, 46.25f, 0.0f);
    glVertex3f(23.5625f, 46.25f, 0.0f);
    glVertex3f(23.5625f, 46.3125f, 0.0f);
    glVertex3f(23.625f, 46.3125f, 0.0f);
    glVertex3f(23.6875f, 46.3125f, 0.0f);
    glVertex3f(23.75f, 46.3125f, 0.0f);
    glVertex3f(23.75f, 46.375f, 0.0f);
    glVertex3f(23.8125f, 46.375f, 0.0f);
    glVertex3f(23.875f, 46.375f, 0.0f);
    glVertex3f(23.9375f, 46.375f, 0.0f);
    glVertex3f(24.0f, 46.375f, 0.0f);
    glVertex3f(24.0625f, 46.375f, 0.0f);
    glVertex3f(24.0625f, 46.4375f, 0.0f);
    glVertex3f(24.125f, 46.4375f, 0.0f);
    glVertex3f(24.1875f, 46.4375f, 0.0f);
    glVertex3f(24.25f, 46.4375f, 0.0f);
    glVertex3f(24.3125f, 46.4375f, 0.0f);
    glVertex3f(24.375f, 46.4375f, 0.0f);
    glVertex3f(24.4375f, 46.4375f, 0.0f);
    glVertex3f(24.5f, 46.4375f, 0.0f);
    glVertex3f(24.5625f, 46.4375f, 0.0f);
    glVertex3f(24.625f, 46.4375f, 0.0f);
    glVertex3f(24.6875f, 46.4375f, 0.0f);
    glVertex3f(24.75f, 46.4375f, 0.0f);
    glVertex3f(24.8125f, 46.4375f, 0.0f);
    glVertex3f(24.875f, 46.4375f, 0.0f);
    glVertex3f(24.9375f, 46.4375f, 0.0f);
    glVertex3f(25.0f, 46.4375f, 0.0f);
    glVertex3f(25.0625f, 46.4375f, 0.0f);
    glVertex3f(25.125f, 46.4375f, 0.0f);
    glVertex3f(25.1875f, 46.4375f, 0.0f);
    glVertex3f(25.25f, 46.4375f, 0.0f);
    glVertex3f(25.3125f, 46.4375f, 0.0f);
    glVertex3f(25.375f, 46.4375f, 0.0f);
    glVertex3f(25.375f, 46.375f, 0.0f);
    glVertex3f(25.4375f, 46.375f, 0.0f);
    glVertex3f(25.5f, 46.375f, 0.0f);
    glVertex3f(25.5f, 46.3125f, 0.0f);
    glVertex3f(25.5625f, 46.3125f, 0.0f);
    glVertex3f(25.625f, 46.3125f, 0.0f);
    glVertex3f(25.6875f, 46.3125f, 0.0f);
    glVertex3f(25.6875f, 46.25f, 0.0f);
    glVertex3f(25.75f, 46.25f, 0.0f);
    glVertex3f(25.8125f, 46.25f, 0.0f);
    glVertex3f(25.8125f, 46.1875f, 0.0f);
    glVertex3f(25.875f, 46.1875f, 0.0f);
    glVertex3f(25.9375f, 46.125f, 0.0f);
    glVertex3f(26.0f, 46.125f, 0.0f);
    glVertex3f(26.0625f, 46.125f, 0.0f);
    glVertex3f(26.0625f, 46.0625f, 0.0f);
    glVertex3f(26.125f, 46.0625f, 0.0f);
    glVertex3f(26.1875f, 46.0625f, 0.0f);
    glVertex3f(26.25f, 46.0625f, 0.0f);
    glVertex3f(26.25f, 46.0f, 0.0f);
    glVertex3f(26.3125f, 46.0f, 0.0f);
    glVertex3f(26.375f, 46.0f, 0.0f);
    glVertex3f(26.4375f, 46.0f, 0.0f);
    glVertex3f(26.4375f, 45.9375f, 0.0f);
    glVertex3f(26.5f, 45.9375f, 0.0f);
    glVertex3f(26.5f, 45.875f, 0.0f);
    glVertex3f(26.5625f, 45.875f, 0.0f);
    glVertex3f(26.625f, 45.875f, 0.0f);
    glVertex3f(26.625f, 45.8125f, 0.0f);
    glVertex3f(26.6875f, 45.8125f, 0.0f);
    glVertex3f(26.75f, 45.8125f, 0.0f);
    glVertex3f(26.75f, 45.75f, 0.0f);
    glVertex3f(26.8125f, 45.75f, 0.0f);
    glVertex3f(26.875f, 45.75f, 0.0f);
    glVertex3f(26.875f, 45.6875f, 0.0f);
    glVertex3f(26.9375f, 45.6875f, 0.0f);
    glVertex3f(26.9375f, 45.625f, 0.0f);
    glVertex3f(27.0f, 45.625f, 0.0f);
    glVertex3f(27.0f, 45.5625f, 0.0f);
    glVertex3f(27.0625f, 45.5625f, 0.0f);
    glVertex3f(27.0625f, 45.5f, 0.0f);
    glVertex3f(27.125f, 45.5f, 0.0f);
    glVertex3f(27.125f, 45.4375f, 0.0f);
    glVertex3f(27.125f, 45.375f, 0.0f);
    glVertex3f(27.1875f, 45.375f, 0.0f);
    glVertex3f(27.1875f, 45.3125f, 0.0f);
    glVertex3f(27.25f, 45.3125f, 0.0f);
    glVertex3f(27.25f, 45.25f, 0.0f);
    glVertex3f(27.3125f, 45.25f, 0.0f);
    glVertex3f(27.3125f, 45.1875f, 0.0f);
    glVertex3f(27.375f, 45.1875f, 0.0f);
    glVertex3f(27.4375f, 45.1875f, 0.0f);
    glVertex3f(27.4375f, 45.125f, 0.0f);
    glVertex3f(27.4375f, 45.0625f, 0.0f);
    glVertex3f(27.5f, 45.0625f, 0.0f);
    glVertex3f(27.5f, 45.0f, 0.0f);
    glVertex3f(27.5625f, 45.0f, 0.0f);
    glVertex3f(27.5625f, 44.9375f, 0.0f);
    glVertex3f(27.625f, 44.9375f, 0.0f);
    glVertex3f(27.625f, 44.875f, 0.0f);
    glVertex3f(27.625f, 44.8125f, 0.0f);
    glVertex3f(27.6875f, 44.8125f, 0.0f);
    glVertex3f(27.6875f, 44.75f, 0.0f);
    glVertex3f(27.6875f, 44.6875f, 0.0f);
    glVertex3f(27.75f, 44.6875f, 0.0f);
    glVertex3f(27.75f, 44.625f, 0.0f);
    glVertex3f(27.75f, 44.5625f, 0.0f);
    glVertex3f(27.8125f, 44.5625f, 0.0f);
    glVertex3f(27.8125f, 44.5f, 0.0f);
    glVertex3f(27.8125f, 44.4375f, 0.0f);
    glVertex3f(27.8125f, 44.375f, 0.0f);
    glVertex3f(27.8125f, 44.3125f, 0.0f);
    glVertex3f(27.875f, 44.3125f, 0.0f);
    glVertex3f(27.875f, 44.25f, 0.0f);
    glVertex3f(27.875f, 44.1875f, 0.0f);
    glVertex3f(27.875f, 44.125f, 0.0f);
    glVertex3f(27.875f, 44.0625f, 0.0f);
    glVertex3f(27.875f, 44.0f, 0.0f);
    glVertex3f(27.875f, 43.9375f, 0.0f);
    glVertex3f(27.875f, 43.875f, 0.0f);
    glVertex3f(27.875f, 43.8125f, 0.0f);
    glVertex3f(27.875f, 43.75f, 0.0f);
    glVertex3f(27.875f, 43.6875f, 0.0f);
    glVertex3f(27.875f, 43.625f, 0.0f);
    glVertex3f(27.875f, 43.5625f, 0.0f);
    glVertex3f(27.875f, 43.5f, 0.0f);
    glVertex3f(27.875f, 43.4375f, 0.0f);
    glVertex3f(27.875f, 43.375f, 0.0f);
    glVertex3f(27.875f, 43.3125f, 0.0f);
    glVertex3f(27.875f, 43.25f, 0.0f);
    glVertex3f(27.875f, 43.1875f, 0.0f);
    glVertex3f(27.875f, 43.125f, 0.0f);
    glVertex3f(27.875f, 43.0625f, 0.0f);
    glVertex3f(27.875f, 43.0f, 0.0f);
    glVertex3f(27.875f, 42.9375f, 0.0f);
    glVertex3f(27.875f, 42.875f, 0.0f);
    glVertex3f(27.875f, 42.8125f, 0.0f);
    glVertex3f(27.875f, 42.75f, 0.0f);
    glVertex3f(27.875f, 42.6875f, 0.0f);
    glVertex3f(27.875f, 42.625f, 0.0f);
    glVertex3f(27.875f, 42.5625f, 0.0f);
    glVertex3f(27.875f, 42.5f, 0.0f);
    glVertex3f(27.8125f, 42.5f, 0.0f);
    glVertex3f(27.8125f, 42.4375f, 0.0f);
    glVertex3f(27.8125f, 42.375f, 0.0f);
    glVertex3f(27.8125f, 42.3125f, 0.0f);
    glVertex3f(27.8125f, 42.25f, 0.0f);
    glVertex3f(27.75f, 42.25f, 0.0f);
    glVertex3f(27.75f, 42.1875f, 0.0f);
    glVertex3f(27.6875f, 42.1875f, 0.0f);
    glVertex3f(27.6875f, 42.125f, 0.0f);
    glVertex3f(27.625f, 42.0625f, 0.0f);
    glVertex3f(27.625f, 42.0f, 0.0f);
    glVertex3f(27.5625f, 42.0f, 0.0f);
    glVertex3f(27.5625f, 41.9375f, 0.0f);
    glVertex3f(27.5f, 41.9375f, 0.0f);
    glVertex3f(27.4375f, 41.9375f, 0.0f);
    glVertex3f(27.4375f, 41.875f, 0.0f);
    glVertex3f(27.375f, 41.875f, 0.0f);
    glVertex3f(27.375f, 41.8125f, 0.0f);
    glVertex3f(27.3125f, 41.8125f, 0.0f);
    glVertex3f(27.3125f, 41.75f, 0.0f);
    glVertex3f(27.25f, 41.75f, 0.0f);
    glVertex3f(27.25f, 41.6875f, 0.0f);
    glVertex3f(27.1875f, 41.6875f, 0.0f);
    glVertex3f(27.125f, 41.625f, 0.0f);
    glVertex3f(27.0625f, 41.625f, 0.0f);
    glVertex3f(27.0625f, 41.5625f, 0.0f);
    glVertex3f(27.0f, 41.5625f, 0.0f);
    glVertex3f(27.0f, 41.5f, 0.0f);
    glVertex3f(26.9375f, 41.5f, 0.0f);
    glVertex3f(26.9375f, 41.4375f, 0.0f);
    glVertex3f(26.875f, 41.4375f, 0.0f);
    glVertex3f(26.875f, 41.375f, 0.0f);
    glVertex3f(26.8125f, 41.375f, 0.0f);
    glVertex3f(26.8125f, 41.3125f, 0.0f);
    glVertex3f(26.75f, 41.3125f, 0.0f);
    glVertex3f(26.6875f, 41.3125f, 0.0f);
    glVertex3f(26.6875f, 41.25f, 0.0f);
    glVertex3f(26.625f, 41.25f, 0.0f);
    glVertex3f(26.625f, 41.1875f, 0.0f);
    glVertex3f(26.5625f, 41.1875f, 0.0f);
    glVertex3f(26.5625f, 41.125f, 0.0f);
    glVertex3f(26.5f, 41.125f, 0.0f);
    glVertex3f(26.5f, 41.0625f, 0.0f);
    glVertex3f(26.4375f, 41.0625f, 0.0f);
    glVertex3f(26.375f, 41.0625f, 0.0f);
    glVertex3f(26.3125f, 41.0625f, 0.0f);
    glVertex3f(26.3125f, 41.0f, 0.0f);
    glVertex3f(26.25f, 41.0f, 0.0f);
    glVertex3f(26.25f, 40.9375f, 0.0f);
    glVertex3f(26.1875f, 40.9375f, 0.0f);
    glVertex3f(26.125f, 40.9375f, 0.0f);
    glVertex3f(26.125f, 40.875f, 0.0f);
    glVertex3f(26.0625f, 40.875f, 0.0f);
    glVertex3f(26.0f, 40.875f, 0.0f);
    glVertex3f(26.0f, 40.8125f, 0.0f);
    glVertex3f(25.9375f, 40.8125f, 0.0f);
    glVertex3f(25.875f, 40.8125f, 0.0f);
    glVertex3f(25.8125f, 40.8125f, 0.0f);
    glVertex3f(25.8125f, 40.75f, 0.0f);
    glVertex3f(25.75f, 40.6875f, 0.0f);
    glVertex3f(25.6875f, 40.6875f, 0.0f);
    glVertex3f(25.625f, 40.6875f, 0.0f);
    glVertex3f(25.625f, 40.625f, 0.0f);
    glVertex3f(25.5625f, 40.625f, 0.0f);
    glVertex3f(25.5f, 40.625f, 0.0f);
    glVertex3f(25.4375f, 40.625f, 0.0f);
    glVertex3f(25.375f, 40.625f, 0.0f);
    glVertex3f(25.375f, 40.5625f, 0.0f);
    glVertex3f(25.3125f, 40.5625f, 0.0f);
    glVertex3f(25.25f, 40.5625f, 0.0f);
    glVertex3f(25.1875f, 40.5625f, 0.0f);
    glVertex3f(25.1875f, 40.5f, 0.0f);
    glVertex3f(25.125f, 40.5f, 0.0f);
    glVertex3f(25.0625f, 40.5f, 0.0f);
    glVertex3f(25.0625f, 40.4375f, 0.0f);
    glVertex3f(25.0f, 40.4375f, 0.0f);
    glVertex3f(24.9375f, 40.4375f, 0.0f);
    glVertex3f(24.875f, 40.4375f, 0.0f);
    glVertex3f(24.8125f, 40.4375f, 0.0f);
    glVertex3f(24.75f, 40.4375f, 0.0f);
    glVertex3f(24.6875f, 40.4375f, 0.0f);
    glVertex3f(24.625f, 40.4375f, 0.0f);
    glVertex3f(24.5625f, 40.4375f, 0.0f);
    glVertex3f(24.5f, 40.4375f, 0.0f);
    glVertex3f(24.4375f, 40.4375f, 0.0f);
    glVertex3f(24.375f, 40.4375f, 0.0f);
    glVertex3f(24.3125f, 40.4375f, 0.0f);
    glVertex3f(24.25f, 40.4375f, 0.0f);
    glVertex3f(24.1875f, 40.4375f, 0.0f);
    glVertex3f(24.125f, 40.4375f, 0.0f);
    glVertex3f(24.0625f, 40.5f, 0.0f);
    glVertex3f(24.0625f, 40.5625f, 0.0f);
    glVertex3f(24.0f, 40.5625f, 0.0f);
    glVertex3f(23.9375f, 40.5625f, 0.0f);
    glVertex3f(23.9375f, 40.625f, 0.0f);
    glVertex3f(23.875f, 40.625f, 0.0f);
    glVertex3f(23.8125f, 40.625f, 0.0f);
    glVertex3f(23.8125f, 40.6875f, 0.0f);
    glVertex3f(23.75f, 40.6875f, 0.0f);
    glVertex3f(23.6875f, 40.6875f, 0.0f);
    glVertex3f(23.6875f, 40.75f, 0.0f);
    glVertex3f(23.625f, 40.75f, 0.0f);
    glVertex3f(23.5625f, 40.75f, 0.0f);
    glVertex3f(23.5625f, 40.8125f, 0.0f);
    glVertex3f(23.5f, 40.8125f, 0.0f);
    glVertex3f(23.5f, 40.875f, 0.0f);
    glVertex3f(23.4375f, 40.875f, 0.0f);
    glVertex3f(23.375f, 40.875f, 0.0f);
    glVertex3f(23.3125f, 40.875f, 0.0f);
    glVertex3f(23.3125f, 40.9375f, 0.0f);
    glVertex3f(23.25f, 40.9375f, 0.0f);
    glVertex3f(23.1875f, 40.9375f, 0.0f);
    glVertex3f(23.1875f, 41.0f, 0.0f);
    glVertex3f(23.125f, 41.0f, 0.0f);
    glVertex3f(23.125f, 41.0625f, 0.0f);
    glVertex3f(23.0625f, 41.0625f, 0.0f);
    glVertex3f(23.0f, 41.0625f, 0.0f);
    glVertex3f(23.0f, 41.125f, 0.0f);
    glVertex3f(22.9375f, 41.125f, 0.0f);
    glVertex3f(22.875f, 41.125f, 0.0f);
    glVertex3f(22.875f, 41.1875f, 0.0f);
    glVertex3f(22.8125f, 41.1875f, 0.0f);
    glVertex3f(22.75f, 41.1875f, 0.0f);
    glVertex3f(22.75f, 41.25f, 0.0f);
    glVertex3f(22.6875f, 41.25f, 0.0f);
    glVertex3f(22.6875f, 41.3125f, 0.0f);
    glVertex3f(22.625f, 41.3125f, 0.0f);
    glVertex3f(22.625f, 41.375f, 0.0f);
    glVertex3f(22.625f, 41.4375f, 0.0f);
    glVertex3f(22.5625f, 41.4375f, 0.0f);
    glVertex3f(22.5625f, 41.5f, 0.0f);
    glVertex3f(22.5f, 41.5f, 0.0f);
    glVertex3f(22.5f, 41.5625f, 0.0f);
    glVertex3f(22.5f, 41.625f, 0.0f);
    glVertex3f(22.4375f, 41.625f, 0.0f);
    glVertex3f(22.4375f, 41.6875f, 0.0f);
    glVertex3f(22.375f, 41.6875f, 0.0f);
    glVertex3f(22.3125f, 41.6875f, 0.0f);
    glVertex3f(22.3125f, 41.75f, 0.0f);
    glVertex3f(22.3125f, 41.8125f, 0.0f);
    glVertex3f(22.25f, 41.8125f, 0.0f);
    glVertex3f(22.25f, 41.875f, 0.0f);
    glVertex3f(22.1875f, 41.875f, 0.0f);
    glVertex3f(22.1875f, 41.9375f, 0.0f);
    glVertex3f(22.125f, 41.9375f, 0.0f);
    glVertex3f(22.125f, 42.0f, 0.0f);
    glVertex3f(22.0625f, 42.0625f, 0.0f);
    glVertex3f(22.0625f, 42.125f, 0.0f);
    glVertex3f(22.0f, 42.125f, 0.0f);
    glVertex3f(22.0f, 42.1875f, 0.0f);
    glVertex3f(22.0f, 42.25f, 0.0f);
    glVertex3f(22.0f, 42.3125f, 0.0f);
    glVertex3f(22.0f, 42.375f, 0.0f);
    glVertex3f(22.0f, 42.4375f, 0.0f);
    glVertex3f(22.0f, 42.5f, 0.0f);
    glVertex3f(22.0f, 42.5625f, 0.0f);
    glVertex3f(22.0f, 42.625f, 0.0f);

    glEnd();

    glutSwapBuffers();
}






//For moving

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'l':
        xPos -= 0.01f;
        if(xPos < -0.5)
        {
            xPos = 1.5;
        }
        break;

    case 'r':
        xPos += 0.01f;
        if(xPos > 1.5)
        {
            xPos = -0.5;
        }
        break;

    default:
        break;
    }
    glutPostRedisplay();
}



int main(int argc,char **argv)
{


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(800,800);
    glutCreateWindow("AAKA-LAB");
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    init();
    glutDisplayFunc(Draw);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}




