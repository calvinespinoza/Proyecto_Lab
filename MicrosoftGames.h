#pragma once
#include "Videojuegos.h"

class MicrosoftGames : public Videojuegos {
	private:
		/* data */

	public:
		MicrosoftGames();
		MicrosoftGames(string, string, string, int, string, string, int, double);
		virtual ~MicrosoftGames ();
};
