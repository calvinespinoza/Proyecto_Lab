lude "VectorVideojuegos.h"

VectorVideojuegos::VectorVideojuegos()
{

}

VectorVideojuegos::VectorVideojuegos(vector<Videojuegos*> pVideojuegos)
{
	videojuegos = pVideojuegos;
}

void VectorVideojuegos::save(ofstream& of)
{
	of.write(&videojuegos, sizeof(videojuegos));
}

void VectorVideojuegos::load(ifstream& inf)
{
	inf.read(&videojuegos, sizeof(videojuegos));
}

VectorVideojuegos::~VectorVideojuegos()
{

}
