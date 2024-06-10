#pragma once

#include "Procesor.h"

class Sentence {
private:
    std::string name;
    std::vector<Procesor*> procesators;
public:
    // Constructor
    Sentence(std::string mesaj);

    void RunAll();
    void ListAll();
    void Run(std::string runwhat);
    Sentence& operator+=(Procesor* p);
};