#include "Neg.h"

// Constructor
Neg::Neg(Expression* expression) {
	this->expression = expression;
}

// Destructor
Neg::~Neg() {
	delete expression;
}

// Method: print()
void Neg::print() {
	printf("( - ");
	this->expression->print();
	printf(")");
}

// Method: compute()
int Neg::compute() {
	return - this->expression->compute();
}

// Method: get_children_count()
int Neg::get_children_count() {
	return 1;
}

// Method: get_child()
Expression* Neg::get_child(int i) {
	if (i == 0) return this->expression;
	return nullptr;
}