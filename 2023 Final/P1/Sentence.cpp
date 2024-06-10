#include "Sentence.h"

Sentence::Sentence(std::string mesaj) {
    this->name = mesaj;
}

void Sentence::RunAll() {
    for (Procesor* p : procesators)
        std::cout << "Name:" << p->GetName() << " => " << p->Compute(this->name) << '\n';
}

void Sentence::ListAll() {
    for (Procesor* p : procesators)
        std::cout << "Name:" << p->GetName() << '\n';
}

void Sentence::Run(std::string runwhat) {
    for (Procesor* p : procesators)
        if (p->GetName() == runwhat)
            std::cout << p->Compute(name) << '\n';
}

Sentence& Sentence::operator+=(Procesor* p) {
    this->procesators.push_back(p);
    return *this;
}