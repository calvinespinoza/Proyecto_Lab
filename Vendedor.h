#pragma once
#include "Usuario.h"
#include <string>

using namespace std;

class Vendedor : public Usuario {
	private:
		string horaEntrada;
		string horaSalida;

	public:
		Vendedor();
		Vendedor(string, string, string);

		string getHoraEntrada();
		string getHoraSalida();
		void setHoraEntrada(string);
		void setHoraSalida(string);

		virtual ~Vendedor ();
};
