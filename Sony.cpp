#include "Sony.h"
using namespace std;

Sony::Sony()
{
	ano = "";
	modelo = "";
	estado = "";
	serie = 0;
	precio = 0;
}

Sony::Sony(string pAno, string pModelo, string pEstado, int pSerie, double pPrecio) : Consolas(pAno, pModelo, pEstado, pSerie, pPrecio)
{
	ano = pAno;
	modelo = pModelo;
	estado = pEstado;
	serie = pSerie;
	precio = pPrecio;
}

Sony::~Sony()
{

}
