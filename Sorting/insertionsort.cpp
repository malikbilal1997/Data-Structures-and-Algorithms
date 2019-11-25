#include <iostream>
using namespace std;

void insertion_sort(int x[], int s) {
    int temp;
    for(int i=1, j;i<s;i++) {
        temp = x[i];
        j=i;
        while(j>0 && x[j-1] > temp) {
            x[j] = x[j-1];
            j=j-1;
        }
        x[j] = temp;
    
    }

}
//Main Method
int main() {
    const int SIZE = 10;
    int arr[SIZE] = {4, 1, 9, 8, 3, 2, 6, 5, 10, 7};
    insertion_sort(arr, SIZE);
    for(int i=0; i<SIZE; i++) cout << arr[i] << " ";
    cout << endl;
}