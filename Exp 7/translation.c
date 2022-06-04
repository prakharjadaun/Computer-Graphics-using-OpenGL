#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
//translation coordinates 
float translate_x,translate_y;

//translation function
void Translation(float *x,float *y)
{
    float a = *x;
    float b = *y;
    *x = a+ translate_x;
    *y = b+ translate_y;
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

    //applying transformation (translation) to the coordinates
    Translation(&x1,&y1);
    Translation(&x2,&y2);
    Translation(&x3,&y3);
    Translation(&x4,&y4);
    Translation(&x5,&y5);


    //plotting the ploygon after translation
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
    //getting the translation coordinates from the user 
    printf("Enter the translation factor for x coordinates : ");
    scanf("%f",&translate_x);
    printf("Enter the translation factor for y coordinates : ");
    scanf("%f",&translate_y);
    //initializing the glut library
    glutInit(&argc,argv);
    //initializing the mode of the display
    glutInitDisplayMode(GLUT_SINGLE);
    //initializing the window position and the size 
    glutInitWindowPosition(30,30);
    glutInitWindowSize(600,700);
    //creating and naming the window 
    glutCreateWindow("Translation (2d Transformation)");
    glutDisplayFunc(displayFunc);
    glutMainLoop();
    return 0;
}


