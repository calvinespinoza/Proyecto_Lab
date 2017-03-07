#pragma once
#include <string>

using namespace std;

class Venta {
	private:
		string nombreCliente;
		Consolas* consolas;
		Videojuegos* juegos;
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
		void setSubtotal(double)

		~Venta();
};
