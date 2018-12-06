#pragma once
#include "Cake.h"

class CupCake :

	public Cake {

public:

	CupCake(string description, string frosting, string sprinkles);

	string sprinkles;

	void virtual ToString();
	void virtual DiscountedPrice(int quantity);

	string cupcakeDescription;
	string cupcakeFrosting;
	string cupcakeSprinkles;

};

