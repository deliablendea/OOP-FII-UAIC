#include "Volvo.h"
#include "Weather.h"

Volvo::Volvo() {
	this->FuelCapacity = 60;
	this->FuelConsumption = 3;
	this->AverageSpeed[Weather::Rain] = 25;
	this->AverageSpeed[Weather::Sunny] = 110;
	this->AverageSpeed[Weather::Snow] = 20;
	this->Name = "Volvo";
}

const char* Volvo::GetName() {
	return this->Name;
}

double Volvo::CalculateTime(int Weather, double Length, bool& Finished) {
	int Speed = AverageSpeed[Weather];
	double Hours = this->FuelCapacity / this->FuelConsumption;
	double Distance = Hours * Speed;

	if (Distance > Length) Finished = true;
	else Finished = false;

	double FinishTime = Length * Hours / Distance;
	return FinishTime;
}