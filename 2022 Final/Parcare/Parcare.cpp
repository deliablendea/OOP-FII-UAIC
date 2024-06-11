#include "Parcare.h"

Parcare::Parcare() {
	this->maxcapacity = 0;
}

void Parcare::Create(int maxCapacity) {
	this->maxcapacity = maxCapacity;
}

Parcare& Parcare::Add(Masina* m) {
	if (this->masini.size() + 1 <= this->maxcapacity)
		this->masini.push_back(m);
	return *this;
}

void Parcare::RemoveByName(std::string name) {
	for (auto it = this->masini.begin(); it != this->masini.end(); )
		if ((*it)->GetName() == name)
			it = this->masini.erase(it);
		else it++;
}

int Parcare::GetCount() {
	return this->masini.size();
}

bool Parcare::IsFull() {
	if (this->masini.size() < this->maxcapacity)
		return false;
	return true;
}

void Parcare::ShowAll() {
	std::cout << "SHOW-ALL:";
	for (Masina* m : this->masini)
		std::cout << m->GetName() << "(" << m->GetColor() << "), ";
	std::cout << '\n';
}

void Parcare::ShowByColor(std::string color) {
	std::cout << "SHOW-COLOR (" << color << "):";
	for (Masina* m : this->masini)
		if (m->GetColor() == color)
			std::cout << m->GetName() << ", ";
	std::cout << '\n';
}