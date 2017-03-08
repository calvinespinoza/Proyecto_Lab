#pragma once
#include "Videojuegos.h"

class Bandai : public Videojuegos {
	private:
		/* data */

	public:
		Bandai();
		Bandai(string, string, string, int, string, string, int, double);
		virtual ~Bandai ();
};
