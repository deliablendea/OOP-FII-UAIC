#pragma once

#include "Animal.h"

class Feline : public Animal {
public:
	virtual int GetSpeed() = 0;
};