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



int main(){
    int arr[] = {5, 4 , 1 , 3 , 2};
    int n = sizeof(arr) / sizeof(int);

    insertionSort(arr,n);
    insertionSort_while(arr,n);
    

    return 0;
}