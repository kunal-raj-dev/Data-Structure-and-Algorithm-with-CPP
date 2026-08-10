# BRUTE FORCE APPROACH - PREFIX SUM STYLE
# Time Complexity : O(n^2)
# Space Complexity : O(1)

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {2,-3,6,-5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    int maxSum = INT_MIN; 


    for (int start=0; start<n; start++) {
        int currSum = 0;
        for(int end=start; end<n; end++ ) {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
          }
    }

    cout << "Maximum sum of subarray = "<< maxSum;

    return 0;
}
