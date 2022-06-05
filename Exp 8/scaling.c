#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
//scaling factor 
float scale_x,scale_y,scale_z;

//scaling function
void Scaling(float *x,float *y,float *z)
{
    *x = *x*scale_x;
    *y = *y*scale_y;
    *z = *z*scale_z;
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

    Scaling(&Cd[0][0],&Cd[0][1],&Cd[0][2]);
    Scaling(&Cd[1][0],&Cd[1][1],&Cd[1][2]);
    Scaling(&Cd[2][0],&Cd[2][1],&Cd[2][2]);
    Scaling(&Cd[3][0],&Cd[3][1],&Cd[3][2]);
    Scaling(&Cd[4][0],&Cd[4][1],&Cd[4][2]);
    Scaling(&Cd[5][0],&Cd[5][1],&Cd[5][2]);
    Scaling(&Cd[6][0],&Cd[6][1],&Cd[6][2]);
    Scaling(&Cd[7][0],&Cd[7][1],&Cd[7][2]);
    Scaling(&Cd[8][0],&Cd[8][1],&Cd[8][2]);
    Scaling(&Cd[9][0],&Cd[9][1],&Cd[9][2]);

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
    //getting the scaling factors from the user 
    printf("Enter the scaling factor for x coordinates : ");
    scanf("%f",&scale_x);
    printf("Enter the scaling factor for y coordinates : ");
    scanf("%f",&scale_y);
    printf("Enter the scaling factor for z coordinates : ");
    scanf("%f",&scale_z);
    //initializing the glut library
    glutInit(&argc,argv);
    //initializing the mode of the display
    glutInitDisplayMode(GLUT_SINGLE);
    //initializing the window position and the size 
    glutInitWindowPosition(30,30);
    glutInitWindowSize(600,700);
    //creating and naming the window 
    glutCreateWindow("Scaling (3d Transformation)");
    glutDisplayFunc(displayFunc);
    glutMainLoop();
    return 0;
}