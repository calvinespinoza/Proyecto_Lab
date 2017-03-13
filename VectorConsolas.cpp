#include "VectorConsolas.h"

VectorConsolas::VectorConsolas()
{

}

VectorConsolas::VectorConsolas(vector<Consolas*> pConsolas)
{
	consolas = pConsolas;
}

void VectorConsolas::save(ofstream& of)
{
	of.write(&consolas, sizeof(consolas));
}

void VectorConsolas::load(ifstream& inf)
{
	inf.read(&consolas, sizeof(consolas));
}

VectorConsolas::~VectorConsolas()
{

}
