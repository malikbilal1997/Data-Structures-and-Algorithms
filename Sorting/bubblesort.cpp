#include <iostream>
using namespace std;

void bubble_sort(int z[], int S) {
    bool flag;
    do {
        flag = false;
        for(int i=0; i<S-1; i++) {
            if(z[i] > z[i+1]) {
                int temp = z[i];
                z[i] = z[i+1];
                z[i+1] = temp;
                flag = true;
            }
        }
    } while(flag);
}
// Main Method
int main() {
    const int SIZE = 11;
    int arr[SIZE] = {12, 19, 11, 8, 9, 76, 66, 11, 7, 1, 1};
    bubble_sort(arr, SIZE);
    for(int i=0; i<SIZE; i++) cout << arr[i] << " ";
    cout << endl;
}