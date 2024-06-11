#pragma once

#include "Masina.h"

class Dacia : public Masina {
private:
	std::string color;
public:
	// Constructor
	Dacia(std::string col);

	std::string GetColor() override;
	std::string GetName() override;
};