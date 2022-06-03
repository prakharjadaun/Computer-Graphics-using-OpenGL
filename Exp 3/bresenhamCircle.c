
#include<GL/glut.h>
#include<stdio.h>
//radius of the circle 
int r;
//center of the circle 
int Xc = 500, Yc = 400;
void setPixel(int x,int y)
{
    glBegin(GL_POINTS);
        glVertex2i(x,y);
    glEnd();
    glFlush();
}
void displayFunc(void)
{
    //2. calculating the initial decision parameter D(o)
    int d = 3 - (2*r);
    int x,y;
    //initalising the base values 
    x = 0;
    y = r;
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
        glVertex2i(x,y);
    glEnd();

    while(x<=y)
    {
        if(d<0)
        {
            d = d + (4*x) + 6;
        }
        else 
        {
            d = d + (4*(x-y)) + 10;
            y = y - 1; 
        }
        x = x + 1;
            setPixel(Xc+x,Yc+y);
            setPixel(Xc+x,Yc-y);
            setPixel(Xc+y,Yc+x);
            setPixel(Xc+y,Yc-x);
            setPixel(Xc-x,Yc-y);
            setPixel(Xc-y,Yc-x);
            setPixel(Xc-x,Yc+y);
            setPixel(Xc-y,Yc+x);  
    }
    glFlush();
}
int main(int argc,char** argv)
{
    //1. get the radius of the circle 
    printf("Enter the radius of the circle : ");
    scanf("%d",&r);

    r = abs(r);

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1000,1000);
    glutCreateWindow("Bresenham Circle Algo");
    gluOrtho2D(0,1000,0,1000);
    // init();
    glutDisplayFunc(displayFunc);
    glutMainLoop();
    return 0;

}
