#include <iostream>
using namespace std;
//bubble_sort Method
void bubble_sort(int z[], int S) {
    bool flag; // flag for checking that no more swapping is done so terminate loop.
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
//binary_search Method
void binary_search(int z[], int S, int K) {
    int low = S-S, high = S-1, mid;
    bool found = false;
    while(!found && low <= high) {
        mid = (low + high)/2;
        if(K == z[mid]) {
            cout << "Value found at " << mid << endl;
            found = true;
        }
        else if(K > z[mid]) {
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    if(found == false) {
        cout << "Value not found." << endl;
    }
}
//Main Method
int main() {
    int const SIZE = 10;
    int arr[SIZE], key;
    cout << "Enter 10 random values : ";
    for(int i=0; i<SIZE; i++) cin >> arr[i];
    cout << "Enter a value to search : ";
    cin >> key;
    bubble_sort(arr, SIZE);
    binary_search(arr, SIZE, key);
}