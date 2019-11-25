#include <iostream>

// Including Integer List
#include "list.hpp"

int main() 
{
    // Declaring Int List Object
    IntList l;
    // Operations performed on Int List
    l.push_back(10);
    l.push_back(11);
    l.push_back(12);
    l.push_back(13);
    l.push_back(14);

    // Declaring an Iterator from Int List
    IntList::Iterator it;
    it = l.begin();

    // Iterating the Int List
    while (it != l.end())
    {
        std::cout  << *it  << "\n";
        it++;
    }

}