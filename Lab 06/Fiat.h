#pragma once

#include "Car.h"

class Fiat : public Car {
public:
	Fiat();
	const char* GetName() override;
	double CalculateTime(int, double, bool&) override;
};