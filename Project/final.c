/*------------------preprocessor directives----------------------*/ 
#include<GL/glut.h>
#include<stdlib.h>
/*------------------function declarations------------------------*/ 
void display();
void reshape(int,int);
void Timer(int);
void init();

//---------------------main function-----------------------------
int main(int argc,char** argv)
{
    //allows application to get command line argument and initialises the glut library
    glutInit(&argc,argv);

    /*In a double buffered scenario (GLUT_DOUBLE), there exist two framebuffer. One is used for drawing, the other one for display. At the end of each frame, these buffers are swapped. Doing so, the view is only changed at once when a frame is finished and all objects are visible for the same time.*/
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

    //glutInitWindowPosition(300,300);
    //initialises the window size 
    glutInitWindowSize(1200,1000);

    //creates a window and give it a title 
    glutCreateWindow("Project CG");

    /*Callback Functions : A callback function is a function that is passed as an argument to another function, to be “called back” at a later time. A function that accepts other functions as arguments is called a higher-order function, which contains the logic for when the callback function gets executed*/
    glutDisplayFunc(display);
    // calling the init function 
    init();

    //glutReshapeFunc sets the reshape callback for the current window.
    /*
    The reshape callback is triggered when a window is reshaped. A reshape callback is also triggered immediately before a window's first display callback after a window is created or whenever an overlay for the window is established. The width and height parameters of the callback specify the new window size in pixels.
    When the two frame buffers get swapped, the reshape callback is triggered.  
    */
    glutReshapeFunc(reshape);

    /*three parameters : milliseconds, Timer callback func, value */
    // void glutTimerFunc(unsigned int msecs, void (*func)(int value), value);
    //value : it sets the value after which the timer callback should be ignored
    glutTimerFunc(0,Timer,0);
   
    //infinite event loop 
    glutMainLoop();
}

//x and y coordinate with which all the coordinates of the object are arranged.
float x_position = 4;
float y_position = 6;

//variables for storing color 
float white[3]={1.0,1.0,1.0};
float red[3]={1.0,0.0,0.0};
float blue[3]={0.0,0.0,1.0};
//temp variable 
int flag=0;

//callback display function 
void display()
{
    //glClear : clear buffers to preset values
    //Indicates the buffers currently enabled for color writing.
    glClear(GL_COLOR_BUFFER_BIT);
    // replace the current matrix with the identity matrix
    // glLoadIdentity();

    //drawing the object
    //coordinates of the object are not constant because they have to keep changing
    glBegin(GL_POLYGON);
        glColor3fv(white);
        glVertex2f(x_position+4,y_position+8);
        glVertex2f(x_position+5,y_position+10);
        glVertex2f(x_position+6,y_position+8);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3fv(white);
        glVertex2f(x_position+3,y_position+6);
        glVertex2f(x_position+4,y_position+8);
        glVertex2f(x_position+5,y_position+6);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3fv(blue);
        glVertex2f(x_position+4,y_position+8);
        glVertex2f(x_position+5,y_position+6);
        glVertex2f(x_position+6,y_position+8);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3fv(white);
        glVertex2f(x_position+5,y_position+6);
        glVertex2f(x_position+6,y_position+8);
        glVertex2f(x_position+7,y_position+6);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3fv(white);
        glVertex2f(x_position+2,y_position+4);
        glVertex2f(x_position+3,y_position+6);
        glVertex2f(x_position+4,y_position+4);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3fv(red);
        glVertex2f(x_position+3,y_position+6);
        glVertex2f(x_position+4,y_position+4);
        glVertex2f(x_position+5,y_position+6);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3fv(white);
        glVertex2f(x_position+3,y_position+2);
        glVertex2f(x_position+5,y_position+6);
        glVertex2f(x_position+7,y_position+2);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3fv(red);
        glVertex2f(x_position+5,y_position+6);
        glVertex2f(x_position+6,y_position+4);
        glVertex2f(x_position+7,y_position+6);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3fv(white);
        glVertex2f(x_position+6,y_position+4);
        glVertex2f(x_position+7,y_position+6);
        glVertex2f(x_position+8,y_position+4);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3fv(blue);
        glVertex2f(x_position+2,y_position+4);
        glVertex2f(x_position+3,y_position+2);
        glVertex2f(x_position+4,y_position+4);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3fv(blue);
        glVertex2f(x_position+6,y_position+4);
        glVertex2f(x_position+7,y_position+2);
        glVertex2f(x_position+8,y_position+4);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3fv(white);
        glVertex2f(x_position+2,y_position+4);
        glVertex2f(x_position,y_position);
        glVertex2f(x_position+3,y_position);
        glVertex2f(x_position+3,y_position+2);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3fv(white);
        glVertex2f(x_position+8,y_position+4);
        glVertex2f(x_position+10,y_position);
        glVertex2f(x_position+7,y_position);
        glVertex2f(x_position+7,y_position+2);
    glEnd();

     glBegin(GL_POLYGON);
        glColor3fv(red);
        glVertex2f(x_position,y_position);
        glVertex2f(x_position+3,y_position-4);
        glVertex2f(x_position+3,y_position);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3fv(red);
        glVertex2f(x_position+10,y_position);
        glVertex2f(x_position+7,y_position-4);
        glVertex2f(x_position+7,y_position);
    glEnd();

    //plotting the constant hurdles 
    glBegin(GL_POLYGON);
        glColor3fv(white);
        glVertex2f(25,3);
        glVertex2f(28,3);
        glVertex2f(28,6);
        glVertex2f(25,6);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3fv(white);
        glVertex2f(18,21);
        glVertex2f(21,21);
        glVertex2f(21,24);
        glVertex2f(18,24);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(-5,3);
        glVertex2f(-8,3);
        glVertex2f(-8,6);
        glVertex2f(-5,6);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2,21);
        glVertex2f(-1,21);
        glVertex2f(-1,24);
        glVertex2f(2,24);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(2,-3);
        glVertex2f(-1,-3);
        glVertex2f(-1,-6);
        glVertex2f(2,-6);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3fv(white);
        glVertex2f(18,-3);
        glVertex2f(21,-3);
        glVertex2f(21,-6);
        glVertex2f(18,-6);
    glEnd();

    /*glutSwapBuffers swaps the buffers of the current window if double buffered.*/
    //Performs a buffer swap on the layer in use for the current window.
    //An implicit   glFlush is done by glutSwapBuffers before it returns. 
    glutSwapBuffers();
    //note : If the layer in use is not double buffered, glutSwapBuffers has no effect.
}

