#pragma once

#include "Animal.h"

class Eagle : public Animal {
public:
	std::string GetName() override {
		return "Eagle";
	}

	bool IsAFish() override {
		return false;
	}

	bool IsABird() override {
		return true;
	}

	bool IsAMammal() override {
		return false;
	}
};