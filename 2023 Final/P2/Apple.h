#pragma once

#include "Article.h"

class Apple : public Article {
	std::string country;
	int price, quantity;
public:
	// Constructor
	Apple(int aprice, int aquantity, std::string acountry);

	std::string GetType() override;
	int GetQuantity() override;
	int GetPrice() override;
	void Print() override;
};