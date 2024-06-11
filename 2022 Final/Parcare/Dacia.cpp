#include "Dacia.h"

Dacia::Dacia(std::string col) {
    this->color = col;
}

std::string Dacia::GetColor() {
    return this->color;
}

std::string Dacia::GetName() {
    return "Dacia";
}
