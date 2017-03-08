#include "Ubisoft.h"

Ubisoft::Ubisoft()
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

Ubisoft::Ubisoft(string pNombre, string pAno, string pConsola, int pJugadores, string pGenero, string pEstado, int pSerie, double pPrecio) : Videojuegos(pNombre, pAno, pConsola, pJugadores, pGenero, pEstado, pSerie, pPrecio)
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

Ubisoft::~Ubisoft()
{

}
