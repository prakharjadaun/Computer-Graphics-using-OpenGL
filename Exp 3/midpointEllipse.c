#include<GL/glut.h>
#include<stdio.h>
#include<math.h>   //fow pow() function 
//radius of major and minor axis 
int Rx, Ry;
//center of the ellipse 
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
    int x,y;
    //initialising the starting point of region 1
    x = 0;
    y = Ry;

    //calculating the inital value of decision parameter in region 1 
    float P1 = pow(Ry,2) - (pow(Rx,2)*Ry) + ((float)(pow(Rx,2)*0.25));
    
    //calculating the dx and dy 
    int dx = 2*pow(Ry,2)*x;
    int dy = 2*pow(Rx,2)*y;

    while(dx<dy)
    {
        setPixel(Xc+x,Yc+y);
        setPixel(Xc+x,Yc-y);
        setPixel(Xc-x,Yc-y);
        setPixel(Xc-x,Yc+y);
        if(P1<0)
        {
            x = x + 1;
            dx = dx + (2*pow(Ry,2));
            P1 = P1 + dx + pow(Ry,2);
        }
        else 
        {
            x = x + 1;
            y = y - 1;
            dx = dx + (2*pow(Ry,2));
            dy = dy - (2*pow(Rx,2));
            P1 = P1 + dx - dy + (pow(Ry,2));
        }
    }

    float P2 = (pow(Ry,2)*pow((x+0.5),2)) + (pow(Rx,2)*pow((y-1),2)) - (pow(Rx,2)*pow(Ry,2));
    
    while(y>=0)
    {
        setPixel(Xc+x,Yc+y);
        setPixel(Xc+x,Yc-y);
        setPixel(Xc-x,Yc-y);
        setPixel(Xc-x,Yc+y);
        if(P2>0)
        {
            y = y - 1;
            dy = dy - (2*pow(Rx,2));
            P2 = P2 - dy + pow(Rx,2);
        }
        else 
        {
            x = x + 1;
            y = y - 1;
            dy = dy - (2*pow(Rx,2));
            dx = dx + (2*pow(Ry,2));
            P2 = P2 + dx - dy + pow(Rx,2);
        }
    }
    glFlush();
}


int main(int argc,char** argv)
{
    //getting the radius of both the axes of the ellipse 
    printf("Enter the radius of major axis (rx) : ");
    scanf("%d",&Rx);
    printf("Enter the radius of minor axis (ry) : ");
    scanf("%d",&Ry);

    Rx = abs(Rx);
    Ry = abs(Ry);
    // I D P S C F M 
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1000,1000);
    glutCreateWindow("Mid point Ellipse drawing algorithm");
    gluOrtho2D(0,1000,0,1000);
    glutDisplayFunc(displayFunc);
    glutMainLoop();
    return 0;
   
}
