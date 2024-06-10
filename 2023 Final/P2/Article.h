#pragma once

#include <iostream>
#include <string>
#include <vector>

class Article {
public:
	virtual std::string GetType() = 0;
	virtual int GetQuantity() = 0;
	virtual int GetPrice() = 0;
	virtual void Print() = 0;
};