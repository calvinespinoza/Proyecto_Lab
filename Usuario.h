#pragma once
#include <string>

using namespace std;

class Usuario {
	protected:
		string nombre;

	public:
		Usuario();
		Usuario(string);

		string getNombre();
		void setNombre(string);

		virtual ~Usuario ();
};
