#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
//translation coordinates 
float translate_x,translate_y,translate_z;

//translate function
void Translation(float *x,float *y,float *z)
{
    *x = *x + translate_x;
    *y = *y + translate_y;
    *z = *z + translate_z;
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

    Translation(&Cd[0][0],&Cd[0][1],&Cd[0][2]);
    Translation(&Cd[1][0],&Cd[1][1],&Cd[1][2]);
    Translation(&Cd[2][0],&Cd[2][1],&Cd[2][2]);
    Translation(&Cd[3][0],&Cd[3][1],&Cd[3][2]);
    Translation(&Cd[4][0],&Cd[4][1],&Cd[4][2]);
    Translation(&Cd[5][0],&Cd[5][1],&Cd[5][2]);
    Translation(&Cd[6][0],&Cd[6][1],&Cd[6][2]);
    Translation(&Cd[7][0],&Cd[7][1],&Cd[7][2]);
    Translation(&Cd[8][0],&Cd[8][1],&Cd[8][2]);
    Translation(&Cd[9][0],&Cd[9][1],&Cd[9][2]);

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
    // getting the translation coordinates from the user 
    printf("Enter the translation factor for x coordinates : ");
    scanf("%f",&translate_x);
    printf("Enter the translation factor for y coordinates : ");
    scanf("%f",&translate_y);
    printf("Enter the translation factor for z coordinates : ");
    scanf("%f",&translate_z);
    //initializing the glut library
    glutInit(&argc,argv);
    //initializing the mode of the display
    glutInitDisplayMode(GLUT_SINGLE);
    //initializing the window position and the size 
    glutInitWindowPosition(30,30);
    glutInitWindowSize(600,700);
    //creating and naming the window 
    glutCreateWindow("Translation (3d Transformation)");
    glutDisplayFunc(displayFunc);
    glutMainLoop();
    return 0;
}