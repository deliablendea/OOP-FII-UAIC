#include "Matrix.h"

int main() { 
	Matrix m(4, 3); 
	m.fill(5); m(0, 0) = 30; m(3, 2) = 20;
	m.print();
	printf("W:%d,H:%d,Size:%d\n", m["width"], m["height"], m["size"]);
	Matrix s(3, 3); 
	if (s.is_square_matrix()) { printf("Square\n"); }
	s.fill(0);
	s(0, 0) = 1; s(1, 1) = 1; s(2, 2) = 1;
	if (s.is_identity_matrix()) { printf("Identity\n"); }
	s.print(); 
	if (m == s) { printf("Egale"); } else { printf("diferite"); }
}