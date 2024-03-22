/*
	Write a class in C++ that has the following definition:

        class NumberList
        {
            int numbers[10];
            int count;
        public:
            void Init();          // count will be 0
            bool Add(int x);      // adds X to the numbers list and increase the data member count.
                                  // if count is bigger or equal to 10, the function will return false
            void Sort();          // will sort the numbers vector
            void Print();         // will print the current vector
        }

    Organize the code in the following way:
    - a header file called NumberList.h
    - a cpp file called NumberList.cpp that contains the source code for class NumberList
    - a main file called main.cpp that contains the main function and has an example on how to use NumberList.
     The example must include using all methods from the class. make sure that precompile headers are NOT used (for Visual Studio setup).
*/

#include "NumberList.h"

int main() {
    NumberList array;
    int testLength, testArray[101];

    std::cin >> testLength;
    for (unsigned int i = 0; i < testLength; i++)
        std::cin >> testArray[i];

    array.Init();

    for (unsigned int i = 0; i < testLength; i++)
        array.Add(testArray[i]);

    array.Sort();
    array.Print();

    return 0;
}