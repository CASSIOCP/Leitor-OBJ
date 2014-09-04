#include "Group.h"

class Mesh{
	public:
		Mesh();		
		Group group;
		vector<TextureMapping> tms;
		vector<Vertex> vertices;		
		vector<Normals> normals;
};