#pragma once

#include "Article.h"

class Book : public Article {
	std::string title, author;
	int quantity, price;
public:
	// Constructor
	Book(int bprice, int bquantity, std::string btitle, std::string bauthor);

	std::string GetType() override;
	int GetQuantity() override;
	int GetPrice() override;
	void Print() override;
};