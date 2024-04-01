#pragma once

#include "Volvo.h"
#include "BMW.h"
#include "Seat.h"
#include "Fiat.h"
#include "RangeRover.h"

class Circuit {
private:
	int CurrentWeather;
	double CircuitLength;

	int CarsNumber;
	Car* Cars[25];

	bool FinishedCars[25];
	double EndTimeCircuit[25];

	void Swap(int i, int j);
	void SortRaceTime();
public:
	Circuit();
	void SetLength(double Length);
	void SetWeather(int Weather);
	void AddCar(Car* Car);
	void Race();
	void ShowFinalRanks() const;
	void ShowWhoDidNotFinish() const;
};