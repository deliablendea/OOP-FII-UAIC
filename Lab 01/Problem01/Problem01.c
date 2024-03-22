/*
    Write a program in C-Language that open the file "in.txt", and prints the sum of the numbers that are found on each line
    of the file "in.txt". To open the file use fopen API. Write your own function that converts a string to a number (similar
    cu atoi API). To print something to the screen, use the printf API.

    Example: let's consider the following "ini.txt" file:
    123
    198698
    5009
    983279
    The program will print to the screen 1187109.
*/

#include <stdio.h>

char Number[101];
int ConvertedNumber = 0, Sum = 0;

int main() {
    FILE* fp;
    fp = fopen("in.txt", "r");

    while (fgets(Number, sizeof(Number), fp) != NULL) {
        ConvertedNumber = 0;
        for (int i = 0; Number[i]; i++)
            if (Number[i] >= '0' && Number[i] <= '9')
                ConvertedNumber = ConvertedNumber * 10 + (Number[i] - '0');
        Sum = Sum + ConvertedNumber;
    }

    printf("%d", Sum);

    fclose(fp);
    return 0;
}