// BRUTE FORCE APPROACH
// Time Complexity : O(n^3)
// Space Complexity : O(1)

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {2,-3,6,-5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    int maxSum = INT_MIN; 
    int maxSum_st = 0;
    int maxSum_end = 0;


    for (int i=0; i<n; i++) {

        int start = i;
        int end = i;

        while (end < n) {
            int sum = 0;
            for (int j=start; j<=end; j++) {
                sum += arr[j];
            }
            if (sum > maxSum) {
                maxSum = sum;
                maxSum_st = start;
                maxSum_end = end;
            }
            end ++;
          }
    }

    cout << "Maximum sum of subarray [";

    for (int k=maxSum_st; k<=maxSum_end; k++) {
        cout << arr[k] << ", ";
    }
    cout << "] = " << maxSum;

    return 0;
}
