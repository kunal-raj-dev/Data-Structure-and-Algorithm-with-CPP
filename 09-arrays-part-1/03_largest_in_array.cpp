#include <iostream>
using namespace std;

int main(){
    int arr[5] = {45, 7, 18, 99, 20};
    int n = sizeof(arr) / sizeof(int);

    int largest = arr[0];

    for (int i=1; i<n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout<< "Largest number in array is "<<largest;
    return 0;
}