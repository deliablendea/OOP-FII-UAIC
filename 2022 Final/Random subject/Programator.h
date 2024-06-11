#pragma once

#include "Angajat.h"

class Programator : public Angajat {
private:
	std::string cod;
public:
	void Lucreaza() override;

	Programator& Add(std::string cod);
	Programator(std::string nume, int salariu, int id);
	std::string GetCode();
};