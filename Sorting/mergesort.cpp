#include <iostream>
#define SIZE 10
using namespace std;
//merge Method
void merge(int A[], int L[], int Llen, int R[], int Rlen) {
    int l = 0;
    int r = 0;
    for (int i = 0; i < Llen + Rlen;) {
        if (l == Llen)
        A[i++] = R[r++];
        else if (r == Rlen)
        A[i++] = L[l++];
        else
        A[i++] = (R[r] > L[l]) ? L[l++] : R[r++];
    }
}
//merge_sort Method
void merge_sort(int A[], int len) {
    if (len == 1)
    return;
    int mid = len / 2;
    int* L = new int[mid];
    int* R = new int[len - mid];
    int k = 0;
    for (size_t i = 0; k < mid; i++)
    L[i] = A[k++];
    for (size_t i = 0; k < len; i++)
    R[i] = A[k++];
    merge_sort(L, mid);
    merge_sort(R, len - mid);
    merge(A, L, mid, R, len - mid);
    delete(L);
    delete(R);   
}
//Main Method
int main() {
    int arr[SIZE] = {5, 4, 1, 2, 9, 6, 8, 3, 7, 10};
    merge_sort(arr, SIZE);
    for(int i=0;i<SIZE;i++) cout << arr[i] << " ";
    cout << endl;
}