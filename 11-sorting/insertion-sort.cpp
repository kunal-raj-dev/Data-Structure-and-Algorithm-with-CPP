// INSERTION SORT APPROACH
// Time Complexity : O(n^2)
// Space Complexity : O(1)

#include <iostream>
using namespace std;

void printArray(int arr[] , int n){
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[] , int n){
    for(int i=0; i<n-1; i++){
        int curr = i+1;
        for(int j=i ; j>=0; j--){
            if(arr[j] > arr[curr]){
                swap(arr[j],arr[curr]);
                curr--;
            } else{
                break;
            }
        }
    }
    printArray(arr , n);
}


void insertionSort_while(int arr[] , int n) {
    for(int i=1; i<n; i++){
        int curr = i;
        int j = i-1;
        while (j>=0 && arr[j] > arr[curr]) {
            swap(arr[j] , arr[curr]);
            curr--;
            j--;
        }
    }
    printArray(arr , n);
}

// optimized code

// OPTIMIZED INSERTION SORT APPROACH (Shift Method)
// Time Complexity : O(n^2) Worst/Average, O(n) Best Case
// Space Complexity : O(1)

void insertionSortOptimized(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        // STEP 1: Lift the target element completely out of the array
        int temp = arr[i]; 
        int j = i - 1;

        // STEP 2: Shift larger elements one space to the right
        // We do not swap! We just copy the left value into the right slot.
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j]; 
            j--;
        }
        
        // STEP 3: Drop the temp value into the gap we created
        arr[j + 1] = temp; 
    }
}




int main(){
    int arr[] = {5, 4 , 1 , 3 , 2};
    int n = sizeof(arr) / sizeof(int);

    insertionSort(arr,n);
    insertionSort_while(arr,n);

    insertionSortOptimized(arr, n);
    printArray(arr , n);
    

    return 0;
}