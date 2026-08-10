// BUBBLE SORT APPROACH
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

void bubbleSort(int arr[] , int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}



int main(){
    int arr[] = {3,1,2,5,4};
    int n = sizeof(arr)/ sizeof(int);

    bubbleSort(arr,n);
    printArray(arr , n);
    

    return 0;
}
