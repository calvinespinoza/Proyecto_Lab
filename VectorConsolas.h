#pragma once
#include <string>
#include <vector>
#include <fstream>
#include "Consolas.h"

class VectorConsolas {
	private:
		vector<Consolas*> consolas;

	public:
		VectorConsolas ();
		VectorConsolas(vector<Consolas*>);

		void save(ofstream& of);
	    	void load(ifstream& inf);

		virtual ~VectorConsolas ();
};
