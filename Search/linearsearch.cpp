#include <iostream>

// Define the size of ARRAY
#define ARRAY_SIZE 10


// Perform Linear Search on Array
void search(int array[], int value, int size)
{
    bool flag = false;
    for(int i = 0; i < size; i++)
    {
        if(array[i] == value)
        {
            std::cout << "Value found at " << i << '\n';
            flag = true;
            break;
        }
    }
    if(flag == false)
    {
        std::cout << "Value not found." << '\n';
    }    
}

int main() {
    int value, array[ARRAY_SIZE] = {19, 16, 22, 87, 92, 23};
    // Getting value to search
    std::cout << "Enter a value to Search : ";
    std::cin >> value;

    search(array, value, ARRAY_SIZE);
    return 0;
}