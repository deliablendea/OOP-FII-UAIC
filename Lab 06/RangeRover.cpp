#include "RangeRover.h"
#include "Weather.h"

RangeRover::RangeRover() {
	this->FuelCapacity = 105;
	this->FuelConsumption = 3;
	this->AverageSpeed[Weather::Rain] = 55;
	this->AverageSpeed[Weather::Sunny] = 160;
	this->AverageSpeed[Weather::Snow] = 40;
	this->Name = "RangeRover";
}

const char* RangeRover::GetName() {
	return this->Name;
}

double RangeRover::CalculateTime(int Weather, double Length, bool& Finished) {
	int Speed = AverageSpeed[Weather];
	double Hours = this->FuelCapacity / this->FuelConsumption;
	double Distance = Hours * Speed;

	if (Distance > Length) Finished = true;
	else Finished = false;

	double FinishTime = Length * Hours / Distance;
	return FinishTime;
}