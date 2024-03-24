#pragma once

#include <iostream>
#include <cstdarg>

class Sort
{
    // Add data members
    int ListCount;
    int* List = new int[100];

    // Functions for QuickSort
    int Partition(int Left, int Right, bool ascendent);
    void TestQuickSort(int Left, int Right, bool ascendent);
public:
    // Add constructors
    Sort(int Count, int Min, int Max);
    Sort(std::initializer_list<int> InitList);
    Sort(int* Array, int ArrayCount);
    Sort(int Count, ...);
    Sort(std::string String);
   
    // Functions
    void InsertSort(bool ascendent);
    void QuickSort(bool ascendent);
    void BubbleSort(bool ascendent);
    void Print();
    int GetElementsCount();
    int GetElementFromIndex(int index);
};