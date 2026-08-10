// SELECTION SORT APPROACH
// Time Complexity : O(n^2)
// Space Complexity : O(1)

#include <iostream>
#include <climits>
using namespace std;


void printArray(int arr[] , int n){
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int *arr, int n) {
    for (int i=0; i<n-1; i++) {
        int min_index = i;
        for (int j=i+1; j<n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[i] , arr[min_index]);
    }
}

int main(){
    int arr[] = {3,1,2,5,4};
    int n = sizeof(arr)/ sizeof(int);

    selectionSort(arr,n);
    printArray(arr , n);
    

    return 0;
}