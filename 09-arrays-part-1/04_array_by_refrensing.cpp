#include <iostream>
using namespace std;

void printArray(int *arr, int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] << endl;
    }
}


int main(){
    int arr [] = {11,22,33,44,55};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
    return 0;
}