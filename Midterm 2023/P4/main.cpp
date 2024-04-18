#include "SingleLinkedList.h"

void print(const int& value) { printf("%d ", value); }

int main() {
	SingleLinkedList<int> s; 
	(((s += 10) += 20) += 30); 
	s.print(print); 
	if (s && 20) {
		printf("\n 20 is in the list !");
	}
	if (!(s && 25)) {
		printf("\n 25 is not in the list !"); 
	}
	while (s) {
		printf("\n%d", s.pop_first());
	}
}