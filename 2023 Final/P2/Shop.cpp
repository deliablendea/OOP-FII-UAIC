#include "Shop.h"

Shop& Shop::Add(Article* a) {
	this->items.push_back(a);
	return *this;
}

int Shop::GetTotalPrice() {
	int totalprice = 0;
	for (Article* a : this->items)
		totalprice = totalprice + a->GetPrice() * a->GetQuantity();
	return totalprice;
}

int Shop::GetQuantity(std::string type) {
	int quantity = 0;
	for (Article* a : this->items)
		if (a->GetType() == type)
			quantity = quantity + a->GetQuantity();
	return quantity;
}

void Shop::List() {
	for (Article* a : this->items)
		a->Print();
}