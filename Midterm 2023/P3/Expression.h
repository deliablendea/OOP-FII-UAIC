#pragma once

#include <iostream>

class Expression {
public:
	// G5 - Method: print() that uses polymorphism for Add, Sub, Neg and Value
	virtual void print() = 0;

	// G6 - Method: compute() that uses polymorphism for Add, Sub, Neg and Value
	virtual int compute() = 0;

	// G7 - Method: get_children_count() that uses polymorphism for Add, Sub, Neg and Value
	virtual int get_children_count() = 0;

	// G8 - Method: get_child() that uses polymorphism for Add, Sub, Neg and Value
	virtual Expression* get_child(int i) = 0;
};