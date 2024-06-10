#pragma once

#include "Procesor.h"

class ComputeVowals : public Procesor {
private:
    std::string name;
public:
    // Constructor
    ComputeVowals(std::string what);

    std::string GetName() override;
    int Compute(std::string compute) override;
};