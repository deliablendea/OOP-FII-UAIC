#pragma once

#include "Car.h"

class Volvo : public Car {
public:
	Volvo();
	const char* GetName() override;
	double CalculateTime(int, double, bool&) override;
};