/**
 * @file CgBasics.c
 * @author Prakhar Jadaun
 * @brief 
 * @version 0.1
 * @date 2022-02-07
 * 
 * @copyright Copyright (c) 2022
 * Typical OpenGL structure 
 * 
 * 1. Open and configure a window
 * 2. Initialise GL state 
 * 3. Register callback functions
 * Callback Functions : A callback function is a function that is passed as an argument to another function, to be “called back” at a later time. A function that accepts other functions as arguments is called a higher-order function, which contains the logic for when the callback function gets executed
 * 4. Enter infinite event processing loop
 * 
 * Doubts : 
 * 1. Can we call glutDisplayFunc() more than one times ?
 * 2. gluOrtho2D() batao :) 
 */

// https://www.opengl.org/resources/libraries/glut/spec3/node12.html


// GLfloat -> f (4 byte)
// GLint -> i  (4 byte)

//---------------
// glVertex3dv (Must appear between glBegin and glEnd)
// gl -> library prefix 
// Vertex -> Root command 
// 3 -> number of components 
// d -> denoted the data type (other data types -> i, f, d, s, ub, b,us)
// v -> whether the components are vector or not 

//---------------
// Event Loop : A programming structure that continually tests for external events and calls the appropriate routines to handle them
// example : The program defines a display callback function named display
//  Every glut program must have a display callback
//  The display callback is executed whenever OpenGL decides the display must be refreshed,for example when the window is opened 
//  The main function ends with the program entering an event loop

//---------------
// compilation in unix/linux 
//  Compile with –lglut –lGLU –lGL
// loader flags 
//  May have to add –l flag for X libraries
//  export DISPLAY=0:0 
//  -lm for math.h header file 


#include<GL/glut.h>  //to include all the functions defined in the glut.h file (Graphics library utility toolkit )

void init(void);   //function declaration
void displayFunc(void); //display function declaration

int main(int argc, char** argv)  //for command line input 
{
    //initialises the glut library (if glut is not initialised, then the program will be terminated)
    //it also process the command line options
    glutInit(&argc,argv);      // ./a.out -> argc = 1

    int mode = GLUT_SINGLE | GLUT_RGB;  //mode of the display window
    glutInitDisplayMode(mode);      //initialises the mode of the display

    //initialises the window position and the size 
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1000,1000);

    //creating and naming the window 
    glutCreateWindow("Practice window"); //we passes the title of the window 

    //contains the OpenGL initialisation code 
    init(); //this is not under glut library (user defined)

    //function sets up a two-dimensional orthographic viewing region
    //gluOrtho2D(0,1000,0,1000);  //left, right, top, bottom 

    //glutDisplayFunc -> callback function 
    //callback function -> A callback function is a function that is passed as an argument to another function, to be “called back” at a later time. A function that accepts other functions as arguments is called a higher-order function, which contains the logic for when the callback function gets executed
    //sets the display callback function for current window
    glutDisplayFunc(displayFunc);

    glutMainLoop();  //infinite event loop 
}

void init(void)
{
    glClearColor(0,0,0,1);   //red, green, blue, alpha (alpha = 1 -> opaque, if 0 -> transparent)

    // GL_COLOR_BUFFER_BIT
    // The buffers currently enabled for color writing.
    glClear(GL_COLOR_BUFFER_BIT); 
}

void displayFunc(void)
{
    // red -> The new red value for the current color.
    // green -> The new green value for the current color.
    // blue -> The new blue value for the current color.
    glColor3f(1,1,1);  //white

    glBegin(GL_POLYGON);  //OpenGL primitive passed as parameter 
        glVertex2f(-5,0);
        glVertex2f(0,0);
        glVertex2f(0,5);
        glVertex2f(-5,5);
    glEnd();
    glFlush();    
}