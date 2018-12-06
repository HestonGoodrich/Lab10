#include "CupCake.h"

CupCake::CupCake(string description, string frosting, string sprinkles)
	: Cake(description, frosting), sprinkles(sprinkles) {
	cupcakeDescription = description;
	cupcakeFrosting = frosting;
	cupcakeSprinkles = sprinkles;

}

void CupCake::ToString() {
	//Cream cheese frosting increases the base price by twenty cents
	if (cupcakeFrosting == "cream-cheese") {
		cupcakeBasePrice = cupcakeBasePrice + .2;
	}
	cout << cupcakeDescription << " cupcake with " << cupcakeFrosting << " frosting and " << cupcakeSprinkles << " sprinkles ($" << cupcakeBasePrice << ")" << endl;
}

void CupCake::DiscountedPrice(int quantity) {

	cout << "CupCake discounted price, quantity: " << quantity << endl;

}