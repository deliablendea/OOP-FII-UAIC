#include "ComputeVowals.h"

ComputeVowals::ComputeVowals(std::string what) {
    this->name = what;
}

std::string ComputeVowals::GetName() {
    return this->name;
}

int ComputeVowals::Compute(std::string compute) {
    int count = 0;
    for (auto ch : compute)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            count++;
    return count;
}