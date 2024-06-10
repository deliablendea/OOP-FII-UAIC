#include "Sub.h"

// Constructor
Sub::Sub(Expression* expression1, Expression* expression2) {
	this->expression1 = expression1;
	this->expression2 = expression2;
}

// Destructor
Sub::~Sub() {
	delete expression1;
	delete expression2;
}

// Method: print()
void Sub::print() {
	printf("(");
	this->expression1->print();
	printf(" - ");
	this->expression2->print();
	printf(")");
}

// Method: compute()
int Sub::compute() {
	return this->expression1->compute() - this->expression2->compute();
}

// Method: get_children_count()
int Sub::get_children_count() {
	return 2;
}

// Method: get_child()
Expression* Sub::get_child(int i) {
	if (i == 0) return this->expression1;
	else if (i == 1) return this->expression2;
	return nullptr;
}