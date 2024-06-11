#include "biblioteca.h"

Biblioteca::Biblioteca() {
	this->count = 0;
	carti = new Carte* [100];
}

Biblioteca::~Biblioteca() {
	for (int i = 0; i < this->count; i++)
		delete carti[i];
	delete[] carti;
	this->count = 0;
}

Biblioteca& Biblioteca::operator+=(Carte* c) {
	this->carti[count++] = c;
	return *this;
}

Carte** Biblioteca::begin() const {
	return carti;
}

Carte** Biblioteca::end() const {
	return carti + count;
}

Biblioteca::operator int() {
	return this->count;
}

void Biblioteca::PrintFilter(std::function<bool(Carte*)> fn) {
	for (int i = 0; i < this->count; i++)
		if (fn(this->carti[i]))
			std::cout << this->carti[i]->GetInfo() << '\n';
}