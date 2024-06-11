#pragma once

#include <iostream>
#include <string>
#include <vector>

class Animal {
public:
	virtual std::string GetName() = 0;
	virtual bool IsAFish() = 0;
	virtual bool IsABird() = 0;
	virtual bool IsAMammal() = 0;
};