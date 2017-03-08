#pragma once
#include "Videojuegos.h"

class Ubisoft : public Videojuegos {
	private:
		/* data */

	public:
		Ubisoft();
		Ubisoft(string, string, string, int, string, string, int, double);
		virtual ~Ubisoft ();
};
