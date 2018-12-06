#pragma once
#include "BakedGood.h"

class Cake :

	public BakedGood {

public:

	Cake(string description, string frosting);
	
	string frosting;
	double cupcakeBasePrice = 1.95;

};

