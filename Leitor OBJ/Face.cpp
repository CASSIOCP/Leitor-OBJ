#include "Face.h"

Face::Face(){

}


void addVertices(int v);
void addNormals(int n);
void addTextures(int t);
bool has_vertex(int v);

vector<int> getVertices();
vector<int> getNormals();
vector<int> getTextures();

