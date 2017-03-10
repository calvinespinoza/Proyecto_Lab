#include "Videojuegos.h"
using namespace std;

Videojuegos::Videojuegos()
{
	nombre = "";
	ano = "";
	consola = "";
	jugadores = 0;
	genero = "";
	estado = "";
	serie = 0;
	precio = 0;
}

Videojuegos::Videojuegos(string pNombre, string pAno, string pConsola, int pJugadores, string pGenero, string pEstado, int pSerie, double pPrecio)
{
	nombre = pNombre;
	ano = pAno;
	consola = pConsola;
	jugadores = pJugadores;
	genero = pGenero;
	estado = pEstado;
	serie = pSerie;
	precio = pPrecio;
}

string Videojuegos::getNombre()
{
	return nombre;
}

string Videojuegos::getAno()
{
	return ano;
}

string Videojuegos::getConsola()
{
	return consola;
}

int Videojuegos::getJugadores()
{
	return jugadores;
}

string Videojuegos::getGenero()
{
	return genero;
}

string Videojuegos::getEstado()
{
	return estado;
}

int Videojuegos::getSerie()
{
	return serie;
}

double Videojuegos::getPrecio()
{
	return precio;
}

void Videojuegos::setNombre(string pNombre)
{
	nombre = pNombre;
}

void Videojuegos::setAno(string pAno)
{
	ano = pAno;
}

void Videojuegos::setConsola(string pConsola)
{
	consola = pConsola;
}

void Videojuegos::setJugadores(int pJugadores)
{
	jugadores = pJugadores;
}

void Videojuegos::setGenero(string pGenero)
{
	genero = pGenero;
}

void Videojuegos::setEstado(string pEstado)
{
	estado = pEstado;
}

void Videojuegos::setSerie(int pSerie)
{
	serie = pSerie;
}

void Videojuegos::setPrecio(double pPrecio)
{
	precio = pPrecio;
}

Videojuegos::~Videojuegos()
{

}
/*
string Videojuegos::toString()const {
	string ss;
	ss = nombre;

	return ss;
}
*/
