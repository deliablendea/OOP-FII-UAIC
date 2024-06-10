#include "Apple.h"

Apple::Apple(int aprice, int aquantity, std::string acountry) {
	this->country = acountry;
	this->price = aprice;
	this->quantity = aquantity;
}

std::string Apple::GetType() {
	return "Apple";
}

int Apple::GetQuantity() {
	return this->quantity;
}

int Apple::GetPrice() {
	return this->price;
}

void Apple::Print() {
	std::cout << "Apple (from=" << this->country << ") Price=" << this->price << " Quantity=" << this->quantity << '\n';
}