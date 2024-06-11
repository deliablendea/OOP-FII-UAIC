#include "Zoo.h"

std::vector<Animal*> Zoo::GetFishes() {
    std::vector<Animal*> temp;
    for (Animal* a : this->animals)
        if (a->IsAFish() == true)
            temp.push_back(a);
    return temp;
}

std::vector<Animal*> Zoo::GetBirds() {
    std::vector<Animal*> temp;
    for (Animal* a : this->animals)
        if (a->IsABird() == true)
            temp.push_back(a);
    return temp;
}

std::vector<Animal*> Zoo::GetMammals() {
    std::vector<Animal*> temp;
    for (Animal* a : this->animals)
        if (a->IsAMammal() == true)
            temp.push_back(a);
    return temp;
}

std::vector<Feline*> Zoo::GetFelines() {
    std::vector<Feline*> temp;
    for (Animal* a : this->animals) {
        Feline* temp2 = dynamic_cast<Feline*>(a);
        if (temp2 != nullptr)
            temp.push_back(temp2);
    }
    return temp;
}

int Zoo::GetTotalAnimals() {
    return this->animals.size();
}

void Zoo::operator+=(Animal* a) {
    this->animals.push_back(a);
}

bool Zoo::operator()(std::string name) {
    for (Animal* a : this->animals)
        if (a->GetName() == name)
            return true;
    return false;
}
