#pragma once

#include <iostream>

class Matrix {
private:
	int** matrix;
	int width, height;
public:
	// G1 - Matrix constructor with two integer values
	Matrix(int width, int height);

	// G2 - Matrix destructor (that deletes the heap allocated buffer for matrix values)
	~Matrix();

	// G5 - Operator() to access an element from the matrix
	int& operator()(int x, int y);

	// G6 - Operator[] to get informations such as width, height or size
	int operator[](const char* information);

	// G7 - Operator== to check if two matrices are equal
	bool operator==(Matrix& check);

	// G8 - Method: print that will print the matrix
	void print();

	// G9 - Method: is_identity_matrix that true if the matrix is the Identity matrix
	bool is_identity_matrix();

	// G10 - Method: is_square_matrix that returns true if the matrix width and height are equal
	bool is_square_matrix();

	// G11 - Method: fill that fills the matrix with a specified value
	void fill(int value);
};