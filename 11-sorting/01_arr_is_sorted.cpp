// # LINEAR SCAN APPROACH
// # Time Complexity : O(n)
// # Space Complexity : O(1)

#include <iostream>
using namespace std;

int isSorted(int *arr, int n) {
    for (int i=0; i<n-1; i++) {
        if (arr[i] > arr[i+1]) {
            cout << "Array is not sorted" << endl;
            return false;
        }
    }
    cout << "Array already sorted" << endl;
    return true;
}

int main(){
    int arr[] = {3,4,1,5,2};
    int n = sizeof(arr) / sizeof(int);

    isSorted(arr, n);
    int arr1[] = {1,2,3,4,5};
    int n1 = sizeof(arr) / sizeof(int);
    isSorted(arr1, n1);
}