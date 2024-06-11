#pragma once

#include "Masina.h"

class Toyota : public Masina {
private:
	std::string color;
public:
	// Constructor
	Toyota(std::string col);

	std::string GetColor() override;
	std::string GetName() override;
};