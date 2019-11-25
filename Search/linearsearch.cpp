#include <iostream>
using namespace std;
//Main Method
int main() {
    int const SIZE = 6;
    int arr[SIZE] = {19, 16, 22, 87, 92, 23}, value;
    bool flag = false;
    cout << "Enter a Value to Search : ";
    cin >> value;
    for(int i = SIZE-SIZE; i < SIZE; i++) {
        if(value == arr[i]) {
            cout << "Value found at " << i << endl;
            flag = true;
            break;
        }
    }
    if(flag == false) {
        cout << "Value not found." << endl;
    }
    return 0;
}