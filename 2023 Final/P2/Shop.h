#pragma once

#include "Article.h"

class Shop {
private:
	std::vector<Article*> items;
public:
	Shop& Add(Article* a);
	int GetTotalPrice();
	int GetQuantity(std::string type);
	void List();
};