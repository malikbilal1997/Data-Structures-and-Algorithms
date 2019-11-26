#include <iostream>

// Defines the Array size
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

int main()
{
    // An unsorted Array
    int array[ARRAY_SIZE] = { 12, 19, 11, 8, 9, 76, 66, 11, 7, 1 };
    bubble_sort(array, ARRAY_SIZE);

    // Displaying content of Array after sorting
    for(int i=0; i<ARRAY_SIZE; i++) 
    {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
}