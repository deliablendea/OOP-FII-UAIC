#pragma once

#include "carte.h"

class Biblioteca {
private:
	int count;
	Carte** carti;
public:
	Biblioteca();
	~Biblioteca();
	Biblioteca& operator+=(Carte* c);
	Carte** begin() const;
	Carte** end() const;
	operator int();
	void PrintFilter(std::function<bool(Carte*)> fn);
}; 