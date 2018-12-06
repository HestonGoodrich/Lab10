#include "LayerCake.h"

LayerCake::LayerCake(string description, string frosting, int layers)
	: Cake(description, frosting) {

	layercakeDescription = description;
	layercakeFrosting = frosting;
	layercakeLayers = layers;
}

void LayerCake::ToString() {
	if (frosting == "cream-cheese") {
		creamCheese = layercakeLayers;
		price = price + creamCheese;
	}
	if (layercakeLayers > 1) {
		price = price + ((layercakeLayers - 1) * 3);
	}
	cout << layercakeLayers << "-layer " << layercakeDescription << " cake with " << layercakeFrosting << " frosting ($" << fixed << setprecision(2) << price << ")" << endl;
}

void LayerCake::DiscountedPrice(int quantity) {

	adjustedPrice = price * quantity;

	if (quantity > 2) {
		multiDiscount = quantity * 2;
		adjustedPrice = adjustedPrice - multiDiscount;
	}
	cout << layercakeLayers << "-layer " << layercakeDescription << " cake with " << layercakeFrosting << " frosting ($" << fixed << setprecision(2) << price << ")" << "\t" << quantity << "\t" << adjustedPrice << endl;
}

