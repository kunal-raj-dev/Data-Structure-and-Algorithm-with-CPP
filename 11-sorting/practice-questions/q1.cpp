// INSERTION SORT APPROACH
// Time Complexity : O(n^2)
// Space Complexity : O(1)

// Qs. Sort this array of characters using insertion sort in descending order.

// char ch[]={'f', 'b','a','e','c', 'd']

#include <iostream>
using namespace std;

void printArray(char *arr, int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void insertionSort(char *arr, int n) {
    for(int i=1; i<n; i++) {
        int curr = i;
        for (int j=i-1; j>=0; j--) {
            if (arr[j] > arr[curr]) {
                swap(arr[j], arr[curr]);
                curr--;
            }
        }
    }
}

int main() {
    char ch[] = {'f','b','a','e','c', 'd'};
    int n = sizeof(ch) / sizeof(ch[0]);

    insertionSort(ch, n);
    printArray(ch, n);

}