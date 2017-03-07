#pragma once
#include "Consolas.h"

using namespace std;

class Microsoft : public Consolas{
	private:

	public:
		Microsoft();
		Microsoft(string, string, string, int, double);
		virtual ~Microsoft ();
};
