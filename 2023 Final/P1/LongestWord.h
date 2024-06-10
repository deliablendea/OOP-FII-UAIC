#pragma once

#include "Procesor.h"

class LongestWord : public Procesor {
private:
    std::string name;
public:
    // Constructor
    LongestWord(std::string what);

    std::string GetName() override;
    int Compute(std::string compute) override;
};