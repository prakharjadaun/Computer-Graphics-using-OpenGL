#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
//rotation angle theta 
float theta;

//rotation function about z axis
void Rotation3D(float *x,float *y)
{
    float a = *x;
    float b = *y;
    *x = ((a*cos(theta)) - (b*sin(theta)));
    *y = ((a*sin(theta)) + (b*cos(theta))); 
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
    glColor3f(0.77,0.38,0.06);
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
    glColor3f(0.0,1.0,0.16);
    glVertex3fv(Cd[0]);
    glVertex3fv(Cd[1]);
    glVertex3fv(Cd[2]);
    glVertex3fv(Cd[3]);
    glVertex3fv(Cd[4]);
    glEnd();
    glFlush();

    Rotation3D(&Cd[0][0],&Cd[0][1]);
    Rotation3D(&Cd[1][0],&Cd[1][1]);
    Rotation3D(&Cd[2][0],&Cd[2][1]);
    Rotation3D(&Cd[3][0],&Cd[3][1]);
    Rotation3D(&Cd[4][0],&Cd[4][1]);
    Rotation3D(&Cd[5][0],&Cd[5][1]);
    Rotation3D(&Cd[6][0],&Cd[6][1]);
    Rotation3D(&Cd[7][0],&Cd[7][1]);
    Rotation3D(&Cd[8][0],&Cd[8][1]);
    Rotation3D(&Cd[9][0],&Cd[9][1]);

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
    glColor3f(0.0,1.0,0.16);
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
    //getting th rotation angle from the user 
    printf("Enter the rotation angle (theta) : ");
    scanf("%f",&theta);
    theta=(3.14*theta)/180;
    //initializing the glut library
    glutInit(&argc,argv);
    //initializing the mode of the display
    glutInitDisplayMode(GLUT_SINGLE);
    //initializing the window position and the size 
    glutInitWindowPosition(30,30);
    glutInitWindowSize(600,700);
    //creating and naming the window 
    glutCreateWindow("Rotation (3d Transformation)");
    glutDisplayFunc(displayFunc);
    glutMainLoop();
    return 0;
}