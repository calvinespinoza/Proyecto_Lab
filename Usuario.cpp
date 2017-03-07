#include "Usuario.h"
using namespace std;

Usuario::Usuario()
{
	nombre = "";
}

Usuario::Usuario(string pNombre)
{
	nombre = pNombre;
}

string Usuario::getNombre()
{
	return nombre;
}

void Usuario::setNombre(string pNombre)
{
	nombre = pNombre;
}

Usuario::~Usuario()
{

}
