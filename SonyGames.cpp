#include "SonyGames.h"

SonyGames::SonyGames()
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

SonyGames::SonyGames(string pNombre, string pAno, string pConsola, int pJugadores, string pGenero, string pEstado, int pSerie, double pPrecio) : Videojuegos(pNombre, pAno, pConsola, pJugadores, pGenero, pEstado, pSerie, pPrecio)
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

SonyGames::~SonyGames()
{

}
