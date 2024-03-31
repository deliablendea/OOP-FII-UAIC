#pragma once

class Car {
protected:
	const char* Name;
	double FuelCapacity; // Liters/Hour
	double FuelConsumption; // Liters/100Km
	int AverageSpeed[3]; // Depends on the weather conditions; Km/Hour
public:
	virtual const char* GetName() = 0;
	virtual double CalculateTime(int, double, bool&) = 0;
};