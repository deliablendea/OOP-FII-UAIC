#include "CountLetter.h"

CountLetter::CountLetter(std::string what, bool (*func)(char)) {
    this->name = what;
    this->func = func;
}

std::string CountLetter::GetName() {
    return this->name;
}

int CountLetter::Compute(std::string compute) {
    int count = 0;
    for (auto ch : compute)
        if (this->func(ch))
            count++;
    return count;
}