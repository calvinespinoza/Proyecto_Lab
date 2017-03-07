#include "Nintendo.h"
using namespace std;

Nintendo::Nintendo()
{
	ano = "";
	modelo = "";
	estado = "";
	serie = 0;
	precio = 0;
}

Nintendo::Nintendo(string pAno, string pModelo, string pEstado, int pSerie, double pPrecio) : Consolas(pAno, pModelo, pEstado, pSerie, pPrecio)
{
	ano = pAno;
	modelo = pModelo;
	estado = pEstado;
	serie = pSerie;
	precio = pPrecio;
}

Nintendo::~Nintendo()
{

}
