#include<GL/glut.h>  //to import all the functions defined in the glut.h file
#include<stdio.h>    //for standard input and output
#include<math.h>
//radius of the circle s
int r; 
//center of the circle 
int Xc = 500, Yc = 800;

void displayFunc(void)
{
    glClear(GL_COLOR_BUFFER_BIT); 
    float theta = 0;
    float theta_end=(360);
    float x=0,y=0;
    glBegin(GL_POINTS);
    while(theta<=theta_end)
    {
        x = Xc + (r*cos(theta));
        y = Yc + (r*sin(theta));
            glVertex2f(x,y);  
        theta = theta + 0.001;
    }
    glEnd();
    glFlush();
    
}

int main(int argc,char** argv)
{
    //1. getting the radius of the circle 
    printf("Enter the radius of the circle : ");
    scanf("%d",&r);
    
    r = abs(r);
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1000,1000);
    glutCreateWindow("Polar Algorithm for circle drawing");
    gluOrtho2D(1000,0,0,1000);
    glutDisplayFunc(displayFunc);
    glutMainLoop();
    return 0;
}


