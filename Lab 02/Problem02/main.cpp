/*
	Design a C++ class (following the previous problem) that reflects the properties of a student. The class should include the following:
	- methods to set and get the name of the student
	- methods to set and get the grade for mathematics (a grade must be a float value from 1 to 10)
	- methods to set and get the grade for English (a grade must be a float value from 1 to 10)
	- methods to set and get the grade for History (a grade must be a float value from 1 to 10)
	- a method that retrieves the average grade
	- 5 global functions that compares two students in terms of name, grades, average.
	  If two students are equal the return value of such a function will be 0.
	  If the first student is bigger than the second one, the return value will be 1, otherwise -1.
	
	Make sure that you have the following:
	- a header file for the class
	- a cpp file for the methods specific to the class
	- a header file for the global functions
	- a cpp file for the global functions implementation
	- a main.cpp file that shows how the methods and global functions can be used.
*/

#include "Functions.h"

int main() {
	Student Students[2];
	char* Name1 = new char[256]; char* Name2 = new char[256];
	float Math1, English1, History1, Math2, English2, History2;

	// Input
	std::cout << "Students' names and their grades:" << '\n';

	std::cout << '\n' << "Student No. 1:" << '\n';
	std::cin.getline(Name1, 256);
	std::cin >> Math1 >> English1 >> History1;

	std::cin.get();
	std::cout << '\n' << "Student No. 2:" << '\n';
	std::cin.getline(Name2, 256);
	std::cin >> Math2 >> English2 >> History2;
	
	// Name - Setter
	Students[0].Set_Name(Name1); Students[1].Set_Name(Name2);

	// Math Grade - Setter
	Students[0].Set_Math_Grade(Math1); Students[1].Set_Math_Grade(Math2);

	// English Grade - Setter & Getter
	Students[0].Set_English_Grade(English1); Students[1].Set_English_Grade(English2);

	// History Grade - Setter
	Students[0].Set_History_Grade(History1); Students[1].Set_History_Grade(History2);

	// Name - Getter & Average Grade
	std::cout << '\n' << Students[0].Get_Name() << ": " << Students[0].Get_Average_Grade();
	std::cout << '\n' << Students[1].Get_Name() << ": " << Students[1].Get_Average_Grade() << '\n';

	// Comparisons
	std::cout << Compare_by_Name(Students) << ' ' << Compare_by_Math_Grade(Students) << ' ' << Compare_by_English_Grade(Students) << ' ' << Compare_by_History_Grade(Students) << ' ' << Compare_by_Average_Grade(Students);
}