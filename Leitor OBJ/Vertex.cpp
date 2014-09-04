#include "Vertex.h"

Vertex::Vertex() {

}

Vertex::Vertex(float posX, float posY, float posZ) {
	coords[0] = posX;
	coords[1] = posY;
	coords[2] = posZ;
}

Vertex::Vertex(float verts[3]){
	coords[0] = verts[0];
	coords[1] = verts[1];
	coords[2] = verts[2];
}

void Vertex::create(float posX, float posY, float posZ) {
	Vertex(posX, posY, posZ);
}

float* Vertex::getCoords(){
	return coords;
}