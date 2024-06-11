#include "Programator.h"

void Programator::Lucreaza() {
	std::cout << this->cod;
}

Programator& Programator::Add(std::string cod) {
	this->cod = this->cod + cod;
	return *this;
}

Programator::Programator(std::string nume, int salariu, int id) : Angajat(nume, salariu, id) {}

std::string Programator::GetCode() {
	return this->cod;
}
