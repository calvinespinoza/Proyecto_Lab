#pragma once
#include "Videojuegos.h"

class Sega : public Videojuegos {
	private:
		/* data */

	public:
		Sega();
		Sega(string, string, string, int, string, string, int, double);
		virtual ~Sega ();
};
