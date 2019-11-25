#include <iostream>
using namespace std;
//insert Method
void insert(int z[], int S, int I, int K) {
    for(int i = S-1; i >= I; i-- ) {
        z[i] = z[i-1];
    }
    z[I] = K;
}
//Main Method
int main() {
    const int SIZE = 10;
    int arr[SIZE] = {2,3,4,5,6,7,8,9,10};
    int index, key;
    cout << "Enter a Value and Location to Insert : ";
    cin >> index >> key;
    insert(arr, SIZE, index, key);
    for(int i=0; i<SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}