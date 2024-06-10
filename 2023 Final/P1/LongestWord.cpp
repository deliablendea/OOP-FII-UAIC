#include "LongestWord.h"

LongestWord::LongestWord(std::string what) {
    this->name = what;
}

std::string LongestWord::GetName() {
    return this->name;
}

int LongestWord::Compute(std::string compute) {
    int maxim = 0, current_pos = 0;
    while ((current_pos = compute.find_first_of(" ")) != std::string::npos) {
        if (maxim < current_pos)
            maxim = current_pos;
        compute = compute.substr(current_pos + 1);
    }
    return maxim;
}