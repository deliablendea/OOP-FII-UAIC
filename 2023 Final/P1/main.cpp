#include <iostream>
#include <string>
#include "Sentence.h"
#include "ComputeVowals.h"
#include "CountLetter.h"
#include "LongestWord.h"

int main() {
    Sentence s("Second POO test");
    (s += new ComputeVowals("Voc")) += new CountLetter("CountE", [](char ch) { return ch == 'e'; });
    s += new LongestWord("long");
    s.ListAll();
    std::cout << "=====================" << std::endl;
    s.RunAll();
    std::cout << "=====================" << std::endl;
    s.Run("CountE");
    return 0;
}

/*
    Name:Voc
    Name:CountE
    Name:long
    =====================
    Name:Voc => 5
    Name:CountE => 2
    Name:long => 6
    =====================
    2
*/