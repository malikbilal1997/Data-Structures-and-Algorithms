#include <iostream>

// Defines the size of Array
#define ARRAY_SIZE 5


int main()
{
    int index, array[ARRAY_SIZE] = { 2, 4, 6, 8, 10 };

    // Display Array content before deletion
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';

    // Getting an index to delete
    std::cout << "Enter index to delete : ";
    std::cin >> index;
    
    // Moving next index value to previous index
    for(int i = index; i < ARRAY_SIZE-1; i++) {
        array[i] = array[i+1];
    }

    array[ARRAY_SIZE-1] = 0;

    // Display Array content after deletion
    for(int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
    
}