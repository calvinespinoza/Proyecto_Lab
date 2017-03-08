#pragma once
#include "Videojuegos.h"

class ElectronicArts : public Videojuegos {
	private:
		/* data */

	public:
		ElectronicArts();
		ElectronicArts(string, string, string, int, string, string, int, double);
		virtual ~ElectronicArts ();
};
