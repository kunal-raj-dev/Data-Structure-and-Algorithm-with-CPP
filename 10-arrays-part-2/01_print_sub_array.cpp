// BRUTE FORCE APPROACH
// Time Complexity : O(n^3)
// Space Complexity : O(1)

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    for (int i=0; i<n; i++) { //0 1 2 3 4
        int start = i;
        int end = i;
        while (end < n) {
            cout << "[";
            for (int j=start; j<=end; j++) {
                cout << arr[j] << " ";
            }
            cout << "] " ;
            end ++;
          }
          cout << "\n";
    }

    

    return 0;
}
