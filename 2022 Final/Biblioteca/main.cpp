#include "biblioteca.h"
#include "carte.h"
#include "revista.h"
#include "roman.h"

int main() {
	Biblioteca b;
	(b += new Roman("DON QUIJOTE", "MIGUEL DE CERVANTES")) += new Revista("Journal of Artificial Intelligence", 100);
	b += new Roman("MACBETH", "WILLIAM SHAKESPEARE");
	for (auto x : b)
	{
		std::cout << x->GetInfo() << std::endl;
	}
	std::cout << "Numar de intrari in biblioteca: " << (int)b << std::endl;
	std::cout << "Lista doar cu romane:" << std::endl;
	b.PrintFilter([](Carte* c)->bool {
		// adaugati codul care determina daca o carte este un Roman
		return dynamic_cast<Roman*>(c) != nullptr;
	});
	return 0;
}

/*
	Roman DON QUIJOTE de MIGUEL DE CERVANTES
	Revista Journal of Artificial Intelligence cu 100 articole
	Roman MACBETH de WILLIAM SHAKESPEARE
	Numar de intrari in biblioteca: 3
	Lista doar cu romane:
	Roman DON QUIJOTE de MIGUEL DE CERVANTES
	Roman MACBETH de WILLIAM SHAKESPEARE
*/