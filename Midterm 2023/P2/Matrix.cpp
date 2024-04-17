#include "Matrix.h"

// G1 - Matrix constructor with two integer values
Matrix::Matrix(int width, int height) {
	this->width = width;
	this->height = height;
	matrix = new int* [this->height];
	for (unsigned int it = 0; it < height; it++)
		matrix[it] = new int [this->width];
}

// G2 - Matrix destructor (that deletes the heap allocated buffer for matrix values)
Matrix::~Matrix() {
	for (unsigned int it = 0; it < height; it++)
		delete[] matrix[it];
	delete[] matrix;
}

// G5 - Operator() to access an element from the matrix
int& Matrix::operator()(int x, int y) {
	return (int&)matrix[y][x]; // (int&) face cast la o referinta de tip integer
}

// G6 - Operator[] to get informations such as width, height or size
int Matrix::operator[](const char* information) {
	if (information == "width") return this->width;
	else if (information == "height") return this->height;
	else if (information == "size") return this->width * this->height * sizeof(int);
}

// G7 - Operator== to check if two matrices are equal
bool Matrix::operator==(Matrix& check) {
	if (check.width != this->width || check.height != this->height) return false;
	for (unsigned int i = 0; i < this->height; i++)
		for (unsigned int j = 0; j < this->width; j++)
			if (this->matrix[i][j] != check.matrix[i][j])
				return false;
	return true;
}

// G8 - Method: print that will print the matrix
void Matrix::print() {
	for (unsigned int i = 0; i < this->height; i++, printf("\n"))
		for (unsigned int j = 0; j < this->width; j++)
			printf("%d ", this->matrix[i][j]);
}

// G9 - Method: is_identity_matrix that true if the matrix is the Identity matrix
bool Matrix::is_identity_matrix(){
	for (unsigned int i = 0; i < this->height; i++)
		if (this->matrix[i][i] != 1) return false;
	for (unsigned int i = 0; i < this->height; i++)
		for (unsigned int j = 0; j < this->width; j++)
			if (i != j && this->matrix[i][j] != 0) return false;
	return true;
}

// G10 - Method: is_square_matrix that returns true if the matrix width and height are equal
bool Matrix::is_square_matrix() {
	return this->width == this->height;
}

// G11 - Method: fill that fills the matrix with a specified value
void Matrix::fill(int value) {
	for (unsigned int i = 0; i < this->height; i++)
		for (unsigned int j = 0; j < this->width; j++)
			this->matrix[i][j] = value;
}