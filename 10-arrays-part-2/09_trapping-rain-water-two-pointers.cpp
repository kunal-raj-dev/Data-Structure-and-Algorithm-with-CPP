// TWO POINTERS APPROACH
// Time Complexity : O(n)
// Space Complexity : O(1)

#include <iostream>
#include <climits>
using namespace std;

int  trapWater(int *arr, int n){
    int waterCollect = 0;
    int left = 0;
    int right = n-1;
    int leftMax= arr[0];
    int rightMax= arr[n-1];
    while (left <= right) {
        if (leftMax < rightMax) {
            leftMax = max(leftMax, arr[left]);
            waterCollect += leftMax-arr[left];
            left++;
        }
        else {
            rightMax = max(rightMax, arr[right]);
            waterCollect += rightMax-arr[right];
            right--;
        }
    }
    return waterCollect;
}


int main(){
    int height[] = {4,2,0,6,3,2,5};
    int n = sizeof(height) / sizeof(int);

    cout<<"Water trapped = "<< trapWater(height, n);


    return 0;
}