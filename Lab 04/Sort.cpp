#include "Sort.h"

// Constructors

Sort::Sort(int Count, int Min, int Max) {
	this->ListCount = Count;
	int Range = Max - Min + 1;
	for (unsigned int i = 0; i < Count; i++)
		this->List[i] = rand() % Range + Min;
}

Sort::Sort(std::initializer_list<int> InitList) {
	this->ListCount = 0;
	for (int it : InitList) // Iterator -> each element in 'InitList'
		this->List[this->ListCount++] = it;
}

Sort::Sort(int* Array, int ArrayCount) {
	this->ListCount = ArrayCount;
	for (unsigned int i = 0; i < ArrayCount; i++)
		this->List[i] = Array[i];
}

/*
	Variadic functions:

	Type:
	- va_list = holds the information needed by va_start, va_arg, va_end

	Macros:
	- va_start = enables access to variadic function arguments
	- va_arg = accesses the next variadic function argument
	- va_end = ends traversal of the variadic function arguments
*/

Sort::Sort(int Count, ...) {
	va_list Args;
	va_start(Args, Count);

	this->ListCount = Count;
	for (int i = 0; i < Count; i++)
		this->List[i] = va_arg(Args, int);

	va_end(Args);
}

Sort::Sort(std::string String) {
	int Number = 0;
	this->ListCount = 0;
	for (char Letter : String) {
		if (Letter == ',')
			this->List[ListCount++] = Number, Number = 0;
		else Number = Number * 10 + (int)(Letter - '0');
	}
	this->List[ListCount++] = Number;
}

// Functions

void Sort::InsertSort(bool ascendent) {
	for (unsigned int i = 1; i < this->ListCount; i++){
		unsigned int p = i;
		while (p > 0) {
			if ((this->List[p] < this->List[p - 1]) == ascendent) {
				int Aux = this->List[p];
				this->List[p] = this->List[p - 1];
				this->List[p - 1] = Aux;
				p--;
			}
			else break;
		}
	}
}

int Sort::Partition(int Left, int Right, bool ascendent) {
	int Pivot = this->List[Right];

	int i = Left - 1;
	for (int j = Left; j < Right; j++) {
		if ((this->List[j] < Pivot) == ascendent) {
			i++;
			int Aux = this->List[i];
			this->List[i] = this->List[j];
			this->List[j] = Aux;
		}
	}
	int Aux = this->List[i + 1];
	this->List[i + 1] = this->List[Right];
	this->List[Right] = Aux;

	return (i + 1);
}

void Sort::TestQuickSort(int Left, int Right, bool ascendent) {
	if (Left < Right) {
		int Pi = Partition(Left, Right, ascendent);
		TestQuickSort(Left, Pi - 1, ascendent);
		TestQuickSort(Pi + 1, Right, ascendent);
	}
}

void Sort::QuickSort(bool ascendent) {
	TestQuickSort(0, this->ListCount - 1, ascendent);
}

void Sort::BubbleSort(bool ascendent) {
	bool Swapped;
	do {
		Swapped = true;
		for (unsigned int i = 0; i < this->ListCount - 1; i++)
			if ((this->List[i] > this->List[i + 1]) == ascendent) {
				int Aux = this->List[i];
				this->List[i] = this->List[i+1];
				this->List[i+1] = Aux;
				Swapped = false;
			}
	} while (!Swapped);
}

void Sort::Print() {
	for (unsigned int i = 0; i < this->ListCount; i++)
		std::cout << this->List[i] << ' ';
}

int Sort::GetElementsCount() {
	return this->ListCount;
}

int Sort::GetElementFromIndex(int index) {
	return this->List[index];
}