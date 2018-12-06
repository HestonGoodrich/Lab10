#pragma once
#include "Cake.h"

class LayerCake :

	public Cake {

public:

	LayerCake(string description, string frosting, int layers);

	void virtual ToString();
	void virtual DiscountedPrice(int quantity);

	string layercakeDescription;
	string layercakeFrosting;
	int layercakeLayers = 1;
	double price = 9.00;
	double creamCheese = 0;
	double multiDiscount = 2;
	double adjustedPrice = 0;

};

