#include "Manager.h"

void Manager::Lucreaza() {
	std::cout << "================" << '\n';
	std::cout << this->numeEchipa << '\n';
	for (Angajat* a : this->echipa) {
		std::cout << "[" << a->GetNume() << "]:\n";
		a->Lucreaza();
	}
	std::cout << "================" << '\n';
}

bool Manager::Angajeaza(Angajat* x) {
	this->echipa.push_back(x);
	return true;
}

bool Manager::Concediaza(Angajat* x) {
	for (auto it = this->echipa.begin(); it != this->echipa.end(); it++)
		if ((*it)->GetNume() == x->GetNume()) {
			it = this->echipa.erase(it);
			return true;
		}
	return false;
}

Angajat* Manager::GetAngajat(int id) {
	for (Angajat* a : this->echipa)
		if (a->id == id)
			return a;
	return nullptr;
}

Manager::Manager(std::string numeEchipa, std::string nume, int salariu, int id) : Angajat(nume, salariu, id) {
	this->numeEchipa = numeEchipa;
	std::cout << "================" << '\n';
	std::cout << this->numeEchipa << '\n';
}