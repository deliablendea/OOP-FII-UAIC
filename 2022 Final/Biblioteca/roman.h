#pragma once

#include "carte.h"

class Roman : public Carte {
private:
	std::string nume, autor;
public:
	Roman(std::string nume, std::string autor);
	std::string GetInfo() override;
};