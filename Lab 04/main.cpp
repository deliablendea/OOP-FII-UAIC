#include "Sort.h"

int main() {
	// First Constructor & InsertSort
	Sort TestC1(5, 10, 30);
	std::cout << "The list created by the first constructor: "; TestC1.Print(); std::cout << '\n';
	std::cout << "The number of elements in the list: " << TestC1.GetElementsCount() << '\n';
	std::cout << "The fourth element of the list: " << TestC1.GetElementFromIndex(3) << '\n';
	TestC1.InsertSort(false);
	std::cout << "InsertSort | List in descending order: "; TestC1.Print(); std::cout << "\n\n";

	// Second Constructor & QuickSort
	Sort TestC2({ 5,2,8,1,3,7,6 });
	std::cout << "The list created by the second constructor: "; TestC2.Print(); std::cout << '\n';
	std::cout << "The number of elements in the list: " << TestC2.GetElementsCount() << '\n';
	std::cout << "The second element of the list: " << TestC2.GetElementFromIndex(1) << '\n';
	TestC2.QuickSort(true);
	std::cout << "QuickSort | List in ascending order: "; TestC2.Print(); std::cout << "\n\n";

	// Third Constructor & BubbleSort
	int TestC3Array[] = { 6, 2, 4, 9, 1, 3 };
	Sort TestC3(TestC3Array, 6);
	std::cout << "The list created by the third constructor: "; TestC3.Print(); std::cout << '\n';
	std::cout << "The number of elements in the list: " << TestC3.GetElementsCount() << '\n';
	std::cout << "The fifth element of the list: " << TestC3.GetElementFromIndex(4) << '\n';
	TestC3.BubbleSort(false);
	std::cout << "BubbleSort | List in descending order: "; TestC3.Print(); std::cout << "\n\n";

	// Fourth Constructor & InsertSort
	Sort TestC4(4, 3, 1, 2, 5);
	std::cout << "The list created by the fourth constructor: "; TestC4.Print(); std::cout << '\n';
	std::cout << "The number of elements in the list: " << TestC4.GetElementsCount() << '\n';
	std::cout << "The first element of the list: " << TestC4.GetElementFromIndex(0) << '\n';
	TestC4.InsertSort(true);
	std::cout << "InsertSort | List in ascending order: "; TestC4.Print(); std::cout << "\n\n";

	// Fifth Constructor & QuickSort
	Sort TestC5("10,40,100,5,70");
	std::cout << "The list created by the fifth constructor: "; TestC5.Print(); std::cout << '\n';
	std::cout << "The number of elements in the list: " << TestC5.GetElementsCount() << '\n';
	std::cout << "The third element of the list: " << TestC5.GetElementFromIndex(2) << '\n';
	TestC5.QuickSort(true);
	std::cout << "QuickSort | List in descending order: "; TestC5.Print(); std::cout << '\n';

	return 0;
}