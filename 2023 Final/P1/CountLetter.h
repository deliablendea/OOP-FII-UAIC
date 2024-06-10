#pragma once

#include "Procesor.h"

class CountLetter : public Procesor {
private:
    std::string name;
    std::function<bool(char)> func;
public:
    // Constructor
    CountLetter(std::string what, bool (*func)(char));

    std::string GetName() override;
    int Compute(std::string compute) override;
};