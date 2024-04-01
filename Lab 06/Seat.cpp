#include "Seat.h"
#include "Weather.h"

Seat::Seat() {
	this->FuelCapacity = 40;
	this->FuelConsumption = 7;
	this->AverageSpeed[Weather::Rain] = 40;
	this->AverageSpeed[Weather::Sunny] = 100;
	this->AverageSpeed[Weather::Snow] = 25;
	this->Name = "Seat";
}

const char* Seat::GetName() {
	return this->Name;
}

double Seat::CalculateTime(int Weather, double Length, bool& Finished) {
	int Speed = AverageSpeed[Weather];
	double Time = this->FuelCapacity / this->FuelConsumption;
	double Distance = Time * Speed;

	if (Distance > Length) Finished = true;
	else Finished = false;

	double FinishTime = Length * Time / Distance;
	return FinishTime;
}