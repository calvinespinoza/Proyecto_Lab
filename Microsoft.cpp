#include "Microsoft.h"
using namespace std;

Microsoft::Microsoft()
{
	ano = "";
	modelo = "";
	estado = "";
	serie = 0;
	precio = 0;
}

Microsoft::Microsoft(string pAno, string pModelo, string pEstado, int pSerie, double pPrecio) : Consolas(pAno, pModelo, pEstado, pSerie, pPrecio)
{
	ano = pAno;
	modelo = pModelo;
	estado = pEstado;
	serie = pSerie;
	precio = pPrecio;
}

Microsoft::~Microsoft()
{

}
