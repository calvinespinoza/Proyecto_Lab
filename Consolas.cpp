#include "Consolas.h"
using namespace std;

Consolas::Consolas()
{
	ano = "";
	modelo = "";
	estado = "";
	serie = 0;
	precio = 0;
}

Consolas::Consolas(string pAno, string pModelo, string pEstado, int pSerie, double pPrecio)
{
	ano = pAno;
	modelo = pModelo;
	estado = pEstado;
	serie = pSerie;
	precio = pPrecio;
}

string Consolas::getAno()
{
	return ano;
}

string Consolas::getModelo()
{
	return modelo;
}

string Consolas::getEstado()
{
	return estado;
}

int Consolas::getSerie()
{
	return serie;
}

double Consolas::getPrecio()
{
	return precio;
}

void Consolas::setAno(string pAno)
{
	ano = pAno;
}

void Consolas::setModelo(string pModelo)
{
	modelo = pModelo;
}

void Consolas::setEstado(string pEstado)
{
	estado = pEstado;
}

void Consolas::setSerie(int pSerie)
{
	serie = pSerie;
}

void Consolas::setPrecio(double pPrecio)
{
	precio = pPrecio;
}

Consolas::~Consolas()
{

}
