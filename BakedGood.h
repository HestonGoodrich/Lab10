#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class BakedGood {

	public:

	BakedGood(string description);

	void virtual ToString();
	void virtual DiscountedPrice(int quantity);
	string virtual GetDescription();

};

