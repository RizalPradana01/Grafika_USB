#include <Windows.h>
#ifdef _APPLE_


#else
#include <GL/glut.h>
#endif // _APPLE_
#include<stdio.h>
#include <stdlib.h>
#include <math.h> // Tambahkan header math.h
#include <stdlib.h>


void init(void);
void display(void);

int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("rizal pradana");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100.0, 100.0, -100.0, 100.0);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
    glVertex2f(10 * cos(2 * 3.14159265 * 1 / 6), 10 * sin(2 * 3.14159265 * 1 / 6));
    glVertex2f(10 * cos(2 * 3.14159265 * 2 / 6), 10 * sin(2 * 3.14159265 * 2 / 6));
    glVertex2f(10 * cos(2 * 3.14159265 * 3 / 6), 10 * sin(2 * 3.14159265 * 3 / 6));
    glVertex2f(10 * cos(2 * 3.14159265 * 4 / 6), 10 * sin(2 * 3.14159265 * 4 / 6));
    glVertex2f(10 * cos(2 * 3.14159265 * 5 / 6), 10 * sin(2 * 3.14159265 * 5 / 6));
    glVertex2f(10 * cos(2 * 3.14159265 * 6 / 6), 10 * sin(2 * 3.14159265 * 6 / 6));
    glEnd();

    glutSwapBuffers();

}
    
