#pragma once

#include "Masina.h"

class FerrariRosu : public Masina {
public:
	// Constructor
	FerrariRosu() {}

	std::string GetColor() override;
	std::string GetName() override;
};