#include <iostream>
#include <algorithm>
using namespace std;


void printArray(int arr[] , int n){
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[] = {3,1,7,5,4};
    int n = sizeof(arr)/ sizeof(int);

    sort(arr, arr+n);
    printArray(arr,n);

    sort(arr, arr+n, greater<int>());
    printArray(arr,n);    

    return 0;
}