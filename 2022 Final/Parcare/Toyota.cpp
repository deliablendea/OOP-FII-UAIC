#include "Toyota.h"

Toyota::Toyota(std::string col) {
    this->color = col;
}

std::string Toyota::GetColor() {
    return this->color;
}

std::string Toyota::GetName() {
    return "Toyota";
}
