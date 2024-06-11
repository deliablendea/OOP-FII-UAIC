#pragma once

#include "carte.h"

class Revista : public Carte {
private:
	std::string titlu;
	int nrArticole;
public:
	Revista(std::string titlu, int nrArticole);
	std::string GetInfo() override;
};