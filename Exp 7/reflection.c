#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
//rotation angle theta 
float theta;

//reflection function along x axis
void Reflection_x(float *x,float *y)
{
    *x = -(*x);
}
//reflection function along y axis
void Reflection_y(float *x,float *y)
{
    *x = -(*x);
    *y = -(*y);
}
//reflection function along origin
void Reflection_origin(float *x,float *y)
{
    *y = -(*y);
}
void displayFunc(void)
{
    float x1,y1,x2,y2,x3,y3,x4,y4,x5,y5;
    x1 = 0.2; 
    y1 = 0.2;
    x2 = 0.2;
    y2 = 0.5;
    x3 = 0.4;
    y3 = 0.2;
    x4 = 0.4;
    y4 = 0.5;
    x5 = 0.3;
    y5 = 0.3;

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glVertex2f(x1,y1);
        glVertex2f(x2,y2);
        glVertex2f(x3,y3);
        glVertex2f(x4,y4);
        glVertex2f(x5,y5);
    glEnd();

    //applying transformation (reflction) to the coordinates
    Reflection_origin(&x1,&y1);
    Reflection_origin(&x2,&y2);
    Reflection_origin(&x3,&y3);
    Reflection_origin(&x4,&y4);
    Reflection_origin(&x5,&y5);

    //plotting the ploygon after reflection
    glBegin(GL_POLYGON);
        glVertex2f(x1,y1);
        glVertex2f(x2,y2);
        glVertex2f(x3,y3);
        glVertex2f(x4,y4);
        glVertex2f(x5,y5);
    glEnd();

    glFlush();
}

int main(int argc,char** argv)
{
    //initializing the glut library
    glutInit(&argc,argv);
    //initializing the mode of the display
    glutInitDisplayMode(GLUT_SINGLE);
    //initializing the window position and the size 
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,700);
    //creating and naming the window 
    glutCreateWindow("Reflection (2d Transformation)");
    glutDisplayFunc(displayFunc);
    glutMainLoop();
    return 0;
}


