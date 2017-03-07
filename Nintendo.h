#pragma once
#include "Consolas.h"

using namespace std;

class Nintendo : public Consolas{
	private:

	public:
		Nintendo();
		Nintendo(string, string, string, int, double);
		virtual ~Nintendo ();
};
