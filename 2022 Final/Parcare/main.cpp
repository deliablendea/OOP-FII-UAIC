#include <iostream>
#include "Masina.h"
#include "Parcare.h"
#include "Dacia.h"
#include "Toyota.h"
#include "FerrariRosu.h"

int main() {
	Parcare p;
	p.Create(4);
	p.Add(new Dacia("rosu"));
	p.Add(new Toyota("verde"));
	std::cout << "Masini in parcare:" << p.GetCount() << std::boolalpha << " , Parcare plina: " << p.IsFull() << '\n';
	p.Add(new FerrariRosu());
	p.Add(new Toyota("albastru"));
	p.Add(new Toyota("rosu")); // returns false - s-a atins capacitatea maxima
	std::cout << "Masini in parcare:" << p.GetCount() << std::boolalpha << " , Parcare plina: " << p.IsFull() << '\n';
	p.ShowAll();
	p.ShowByColor("rosu");
	p.RemoveByName("Toyota");
	p.Add(new Dacia("gri"));
	p.ShowAll();
	std::cout << "Masini in parcare:" << p.GetCount() << std::boolalpha << " , Parcare plina: " << p.IsFull() << '\n';
}