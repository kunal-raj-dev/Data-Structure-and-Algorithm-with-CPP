// BRUTE FORCE APPROACH
// Time Complexity : O(n^3)
// Space Complexity : O(1)

#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,-3,6,-5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    for (int i=0; i<n; i++) {

        int start = i;
        int end = i;

        while (end < n) {
            int sum = 0;
            for (int j=start; j<=end; j++) {
                sum += arr[j];
            }
            cout << sum << ", ";
            end ++;
          }
          cout << "\n";
    }
    return 0;
}
