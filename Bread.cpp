#include "Bread.h"

Bread::Bread(string description)
	: BakedGood(description) {
	breadType = description;
}

void Bread::ToString() {
	cout << breadType << " bread ($" << fixed << setprecision(2) << price << ")" << endl;
}

void Bread::DiscountedPrice(int quantity) {

	adjustedPrice = price * quantity;
	if (quantity > 2) {
		adjustedPrice = adjustedPrice - ((quantity / 3) * price);
	}

	cout << breadType << " bread ($" << price << ") " << "\t\t" << quantity << " " << adjustedPrice << endl;

}

string Bread::GetDescription() {
	return breadType;
}
