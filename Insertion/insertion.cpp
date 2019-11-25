#include <iostream>

// Defines the size of Array
#define ARRAY_SIZE 10

void insert(int array[], int size, int index, int key)
{
    // Staring from last index move values to next index upto location
    for(int i = size-1; i >= index; i--)
    {
        array[i] = array[i-1];
    }
    array[index] = key;
}

int main()
{    
    int index, key, array[ARRAY_SIZE] = {2, 3, 4, 5, 6};

    // Display content of Array before Insertion
    for(int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';

    // Getting Location and Value for insertion
    std::cout << "Enter Location & Value : ";
    std::cin >> index >> key;
    insert(array, ARRAY_SIZE, index, key);

    // Display content of Array after Insertion
    for(int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
}