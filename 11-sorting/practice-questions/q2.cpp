// SORTING APPROACHES
// Bubble Sort: Time Complexity : O(n^2) | Space Complexity : O(1)
// Selection Sort: Time Complexity : O(n^2) | Space Complexity : O(1)
// Insertion Sort: Time Complexity : O(n^2) | Space Complexity : O(1)
// Counting Sort: Time Complexity : O(n + k) | Space Complexity : O(k)

// Question 1 : Use the following sorting algorithms to sort an array in DESCENDING
// order :
// a. Bubble Sort
// b. Selection Sort
// c. Insertion Sort
// d. Counting Sort
// You can use this array as an example : [3, 6, 2, 1, 8, 7, 4, 5, 3, 1]


#include <iostream>
#include <climits>
using namespace std;

void printArray(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void bubbleSort() {
    int arr[] =  {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i<n-1 ; i++) {
        for (int j=0; j<n-1-i; j++) {
            if (arr[j] < arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    printArray(arr, n);
}

void selectionSort() {
    int arr[] =  {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i<n-1 ; i++) {
        int min_index = i;
        for (int j=i+1; j<n; j++) {
            if (arr[min_index] < arr[j]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
    printArray(arr, n);
}

void insertionSort() {
    int arr[] =  {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=1; i<n; i++) {
        int curr = i;
        for (int j=i-1; j>=0; j--) {
            if (arr[j] < arr[curr]) {
                swap(arr[j], arr[curr]);
                curr--;
            }
        }
    }
    printArray(arr, n);
}

void countingSort() {
    int arr[] =  {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min_value = INT_MAX;
    int max_value = INT_MIN;

    for (int i=0; i<n; i++) {
        min_value = min(arr[i], min_value);
        max_value = max(arr[i], max_value);
    }
    // cout << min_value << " " << max_value;

    int freq[100000] = {};
    for (int i=0; i<n; i++) {
        freq[arr[i]]++;
    }
    // printArray(freq, n);

    int index = 0;
    for (int i=max_value; i>=min_value; i--) {

        for(int j=0; j<freq[i] && freq[i] != 0 ; j++) {
            arr[index] = i;
            index++;
        }
    }
    printArray(arr, n);
}

int main() {
    bubbleSort();
    selectionSort();
    insertionSort();
    countingSort();

    return 0;
}