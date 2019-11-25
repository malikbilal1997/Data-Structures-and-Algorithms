#include <iostream>
#include "list.hpp"

int main() 
{
    IntList l;
    l.push_back(10);
    l.push_back(11);
    l.push_back(12);
    l.push_back(13);
    l.push_back(14);

    IntList::Iterator it;
    it = l.begin();

    while (it != l.end())
    {
        std::cout  << *it  << "\n";
        it++;
    }

}