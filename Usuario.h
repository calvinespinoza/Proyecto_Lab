#pragma once
#include <string>

using namespace std;

class Usuario {
	protected:
		string nombre;
		bool admin;

	public:
		Usuario();
		Usuario(string);

		virtual string getNombre();
		bool getAdmin();
		void setNombre(string);

		virtual ~Usuario ();
};
