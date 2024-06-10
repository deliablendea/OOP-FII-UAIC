#pragma once

#include <iostream>

class Fractie {
private:
	int numerator, denominator;
public:
	// Default constructor
	Fractie() = default;

	// G1 - Constructor with two integer values
	Fractie(int numerator, int denominator);

	// G2 - Constructor with const char* value
	Fractie(const char* expression);

	// G5 - Operator- to substract two fractions
	Fractie& operator-(const Fractie& fractie);

	// G6 - Operator+ to add two fractions
	Fractie& operator+(const Fractie& fractie);

	// G7 - Operator* to multiply two fractions
	Fractie& operator*(const Fractie& fractie);

	// G8 - Operator== to check if two fraction are equal (in their simplified form)
	bool operator==(const Fractie& fractie);

	// G9 - Method: print that will print the fraction
	void print();

	// G10 - Method: simplify that returns a simplified fraction
	Fractie simplify();

	// G11 - Operator[] to get the numerator or denominator
	int operator[](const char* nd);
};