#pragma once

#include <functional>
#include <iostream>
#include <string>
#include <vector>

class Procesor {
public:
    virtual std::string GetName() = 0;
    virtual int Compute(std::string compute) = 0;
};