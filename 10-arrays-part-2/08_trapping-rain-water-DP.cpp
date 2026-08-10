// DYNAMIC PROGRAMMING APPROACH
// Time Complexity : O(n)
// Space Complexity : O(n)

#include <iostream>
#include <climits>
using namespace std;

int  trapWater(int *arr, int n){

    int leftMax[10000] = {};
    int currMax = arr[0];
    for (int i=0; i<n; i++) {
        currMax = max(currMax, arr[i]);
        leftMax[i] = currMax;
        // cout<<currMax<<", ";
    }

    int rightMax[10000] = {};
    currMax = arr[n-1];
    for (int i=n-1; i>=0; i--) {
        currMax = max(currMax, arr[i]);
        rightMax[i] = currMax;
        cout<<currMax<<", ";
    }

    int waterCollect = 0;
    for (int i=0; i<n; i++) {
        waterCollect += min(leftMax[i], rightMax[i]) - arr[i];
    }

    return waterCollect;
}


int main(){
    int height[] = {4,2,0,6,3,2,5};
    int n = sizeof(height) / sizeof(int);

    cout<<"Water trapped = "<< trapWater(height, n);


    return 0;
}