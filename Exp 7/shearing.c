#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
//shearing value
float shear_val;

//shearing function for x
void Shearing_X(float *x)
{
    *x = *x+shear_val;
}
//shearing function for y
void Shearing_Y(float *y)
{
    *y = *y+shear_val;
}

void displayFunc(void)
{
    float x1,y1,x2,y2,x3,y3,x4,y4,x5,y5;
    x1 = 0.2; 
    y1 = 0.2;
    x2 = 0.2;
    y2 =0.5;
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

    //shearing x 
    Shearing_X(&x1); 
    Shearing_X(&x2); 
    Shearing_X(&x3); 
    Shearing_X(&x4); 
    Shearing_X(&x5); 

    //plotting the ploygon after shearing x
    glBegin(GL_POLYGON);
        glVertex2f(x1,y1);
        glVertex2f(x2,y2);
        glVertex2f(x3,y3);
        glVertex2f(x4,y4);
        glVertex2f(x5,y5);
    glEnd();

    //shearing y
    Shearing_Y(&y1); 
    Shearing_Y(&y2); 
    Shearing_Y(&y3); 
    Shearing_Y(&y4); 
    Shearing_Y(&y5); 

    //plotting the ploygon after shearing y
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
    //getting the shearing value from the user 
    printf("Enter the shearing value : ");
    scanf("%f",&shear_val);
    //initializing the glut library
    glutInit(&argc,argv);
    //initializing the mode of the display
    glutInitDisplayMode(GLUT_SINGLE);
    //initializing the window position and the size 
    glutInitWindowPosition(30,30);
    glutInitWindowSize(600,700);
    //creating and naming the window 
    glutCreateWindow("Shearing (2d Transformation)");
    glutDisplayFunc(displayFunc);
    glutMainLoop();
    return 0;
}


