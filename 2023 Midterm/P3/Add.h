#pragma once

#include "Expression.h"

class Add : public Expression {
private:
	Expression* expression1, * expression2;
public:
	// Constructor
	Add(Expression* expression1, Expression* expression2);

	// Destructor
	~Add();

	// Method: print()
	void print() override;

	// Method: compute()
	int compute() override;

	// Method: get_children_count()
	int get_children_count() override;

	// Method: get_child()
	Expression* get_child(int i) override;
};