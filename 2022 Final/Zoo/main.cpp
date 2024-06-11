#include "Animal.h"
#include "Cow.h"
#include "Eagle.h"
#include "Feline.h"
#include "Lion.h"
#include "Shark.h"
#include "Tiger.h"
#include "Zoo.h"

int main()
{
    Zoo z;
    z += new Shark();
    z += new Eagle();
    z += new Tiger();
    z += new Lion();
    z += new Cow();
    std::cout << "Total animals in zoo: " << z.GetTotalAnimals() << std::endl;
    for (auto a : z.GetFishes())
        std::cout << "Fish: " << a->GetName() << std::endl;
    for (auto a : z.GetBirds())
        std::cout << "Bird: " << a->GetName() << std::endl;
    for (auto a : z.GetMammals())
        std::cout << "Mammal: " << a->GetName() << std::endl;
    for (auto a : z.GetFelines())
        std::cout << "Feline: " << a->GetName() << ", speed: " << a->GetSpeed() << std::endl;
    std::cout << "Zoo contains a tiger  : " << std::boolalpha << z("Tiger") << std::endl;
    std::cout << "Zoo contains a monkey : " << std::boolalpha << z("Monkey") << std::endl;
    return 0;
}

/*
    Total animals in zoo: 5
    Fish: Shark
    Bird: Eagle
    Mammal: Tiger
    Mammal: Lion
    Mammal: Cow
    Feline: Tiger, speed: 100
    Feline: Lion, speed: 80
    Zoo contains a tiger  : true
    Zoo contains a monkey : false
*/