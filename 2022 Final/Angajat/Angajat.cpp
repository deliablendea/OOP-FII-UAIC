#include "Angajat.h"

std::string Angajat::GetNume() {
	return this->nume;
}

int Angajat::GetSalariu() {
	return this->salariu;
}

bool Angajat::SetSalariu(int salariu) {
	this->salariu = salariu;
	return true;
}

Angajat::Angajat(std::string nume, int salariu, int id) {
	this->nume = nume;
	this->salariu = salariu;
	this->id = id;
}