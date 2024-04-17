#pragma once

#include "Expression.h"

class Neg : public Expression {
private:
	Expression* expression;
public:
	// Constructor
	Neg(Expression* expression);

	// Destructor
	~Neg();

	// Method: print()
	void print() override;

	// Method: compute()
	int compute() override;

	// Method: get_children_count()
	int get_children_count() override;

	// Method: get_child()
	Expression* get_child(int i) override;
};