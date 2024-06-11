#pragma once

#include <iostream>
#include <string>
#include <vector>

class Angajat {
protected:
	int salariu, id;
	std::string nume;
public:
	std::string GetNume();
	int GetSalariu();
	bool SetSalariu(int salariu);

	virtual void Lucreaza() = 0;

	Angajat(std::string nume, int salariu, int id);

	friend class Manager;
};