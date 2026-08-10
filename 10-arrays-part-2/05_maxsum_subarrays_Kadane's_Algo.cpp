// KADANE'S ALGORITHM
// Time Complexity : O(n)
// Space Complexity : O(1)

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {2,-3,6,-5, 4, 2}; //2
    int n = sizeof(arr) / sizeof(int);

    int curSum = 0;
    int maxSum = INT_MIN;

    for (int i=0; i<n; i++) { // 2, -3, 6 , -5, 4, 2
        curSum = curSum + arr[i]; // 2 , 2+(-3)=-1, 0+6 = 6, 1, 5, 7
        maxSum = max(curSum, maxSum); // 2 , 2 , 6, 6, 6, 7
        if (curSum < 0) { // f , t, f, f, f
            curSum = 0;
        }
    }
    cout << "max sub array sum is : " << maxSum;


    return 0;
}
