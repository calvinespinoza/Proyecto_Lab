#pragma once
#include "Videojuegos.h"

class SonyGames : public Videojuegos {
	private:
		/* data */

	public:
		SonyGames();
		SonyGames(string, string, string, int, string, string, int, double);
		virtual ~SonyGames ();
};
