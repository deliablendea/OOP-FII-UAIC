#pragma once

#include <iostream>
#include <string>
#include <vector>

class Masina {
public:
	virtual std::string GetColor() = 0;
	virtual std::string GetName() = 0;
};