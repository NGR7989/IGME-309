// A01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PriorityQueue.h"

int main()
{
    PriorityQueue<int> *test = new PriorityQueue<int>();

    test->Push(5);
    test->Push(7);
    test->Push(3);

    test->Print();

    std::cout << std::endl;
    test->Pop();
    std::cout << "Size: " << test->GetSize() << std::endl;
    test->Print();
}
