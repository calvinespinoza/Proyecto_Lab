#pragma once
#include <string>

using namespace std;

class Consolas {
	protected:
        	string ano;
		string modelo;
		string estado;
		int serie;
		double precio;

        public:
		//virtual:
        	Consolas();
		Consolas(string, string, string, int, double);

		//Mutadores
		string getAno();
		string getModelo();
		string getEstado();
		int getSerie();
		double getPrecio();
		void setAno(string);
		void setModelo(string);
		void setEstado(string);
		void setSerie(int);
		void setPrecio(double);

        	virtual ~Consolas ();
};
