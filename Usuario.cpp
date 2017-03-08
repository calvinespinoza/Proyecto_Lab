#include "Usuario.h"
using namespace std;

Usuario::Usuario()
{
	nombre = "";
	admin = false;
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

bool Usuario::getAdmin()
{
	return admin;
}

Usuario::~Usuario()
{

}
