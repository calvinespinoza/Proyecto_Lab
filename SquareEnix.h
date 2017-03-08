#pragma once
#include "Videojuegos.h"

class SquareEnix : public Videojuegos {
	private:
		/* data */

	public:
		SquareEnix();
		SquareEnix(string, string, string, int, string, string, int, double);
		virtual ~SquareEnix ();
};
