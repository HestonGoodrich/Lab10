#include "BakedGood.h"
#include "Cake.h"
#include "LayerCake.h"
#include "CupCake.h"
#include "Bread.h"

int main() {

	vector<BakedGood*> bakedGoodList(0);
	string type;
	string description;
	int quantity = 0;
	string frosting;
	double layers = 0;
	string sprinkles;

	cout << "**Bread and Cakes Bakery**" << endl << endl;
	cout << "Enter sub-order (enter \"done\" to finish)" << endl;

	while (type != "done") {
		cout << "Sub-order: " << endl;
		cin >> type;
		cin.ignore();
		if (type == "done") {
			break;
		}
		else {
			cin >> description;
			cin.ignore();

			//This loop takes quantity of bread and adds that many poniter objects to bakedGoodList vector
			if (type == "Bread") {
				cin >> quantity;
				cin.ignore();
				for (int i = 0; i < quantity; i++) {
					bakedGoodList.push_back(new Bread(description));
				}
			}

			//This loop takes Cupcake or Layer-cake and assigns a frosting variable
			else {
				cin >> frosting;
				cin.ignore();
			}

			//This loop assigns a Layer-cake layers and quantity adding (quantity) objects to the vector
			if (type == "Layer-cake") {
				cin >> layers;
				cin.ignore();
				cin >> quantity;
				cin.ignore();
				for (int i = 0; i < quantity; i++) {
					bakedGoodList.push_back(new LayerCake(description, frosting, layers));
				}
			}

			if (type == "Cupcake") {
				cin >> sprinkles;
				cin.ignore();
				cin >> quantity;
				cin.ignore();
				for (int i = 0; i < quantity; i++) {
					bakedGoodList.push_back(new CupCake(description, frosting, sprinkles));
				}
			}
		}
	}

	cout << endl << "Order confirmations:" << endl;

	for (unsigned int i = 0; i < bakedGoodList.size(); i++) {
		bakedGoodList.at(i)->ToString();
	}

	cout << endl << "Invoice:" << endl;
	cout << "Baked Good            " << "         Quantity           " << " Total " << endl;

	quantity = 0;
	string currentDescription = bakedGoodList.at(0)->GetDescription();
	string descriptionCheck;
	vector<int> uniqueItemQuantities(0);
	bool alreadyFound = false;

	//This is where I need to write code to iterate through the vector and count quantity of unique objects
	for (int j = 0; j < bakedGoodList.size();) {
		for (unsigned int i = 0; i < bakedGoodList.size(); i++) {
			descriptionCheck = bakedGoodList.at(i)->GetDescription();
			if (currentDescription == descriptionCheck && !alreadyFound) {
				quantity++;
			}
		}
		uniqueItemQuantities.push_back(quantity);
		j = j + quantity;

		for (j; j < bakedGoodList.size();) {
			if (descriptionCheck == bakedGoodList.at(j)->GetDescription) {
				alreadyFound = true;
			}
		}

	}

	cout << currentDescription << " and quantity: " << quantity << endl;

	cout << "Totals" << endl;
	cout << "Good Bye" << endl;

	//system("pause");
	return 0;

}