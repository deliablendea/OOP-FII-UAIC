#pragma once

#include "Angajat.h"

class Manager : public Angajat {
private:
	std::vector<Angajat*> echipa;
	std::string numeEchipa;
public:
	void Lucreaza() override;

	bool Angajeaza(Angajat* x);
	bool Concediaza(Angajat* x);
	Angajat* GetAngajat(int id);

	Manager(std::string numeEchipa, std::string nume, int salariu, int id);
};