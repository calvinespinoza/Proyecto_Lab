#pragma once
#include <string>

using namespace std;

class Videojuegos {
	protected:
		string nombre;
		string ano;
		string consola;
		int jugadores;
		string genero;
		string estado;
		int serie;
		double precio;

	public:
		Videojuegos();
		Videojuegos(string, string, string, int, string, string, int, double);

		string getNombre();
		string getAno();
		string getConsola();
		int getJugadores();
		string getGenero();
		string getEstado();
		int getSerie();
		double getPrecio();

		void setNombre(string);
		void setAno(string);
		void setConsola(string);
		void setJugadores(int);
		void setGenero(string);
		void setEstado(string);
		void setSerie(int);
		void setPrecio(double);

		virtual ~Videojuegos ();
		//string toString()const;
};
