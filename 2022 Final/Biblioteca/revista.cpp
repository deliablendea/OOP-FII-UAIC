#include "revista.h"

Revista::Revista(std::string titlu, int nrArticole) {
	this->titlu = titlu;
	this->nrArticole = nrArticole;
}

std::string Revista::GetInfo() {
	std::string info = "Revista " + this->titlu + " cu " + std::to_string(this->nrArticole) + " articole";
	return info;
}