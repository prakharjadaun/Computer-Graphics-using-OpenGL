#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
//reflection function along XZ axis
void Reflection_XZ(float *y)
{
    *y = -(*y);
}
//reflection function along XY plane
void Reflection_XY(float *z)
{
    *z = -(*z);
}
//reflection function along YZ plane
void Reflection_YZ(float *x)
{
    *x = -(*x);
}
void displayFunc(void)
{
    float Cd[10][3] = 
    {
        {0.2,0.2,0.0},
        {0.2,0.5,0.0},
        {0.4,0.2,0.0},
        {0.4,0.5,0.0},
        {0.3,0.3,0.0},
        {0.3,0.3,-0.5},
        {0.3,0.6,-0.5},
        {0.5,0.3,-0.5},
        {0.5,0.6,-0.5},
        {0.4,0.4,-0.5}
    };

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    //bottom 
    glColor3f(0.3,0.2,0.6);
    glVertex3fv(Cd[0]);
    glVertex3fv(Cd[2]);
    glVertex3fv(Cd[7]);
    glVertex3fv(Cd[5]);
    glEnd();


    glBegin(GL_QUADS);
    //left 
    glColor3f(0.5,0.1,0.7);
    glVertex3fv(Cd[0]);
    glVertex3fv(Cd[1]);
    glVertex3fv(Cd[6]);
    glVertex3fv(Cd[5]);
    glEnd();
    
    glBegin(GL_POLYGON);
    //back 
    glColor3f(0.4,0.7,0.1);
    glVertex3fv(Cd[5]);
    glVertex3fv(Cd[7]);
    glVertex3fv(Cd[8]);
    glVertex3fv(Cd[9]);
    glVertex3fv(Cd[6]);
    glEnd();
    
    glBegin(GL_QUADS);
    //upper left 
    glColor3f(0.1,0.2,0.9);
    glVertex3fv(Cd[1]);
    glVertex3fv(Cd[6]);
    glVertex3fv(Cd[9]);
    glVertex3fv(Cd[4]);
    glEnd();
    glFlush();

    glBegin(GL_QUADS);
    //upper right 
    glColor3f(0.8,0.9,0.3);
    glVertex3fv(Cd[8]);
    glVertex3fv(Cd[9]);
    glVertex3fv(Cd[4]);
    glVertex3fv(Cd[3]);
    glEnd();

    glBegin(GL_QUADS);
    //right 
    glColor3f(0.3,0.3,0.8);
    glVertex3fv(Cd[3]);
    glVertex3fv(Cd[2]);
    glVertex3fv(Cd[7]);
    glVertex3fv(Cd[8]);
    glEnd();
    
    glBegin(GL_POLYGON);
    //front 
    glColor3f(0.6,0.6,0.3);
    glVertex3fv(Cd[0]);
    glVertex3fv(Cd[1]);
    glVertex3fv(Cd[2]);
    glVertex3fv(Cd[3]);
    glVertex3fv(Cd[4]);
    glEnd();
    glFlush();

    Reflection_YZ(&Cd[0][0]);
    Reflection_YZ(&Cd[1][0]);
    Reflection_YZ(&Cd[2][0]);
    Reflection_YZ(&Cd[3][0]);
    Reflection_YZ(&Cd[4][0]);
    Reflection_YZ(&Cd[5][0]);
    Reflection_YZ(&Cd[6][0]);
    Reflection_YZ(&Cd[7][0]);
    Reflection_YZ(&Cd[8][0]);
    Reflection_YZ(&Cd[9][0]);

    glBegin(GL_POLYGON);
    //bottom 
    glColor3f(0.3,0.2,0.6);
    glVertex3fv(Cd[0]);
    glVertex3fv(Cd[2]);
    glVertex3fv(Cd[7]);
    glVertex3fv(Cd[5]);
    glEnd();


    glBegin(GL_QUADS);
    //left 
    glColor3f(0.5,0.1,0.7);
    glVertex3fv(Cd[0]);
    glVertex3fv(Cd[1]);
    glVertex3fv(Cd[6]);
    glVertex3fv(Cd[5]);
    glEnd();
    
    glBegin(GL_POLYGON);
    //back 
    glColor3f(0.4,0.7,0.1);
    glVertex3fv(Cd[5]);
    glVertex3fv(Cd[7]);
    glVertex3fv(Cd[8]);
    glVertex3fv(Cd[9]);
    glVertex3fv(Cd[6]);
    glEnd();
    
    glBegin(GL_QUADS);
    //upper left 
    glColor3f(0.1,0.2,0.9);
    glVertex3fv(Cd[1]);
    glVertex3fv(Cd[6]);
    glVertex3fv(Cd[9]);
    glVertex3fv(Cd[4]);
    glEnd();
    glFlush();

    glBegin(GL_QUADS);
    //upper right 
    glColor3f(0.8,0.9,0.3);
    glVertex3fv(Cd[8]);
    glVertex3fv(Cd[9]);
    glVertex3fv(Cd[4]);
    glVertex3fv(Cd[3]);
    glEnd();

    glBegin(GL_QUADS);
    //right 
    glColor3f(0.3,0.3,0.8);
    glVertex3fv(Cd[3]);
    glVertex3fv(Cd[2]);
    glVertex3fv(Cd[7]);
    glVertex3fv(Cd[8]);
    glEnd();
    
    glBegin(GL_POLYGON);
    //front 
    glColor3f(0.6,0.6,0.3);
    glVertex3fv(Cd[0]);
    glVertex3fv(Cd[1]);
    glVertex3fv(Cd[2]);
    glVertex3fv(Cd[3]);
    glVertex3fv(Cd[4]);
    glEnd();
    glFlush();

}

int main(int argc,char** argv)
{
    printf("Prakhar Jadaun");
    printf("\nSAP ID : 500083429\n");
    //initializing the glut library
    glutInit(&argc,argv);
    //initializing the mode of the display
    glutInitDisplayMode(GLUT_SINGLE);
    //initializing the window position and the size 
    glutInitWindowPosition(30,30);
    glutInitWindowSize(600,700);
    //creating and naming the window 
    glutCreateWindow("Reflection (3d Transformation)");
    glutDisplayFunc(displayFunc);
    glutMainLoop();
    return 0;
}