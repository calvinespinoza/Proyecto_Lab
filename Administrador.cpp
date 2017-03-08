#include "Administrador.h"
using namespace std;

Administrador::Administrador()
{
	nombre = "";
	contrasena = "";
	admin = true;
}

Administrador::Administrador(string pNombre, string pContrasena) : Usuario(pNombre)
{
	nombre = pNombre;
	contrasena = pContrasena;
	admin = true;
}

string Administrador::getContrasena()
{
	return contrasena;
}

void Administrador::setContrasena(string pContrasena)
{
	contrasena = pContrasena;
}

Administrador::~Administrador()
{

}
