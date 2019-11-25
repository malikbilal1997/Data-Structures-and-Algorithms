#include <iostream> 
#define SIZE 5
using namespace std;
//selection_sort Method
void selection_sort(int A[], int S) {
    int temp;
    for(int i=0;i<SIZE-1;i++) {
        for(int j=i+1; j<SIZE;j++) {
            if (A[i] > A[j]) {
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
        }
    }
}
//Main Method
int main() {
    int arr[SIZE] = {3, 1 , 5, 4, 2};
    selection_sort(arr, SIZE);
    for(int i=0;i<SIZE;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}