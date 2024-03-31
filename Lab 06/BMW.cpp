#include "BMW.h"
#include "Weather.h"

BMW::BMW() {
	this->FuelCapacity = 59;
	this->FuelConsumption = 2;
	this->AverageSpeed[Weather::Rain] = 60;
	this->AverageSpeed[Weather::Sunny] = 140;
	this->AverageSpeed[Weather::Snow] = 40;
	this->Name = "BMW";
}

const char* BMW::GetName() {
	return this->Name;
}

double BMW::CalculateTime(int Weather, double Length, bool& Finished) {
	int Speed = AverageSpeed[Weather];
	double Hours = this->FuelCapacity / this->FuelConsumption;
	double Distance = Hours * Speed;

	if (Distance > Length) Finished = true;
	else Finished = false;

	double FinishTime = Length * Hours / Distance;
	return FinishTime;
}