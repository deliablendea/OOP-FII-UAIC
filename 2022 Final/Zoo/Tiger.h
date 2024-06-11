#pragma once

#include "Feline.h"

class Tiger : public Feline {
public:
	std::string GetName() override {
		return "Tiger";
	}

	bool IsAFish() override {
		return false;
	}

	bool IsABird() override {
		return false;
	}

	bool IsAMammal() override {
		return true;
	}

	int GetSpeed() override {
		return 100;
	}
};