//function definition
void init()
{
    glClearColor(0.0,0.0,0.0,1.0);
}

//function to reshape 
void reshape(int w,int h)
{
    //glViewport(0,0,(GLsizei)w,(GLsizei)w);

    //glMatrixMode — specify which matrix is the current matrix
    //GL_PROJECTION : Applies subsequent matrix operations to the projection matrix stack.
    // A computer monitor is a 2D surface. A 3D scene rendered by OpenGL must be projected onto the computer screen as a 2D image. GL_PROJECTION matrix is used for this projection transformation. First, it transforms all vertex data from the eye coordinates to the clip coordinates. Then, these clip coordinates are also transformed to the normalized device coordinates (NDC) by dividing with w component of the clip coordinates.
    glMatrixMode(GL_PROJECTION);

    // replace the current matrix with the identity matrix
    glLoadIdentity();
    
    // The gluOrtho2D function defines a 2-D orthographic projection matrix.
    //it defines the leftmost, rightmost, bottommost, topmost coordinates in the current window
    gluOrtho2D(-10.0,30,-10,40);
    //GL_MODELVIEW : Applies subsequent matrix operations to the modelview matrix stack.
    glMatrixMode(GL_MODELVIEW);
}

int i=0;

void Timer(int c)
{
    // glutPostRedisplay marks the current window as needing to be redisplayed.
    // whenever this func is called, the glutDisplay call back function will be called again
    glutPostRedisplay();
    glutTimerFunc(1000/60,Timer,0);  //it calls the timer function again and again with the speed of 60 fps and thus the window gets re displayed with updated coordinates.
    switch(flag)
    {
        case 0:
            if(x_position<15)
            {
                x_position+=0.15;
            }
            else 
            {
                flag=1;
            }
        break;
        case 1:
            if(x_position> -5)
            {
                x_position-=0.15;
            }
            else 
            {
                flag=-1;
            }
        break;
        case -1:
            if(y_position<11)
            {
                y_position+=0.15;
            }
            else 
            {
                flag=2;
            }
        break;
        case 2:
            if(y_position>-5)
            {
                y_position-=0.15;
            }
            else 
            {
                flag=-1;
            }
        break;
    }
}