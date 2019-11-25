#include <iostream>
using namespace std;
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
    
    const int SIZE = 200;
    int arr[SIZE];
    for(int i = 0; i < SIZE; i++) {
        arr[i] = i+10;
    }
    int key;
    cout << "Enter a Value to Search : ";
    cin >> key;
    binary_search(arr, SIZE, key);
    return 0;
}