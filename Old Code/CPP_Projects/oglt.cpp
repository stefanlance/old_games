#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <cstdio>
#include <cstdlib>
#include <iostream>

void init()
{
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(100, 100);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Hi");
	glutMainLoop();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	init();
	return 0;
}
