#pragma once
#include "Videojuegos.h"

class NintendoGames : public Videojuegos {
	private:
		/* data */

	public:
		NintendoGames();
		NintendoGames(string, string, string, int, string, string, int, double);
		virtual ~NintendoGames ();
};
