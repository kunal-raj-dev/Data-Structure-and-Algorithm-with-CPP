// BINARY SEARCH APPROACH (in sorted)
// Time Complexity : O(log n)
// Space Complexity : O(1)

#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key) {
    int start = 0, end = n-1;
    while (start <= end) {
        int mid = (start + end) /2;
        if (key == arr[mid]) {
            return mid;
        }
        else if (key < arr[mid]) {
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    return -1;
}


int main(){
    int arr [] = {23, 56, 87, 3,12};
    int  n = sizeof(arr) / sizeof(int);

    cout << binarySearch(arr, n, 87);
    return 0;
}