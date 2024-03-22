#include "NumberList.h"

void NumberList::Init() {
	count = 0;
}

// A little change. If the 'size' variable is exceeded, we double it. 
void NumberList::Add(int x) {
	if (size > count) numbers[count++] = x;
	else {
		size = size * 2;
		int* tmp = new int[size];
		for (unsigned int i = 0; i < count; i++)
			tmp[i] = numbers[i];
		numbers = tmp;
		numbers[count++] = x;
	}
}

void NumberList::Sort() {
	for (unsigned int i = 0; i < count - 1; i++)
		for (unsigned int j = i + 1; j < count; j++)
			if (numbers[i] > numbers[j]) {
				int aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
}

void NumberList::Print() {
	for (unsigned int i = 0; i < count; i++)
		std::cout << numbers[i] << ' ';
}