#pragma once

#include "Animal.h"

class Shark : public Animal {
public:
	std::string GetName() override {
		return "Shark";
	}

	bool IsAFish() override {
		return true;
	}

	bool IsABird() override {
		return false;
	}

	bool IsAMammal() override {
		return false;
	}
};