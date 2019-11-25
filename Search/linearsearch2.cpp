#include <iostream>
using namespace std;
//lsearch Method
void search(int farr[], int fvalue, int size) {
    bool flag = false;
    for(int i = size-size; i < size; i++) {
        if(fvalue == farr[i]) {
            cout   << "Value found at " << i << endl;
            flag = true;
            break;
         }
    }
    if(flag == false) {
        cout << "Value not found." << endl;
    }
    
}

int main() {
    int arr[6] = {19, 16, 22, 87, 92, 23}, value;
    cout << "Enter a Value to Search : "; cin >> value;
    search(arr, value, 6);
    return 0;
}