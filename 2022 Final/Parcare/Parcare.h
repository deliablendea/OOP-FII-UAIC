#pragma once

#include "Masina.h"

class Parcare {
private:
	int maxcapacity;
	std::vector<Masina*> masini;
public:
	// Constructor
	Parcare();

	void Create(int maxCapacity);
	Parcare& Add(Masina* m); // ??
	void RemoveByName(std::string name);
	int GetCount();
	bool IsFull();
	void ShowAll();
	void ShowByColor(std::string color);
};