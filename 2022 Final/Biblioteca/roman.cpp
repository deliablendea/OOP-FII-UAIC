#include "roman.h"

Roman::Roman(std::string nume, std::string autor) {
	this->nume = nume;
	this->autor = autor;
}

std::string Roman::GetInfo() {
	std::string info = "Roman " + this->nume + " de " + this->autor;
	return info;
} 
