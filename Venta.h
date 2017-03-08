#pragma once
#include <string>
#include <vector>
#include "Consolas.h"
#include "Videojuegos.h"

using namespace std;

class Venta {
	private:
		string nombreCliente;
		vector<Consolas*> consolas;
		vector<Videojuegos*> juegos;
		string horaFinal;
		string nombreUsuario;
		double subtotal;

	public:
		Venta();
		Venta(string, string, string, double);

		string getNombreCliente();
		string getHoraFinal();
		string getNombreUsuario();
		double getSubtotal();

		void setNombreCliente(string);
		void setHoraFinal(string);
		void setNombreUsuario(string);
		void setSubtotal(double);

		~Venta();
};
