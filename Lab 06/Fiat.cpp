#include "Fiat.h"
#include "Weather.h"

Fiat::Fiat() {
	this->FuelCapacity = 45;
	this->FuelConsumption = 5;
	this->AverageSpeed[Weather::Rain] = 50;
	this->AverageSpeed[Weather::Sunny] = 130;
	this->AverageSpeed[Weather::Snow] = 30;
	this->Name = "Fiat";
}

const char* Fiat::GetName() {
	return this->Name;
}

double Fiat::CalculateTime(int Weather, double Length, bool& Finished) {
	int Speed = AverageSpeed[Weather];
	double Hours = this->FuelCapacity / this->FuelConsumption;
	double Distance = Hours * Speed;

	if (Distance > Length) Finished = true;
	else Finished = false;

	double FinishTime = Length * Hours / Distance;
	return FinishTime;
}