#include "Fractie.h"

// Useful functions
int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b; b = r;
	}
	return a;
}

// G1 - Constructor with two integer values
Fractie::Fractie(int numerator, int denominator) {
	this->numerator = numerator;
	this->denominator = denominator;
}

// G2 - Constructor with const char* value
Fractie::Fractie(const char* expression) {
	bool slash = false;
	this->numerator = this->denominator = 0;
	for (unsigned int it = 0; expression[it]; it++) {
		if (expression[it] == '/') slash = true;
		else if (slash == false) this->numerator = this->numerator * 10 + (expression[it] - '0');
		else if (slash == true) this->denominator = this->denominator * 10 + (expression[it] - '0');
	}
	if (slash == false) this->denominator = 1;
}

// G5 - Operator- to substract two fractions
Fractie& Fractie::operator-(const Fractie& fractie) {
	int amplification = (this->denominator * fractie.denominator) / gcd(this->denominator, fractie.denominator);
	Fractie Substract(this->numerator * amplification / this->denominator - fractie.numerator * amplification / fractie.denominator, amplification);
	return Substract;
}

// G6 - Operator+ to add two fractions
Fractie& Fractie::operator+(const Fractie& fractie) {
	int amplification = (this->denominator * fractie.denominator) / gcd(this->denominator, fractie.denominator);
	Fractie Add(this->numerator * amplification / this->denominator + fractie.numerator * amplification / fractie.denominator, amplification);
	return Add;
}

// G7 - Operator* to multiply two fractions
Fractie& Fractie::operator*(const Fractie& fractie) {
	Fractie Multiply(this->numerator * fractie.numerator, this->denominator * fractie.denominator);
	return Multiply;
}

// G8 - Operator== to check if two fraction are equal (in their simplified form)
bool Fractie::operator==(const Fractie& fractie) {
	return this->numerator * fractie.denominator == this->denominator * fractie.numerator;
}

// G9 - Method: print that will print the fraction
void Fractie::print() {
	printf("%d/%d", this->numerator, this->denominator);
}

// G10 - Method: simplify that returns a simplified fraction
Fractie Fractie::simplify() {
	int simplification = gcd(this->numerator, this->denominator);
	Fractie Simplified(this->numerator / simplification, this->denominator / simplification);
	return Simplified;
}

// G11 - Operator[] to get the numerator or denominator
int Fractie::operator[](const char* nd) {
	if (nd == "numerator") return this->numerator;
	else if (nd == "denominator") return this->denominator;
}