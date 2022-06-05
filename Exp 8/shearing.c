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

void Shearing_Z(float *z)
{
    *z = *z + shear_val;
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

    Shearing_X(&Cd[0][0]);
    Shearing_X(&Cd[1][0]);
    Shearing_X(&Cd[2][0]);
    Shearing_X(&Cd[3][0]);
    Shearing_X(&Cd[4][0]);
    Shearing_X(&Cd[5][0]);
    Shearing_X(&Cd[6][0]);
    Shearing_X(&Cd[7][0]);
    Shearing_X(&Cd[8][0]);
    Shearing_X(&Cd[9][0]);

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
    glutCreateWindow("Shearing (3d Transformation)");
    glutDisplayFunc(displayFunc);
    glutMainLoop();
    return 0;
}