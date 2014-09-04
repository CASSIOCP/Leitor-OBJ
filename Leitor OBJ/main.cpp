#include <iostream>
#include <Windows.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include "Mesh.h"

#define FORM_WIDTH 800
#define FORM_HEIGHT 600
#define FACES 3

//classes
Face *face;
Vertex *v1, *v2, *v3, *v4, *v5, *v6;
Vertex arrayVertex[6];
Mesh *mesh;
vector<Vertex> vec;

using namespace std;

void init(void){
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);

	v1 = new Vertex(0.25, 0.25, 0);
	v2 = new Vertex(0.75, 0.25, 0);
	v3 = new Vertex(0.5, 0.75, 0);
	v4 = new Vertex(0.75, 0.75, 0);
	v5 = new Vertex(0.25, 0.75, 0);
	v6 = new Vertex(1.5, 1, 0);
	arrayVertex[0] = *v1;
	arrayVertex[1] = *v2;
	arrayVertex[2] = *v3;
	arrayVertex[3] = *v4;
	arrayVertex[4] = *v5;
	arrayVertex[5] = *v6;

	vec.push_back(*v1);
	vec.push_back(*v1);


	face = new Face();
	face->vertices.push_back(0);//arrayVertex[1];
	face->vertices.push_back(1);//arrayVertex[2];
	face->vertices.push_back(2);//arrayVertex[3];	,
	face->vertices.push_back(3);//arrayVertex[3];	
	face->vertices.push_back(4);//arrayVertex[3];	
	for (int j = 0; j < 3; j++){
		for (int i = 0; i < 3; i++){
			cout<<face->vertices.at(i)<<endl;
		}
		cout<<endl;
	}
	mesh = new Mesh();
	//Preenchendo os vértices
	mesh->vertices.begin().;

		//push_back(mesh->vertices[0](0.25, 0.25, 0));
	mesh->vertices.push_back[0]. create(0.75, 0.25, 0);
	mesh->vertices[2].create(0.50, 0.75, 0);

	//mesh->vertices.push_back(2);

}

void display(void){
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);
		glColor3f(0, 1, 1.0);
		for (int i = 0; i < 4; i++) {
			glVertex3fv(mesh->vertices[0].coords);
			glVertex3fv(mesh->vertices[1].coords);
			glVertex3fv(mesh->vertices[2].coords);
		}
	glEnd();

	glFlush();
}

void keyboard(unsigned char key, int x, int y){
	if (key == 'q' || key == 'Q'){
		exit(0);
	}
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(FORM_WIDTH, FORM_HEIGHT);
	glutInitWindowPosition(300, 80);
	glutCreateWindow("Leitor de Obj");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}	