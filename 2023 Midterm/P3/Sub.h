#pragma once

#include "Expression.h"

class Sub : public Expression {
private:
	Expression* expression1, * expression2;
public:
	// Constructor
	Sub(Expression* expression1, Expression* expression2);

	// Destructor
	~Sub();

	// Method: print()
	void print() override;

	// Method: compute()
	int compute() override;

	// Method: get_children_count()
	int get_children_count() override;

	// Method: get_child()
	Expression* get_child(int i) override;
};