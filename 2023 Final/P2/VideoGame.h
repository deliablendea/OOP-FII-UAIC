#pragma once

#include "Article.h"

class VideoGame : public Article {
	std::string platform, name;
	int quantity, price;
public:
	// Constructor
	VideoGame(int vprice, int vquantity, std::string vplatform, std::string vname);

	std::string GetType() override;
	int GetQuantity() override;
	int GetPrice() override;
	void Print() override;
};