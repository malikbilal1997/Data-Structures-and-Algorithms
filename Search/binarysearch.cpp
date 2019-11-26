#include <iostream>

// Define the Array size
#define ARRAY_SIZE 10


void binary_search(int array[], int size, int key)
{
    // Find low point, high point and mid of Array
    int low = size-size, high = size-1, mid;
    bool found = false;

    // Repeat unless Values is Found AND low point do not become greater than high point 
    while(!found && low <= high)
    {
        mid = (low + high)/2;
        // Checking if mid of Array is the key
        if(key == array[mid])
        {
            std::cout << "Value found at " << mid << '\n';
            found = true;
        }
        // If key is greater than the mid of array then new low point is mid + 1.
        else if(key > array[mid])
        {
            low = mid+1;
        }
        // If key is smaller than the mid of array then new high point is mid - 1.
        else
        {
            high = mid-1;
        }
    }
    if(found == false)
    {
        std::cout << "Value not found." << '\n';
    }
}

int main() {
    
    // Array must me sorted for Binary Search
    int key, array[ARRAY_SIZE] = { 2, 4, 6, 10, 18, 20, 25, 30, 44, 90 };

    // Getting a Value to Search in Array
    std::cout << "Enter a Value to Search : ";
    std::cin >> key;

    binary_search(array, ARRAY_SIZE, key);
}