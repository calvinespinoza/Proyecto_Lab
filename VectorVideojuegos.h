#pragma once
#include <string>
#include <vector>
#include "Videojuegos.h"

class VectorVideojuegos {
	private:
		vector<Videojuegos*> Videojuegos;

	public:
		VectorVideojuegos ();
		VectorVideojuegos(vector<Videojuegos*>);

		void save(ofstream& of);
	    	void load(ifstream& inf);

		virtual ~VectorVideojuegos ();
};
