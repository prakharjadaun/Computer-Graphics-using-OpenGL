#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
//scaling factor 
float scale_x,scale_y;

//scaling function
void Scaling(float *x,float *y)
{
    float a = *x;
    float b = *y;
    *x = a*scale_x;
    *y = b*scale_y;
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

    //applying transformation (Scaling) to the coordinates
    Scaling(&x1,&y1);
    Scaling(&x2,&y2);
    Scaling(&x3,&y3);
    Scaling(&x4,&y4);
    Scaling(&x5,&y5);


    //plotting the ploygon after rotation
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
    //getting the scaling factors from the user 
    printf("Enter the scaling factor for x coordinates : ");
    scanf("%f",&scale_x);
    printf("Enter the scaling factor for y coordinates : ");
    scanf("%f",&scale_y);
    //initializing the glut library
    glutInit(&argc,argv);
    //initializing the mode of the display
    glutInitDisplayMode(GLUT_SINGLE);
    //initializing the window position and the size 
    glutInitWindowPosition(30,30);
    glutInitWindowSize(600,700);
    //creating and naming the window 
    glutCreateWindow("Scaling (2d Transformation)");
    glutDisplayFunc(displayFunc);
    glutMainLoop();
    return 0;
}


