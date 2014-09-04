#include "Vertex.h"
#include "TextureMapping.h"
#include "Normals.h"
#include <vector>

using namespace std;

class Face {
	private:		
		bool visible;
		vector<int> vertices;
		vector<int> textures;
		vector<int> normals;
	public:
		Face();
		
		void addVertices(int v);
		void addNormals(int n);
		void addTextures(int t);
		bool has_vertex(int v);

		vector<int> getVertices();
		vector<int> getNormals();
		vector<int> getTextures();

};
