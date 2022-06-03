#include<stdio.h>
#include<GL/glut.h>
int X1,Y1,X2,Y2;

void displayFunc(void)
{
    int dx,dy,x,y;
    //determining dx and dy
    dx = X2-X1;
    dy = Y2-Y1;
    //calculating the inital decision variable (Po)
    int P = (2*dy) - dx;
    x = X1;
    y = Y1;
    //plotting the inital coordinates 
    glBegin(GL_POINTS);
        glVertex2i(x,y);
    glEnd();
    
    for(int i=0;i<dx;i++)
    {
        if(P<0)
        {
            x = x + 1;
            P = P + (2*dy);
        }
        else 
        {
            x = x + 1;
            y = y + 1;
            P = P + (2*dy) - (2*dx);
        }
        //plotting the respective coordinates 
        glBegin(GL_POINTS);
            glVertex2i(x,y);
        glEnd();
    }
    glFlush();
}

int main(int argc, char** argv)
{
    //getting the coordinates 
    printf("Enter X1: ");
    scanf("%d",&X1);
    printf("Enter Y1: ");
    scanf("%d",&Y1);
    printf("Enter X2: ");
    scanf("%d",&X2);
    printf("Enter Y2: ");
    scanf("%d",&Y2);
    //calculating the slope 
    float m = (float)(Y2 - Y1)/(X2 - X1);
    if(m<1)
    {
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_SINGLE);
        glutInitWindowSize(500, 400);
        glutInitWindowPosition(180, 154);
        glutCreateWindow("DDA Algorithm");
        gluOrtho2D(0,500,0,400);
        glutDisplayFunc(displayFunc);
        glutMainLoop();
    }
    else 
    {
        printf("This algorithm does not work for slope greater than 1");
    }
    return 0;
}