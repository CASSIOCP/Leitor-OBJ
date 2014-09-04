class Vertex {
	private:
		float coords[3];
	public:	
		Vertex();
		Vertex(float *verts);
		Vertex(float posX, float posY, float posZ);
		
		float *getCoords();
		void create(float posX, float posY, float posZ);
};

