#pragma once
#include "Videojuegos.h"

class Konami : public Videojuegos {
	private:
		/* data */

	public:
		Konami();
		Konami(string, string, string, int, string, string, int, double);
		virtual ~Konami ();
};
