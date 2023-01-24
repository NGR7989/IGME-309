// A01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PriorityQueue.h"
#include "Alberto.h"

int main()
{
    // Example using int
    PriorityQueue<int> *test = new PriorityQueue<int>();

    test->Push(5);
    test->Push(7);
    test->Push(3);

    test->Print();

    std::cout << std::endl;
    std::cout << "Pop! " << std::endl;
    test->Pop();
    std::cout << "Size: " << test->GetSize() << std::endl;
    test->Print();

    std::cout << std::endl;
    std::cout << "Albertos:" << std::endl;
    // Example using Albertoclass
    PriorityQueue<AlbertoClass>* albertos = new PriorityQueue<AlbertoClass>();

    albertos->Push(AlbertoClass(10));
    albertos->Push(AlbertoClass(50));
    albertos->Push(AlbertoClass(20));

    albertos->Print();

    std::cout << std::endl;
    std::cout << "Pop! " << std::endl;
    albertos->Pop();
    std::cout << "Size: " << albertos->GetSize() << std::endl;
    albertos->Print();
}
