#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include<math.h>
int X1,Y1,X2,Y2,L;
void displayFunc()
{
    glClear(GL_COLOR_BUFFER_BIT);

    int dx = X2-X1;
    int dy = Y2-Y1;
    //calculating the length
    if (abs(dx)>abs(dy))
    {
       L = abs(dx);
    }
    else
    {
        L = abs(dy);
    }

    int x = X1;
    int y = Y1;
    float xinc , yinc;
    //calculating the increment factor
    xinc = (float)dx/L;
    yinc = (float)dy/L;
    float xN,yN;
    xN = x+0.5;
    yN = y+0.5;
    glClearColor(1,0,0,0);
    glColor3f(1,1,1);
    //plotting x0 and y0 
    glBegin(GL_POINTS);
       glVertex2i(x,y);
    glEnd();

    for(int i=1;i<=L;i++)
    {
        xN = xN+xinc;
        yN = yN+yinc;
        glBegin(GL_POINTS);
          glVertex2i((int)xN,(int)yN);
        glEnd();
    }
    glFlush();
}
int main(int argc, char** argv)
{
    //1. getting the coordinates x1,y1,x2,y2
    printf("Enter X1: ");
    scanf("%d",&X1);
    printf("Enter Y1: ");
    scanf("%d",&Y1);
    printf("Enter X2: ");
    scanf("%d",&X2);
    printf("Enter Y2: ");
    scanf("%d",&Y2);

    glutInit(&argc, argv);   
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 400);
    glutInitWindowPosition(180, 154);
    glutCreateWindow("DDA Algorithm");
    gluOrtho2D(0,500,0,400);
    glutDisplayFunc(displayFunc);
    glutMainLoop();
    return 0;
}