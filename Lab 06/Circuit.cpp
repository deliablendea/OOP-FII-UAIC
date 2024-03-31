#include <iostream>
#include "Car.h"
#include "Weather.h"
#include "Circuit.h"

Circuit::Circuit() {
	this->CarsNumber = 0;
}

void Circuit::SetLength(double Length) {
	this->CircuitLength = Length;
}

void Circuit::SetWeather(int Weather) {
	this->CurrentWeather = Weather;
}

void Circuit::AddCar(Car* Car) {
	this->CarsNumber++;
	this->Cars[this->CarsNumber] = Car;
}

void Circuit::Swap(int i, int j) {
	Car* Tmp1 = this->Cars[i];
	this->Cars[i] = this->Cars[j];
	this->Cars[j] = Tmp1;

	double Tmp2 = this->EndTimeCircuit[i];
	this->EndTimeCircuit[i] = this->EndTimeCircuit[j];
	this->EndTimeCircuit[j] = Tmp2;

	bool Tmp3 = this->FinishedCars[i];
	this->FinishedCars[i] = this->FinishedCars[j];
	this->FinishedCars[j] = Tmp3;
}

void Circuit::SortRaceTime() {
	for (int i = 1; i <= this->CarsNumber - 1; i++)
		for (int j = 1; j <= this->CarsNumber - i; j++)
			if (EndTimeCircuit[j] > EndTimeCircuit[j + 1])
				Swap(j, j + 1);
}

void Circuit::Race() {
	for (int i = 1; i <= this->CarsNumber; i++) {
		bool Finished;
		this->EndTimeCircuit[i] = this->Cars[i]->CalculateTime(this->CurrentWeather, this->CircuitLength, Finished);
		this->FinishedCars[i] = Finished;
	}
	SortRaceTime(); // Descending order.
}

void Circuit::ShowFinalRanks() const {
	std::cout << "Final ranks are: " << '\n';
	for (int i = 1; i <= this->CarsNumber; i++) {
		std::cout << i << ". "
			<< this->Cars[i]->GetName() << ": "
			<< "(Time: " << this->EndTimeCircuit[i] << ")" << '\n';	}
	std::cout << '\n';
}
void Circuit::ShowWhoDidNotFinish() const {
	std::cout << "The cars which did not finish the race are: " << '\n';
	for (int i = 1; i <= this->CarsNumber; i++)
		if (this->FinishedCars[i] == false)
			std::cout << this->Cars[i]->GetName() << '\n';
}