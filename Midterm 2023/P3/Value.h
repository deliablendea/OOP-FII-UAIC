#pragma once

#include "Expression.h"

class Value : public Expression {
private:
	int value;
public:
	// Constructor
	Value(int value);

	// Destructor
	~Value();

	// Method: print()
	void print() override;

	// Method: compute()
	int compute() override;

	// Method: get_children_count()
	int get_children_count() override;

	// Method: get_child()
	Expression* get_child(int i) override;
};