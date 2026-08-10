// COUNTING SORT APPROACH
// Time Complexity : O(n + k)
// Space Complexity : O(k)

#include <iostream>
#include <climits>
using namespace std;

void printArray(int arr[] , int n){
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countingSort(int *arr, int n) {
    int min_value = INT_MAX;
    int max_value = INT_MIN;

    // range = max -min
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
    for (int i=min_value; i<=max_value; i++) {

        for(int j=0; j<freq[i] && freq[i] != 0 ; j++) {
            arr[index] = i;
            index++;
        }
    }
    printArray(arr, n);
}


int main(){
    int arr[] = {5, 4 , 1 , 3 , 2};
    int n = sizeof(arr) / sizeof(int);

    countingSort(arr,n);

    return 0;
}