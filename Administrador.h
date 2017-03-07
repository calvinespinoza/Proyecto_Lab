#pragma once
#include "Usuario.h"
#include <string>

using namespace std;

class Administrador : public Usuario{
	private:
		string contrasena;

	public:
		Administrador ();
		Administrador(string,string);

		string getContrasena();
		void setContrasena(string);

		virtual ~Administrador ();
};
