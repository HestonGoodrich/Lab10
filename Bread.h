#pragma once
#include "BakedGood.h"

class Bread :

	public BakedGood {

public:

	Bread(string description);

	void virtual ToString();
	void virtual DiscountedPrice(int quantity);
	string virtual GetDescription();

	string breadType;
	double price = 4.5;
	double adjustedPrice = 0;

};