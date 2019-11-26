#include <iostream>

#define ARRAY_SIZE 10

void bubble_sort(int array[], int size)
{
    // flag for checking that no more swapping is done.
    bool flag;
    // Repeat until sorting is done
    do
    {
        flag = false;
        for(int i=0; i<size-1; i++)
        {
            // If first value in pair is greater swap each other
            if(array[i] > array[i+1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                flag = true;
            }
        }
    } while(flag);
}

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

int main()
{
    int array[ARRAY_SIZE], key;
    
    // Getting some values for Array
    std::cout << "Enter 10 random values : ";
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cin >> array[i];
    }
    // Getting the value to Search
    std::cout << "Enter a value to search : ";
    std::cin >> key;

    // Sorting before doing Binary Search
    bubble_sort(array, ARRAY_SIZE);
    binary_search(array, ARRAY_SIZE, key);
}