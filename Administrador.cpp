#include "Administrador.h"
using namespace std;

Administrador::Administrador()
{
	nombre = "";
	contrasena = "";
}

Administrador::Administrador(string pNombre, string pContrasena) : Usuario(pNombre)
{
	nombre = pNombre;
	contrasena = pContrasena;
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
