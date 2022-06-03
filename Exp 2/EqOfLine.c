// #include <GL/glut.h>
// #include<stdio.h>
//  float X1, Y1, X2, Y2;
// void displayFunc()
// {
//     glClearColor(1, 0, 0, 0);
//     glColor3f(1, 1, 1);

//     // X1 = -0.3;
//     // Y1 = -0.5;
//     // X2 = 0.2;
//     // Y2 = 0.5;

//     float m, c, y;
//     m = (Y2 - Y1) / (X2 - X1);
//     c = Y1 - m * X1;
//     glBegin(GL_POINTS);
//     for (float x = X1; x <= X2; x = x + 0.002)
//     {
//         y = m * x + c;
//         glVertex2f(x, y);
//     }
//     glEnd();
//     printf("m=%f\n", m);
//     glFlush();
// }

// int main(int argc, char **argv)
// {
//     printf("Enter X1: ");
//     scanf("%f",&X1);
//     printf("Enter Y1: ");
//     scanf("%f",&Y1);
//     printf("Enter X2: ");
//     scanf("%f",&X2);
//     printf("Enter Y2: ");
//     scanf("%f",&Y2);
//     glutInit(&argc, argv);
//     glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//     glutInitWindowSize(500, 400);
//     glutInitWindowPosition(180, 154);
//     glutCreateWindow("Line drawing using Equation of Line");
//     glutDisplayFunc(displayFunc);
//     glutMainLoop();
//     return 0;
// }

#include <GL/glut.h>

#include <stdio.h>

#include <math.h>

void display() {

   glClearColor(1, 0, 0, 0);

   glColor3f(1, 1, 1);

   glClear(GL_COLOR_BUFFER_BIT);
   float x1 = -0.3, y1 = -0.5;
   float x2 = 0.2, y2 = 0.5;
   float m, c, y;
   m = (y2 - y1) / (x2 - x1);
   c = y1 - m * x1;
   glBegin(GL_POINTS);

   for (float x = x1; x <= x2; x = x + 0.002) {

       y = m * x + c;

       glVertex2f(x, y);

   }

   glEnd();

   printf("m=%f\n", m);

   glFlush();

}

int main(int argc, char** argv) {

   glutInit(&argc, argv);

   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

   glutInitWindowSize(500, 400);

   glutInitWindowPosition(180, 154);

   glutCreateWindow("Equation of line");

   glutDisplayFunc(display);

   glutMainLoop();

   return 0;

}