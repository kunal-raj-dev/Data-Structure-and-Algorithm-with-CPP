// TWO POINTERS APPROACH
// Time Complexity : O(n)
// Space Complexity : O(1)

#include <iostream>
using namespace std;


void printArr(int *arr, int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << ", ";
    }
    cout<<endl;
}

void reverse_via_for(int *arr, int n) {
    for (int i=0; i<(n/2); i++) {
        swap(arr[i],arr[n-i-1]);
    }
}

void reverse_via_while(int *arr, int n) {
    int start = 0;
    int end = n-1;
    while (start < end) {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr [] = {23, 445,68,12,2};
    int n = sizeof(arr) / sizeof(int);

    reverse_via_for(arr, n);
    printArr(arr, n);

    reverse_via_while(arr, n);
    printArr(arr, n);

    return 0;
}