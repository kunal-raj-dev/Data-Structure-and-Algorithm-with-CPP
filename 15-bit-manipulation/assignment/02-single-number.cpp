// 136. Single Number (Easy)
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

// Example 1:
// Input: nums = [2,2,1]
// Output: 1

// Example 2:
// Input: nums = [4,1,2,1,2]
// Output: 4

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> & nums) {
    int answer = 0;
    for(int i=0; i<nums.size(); i++) {
        answer ^= nums[i];
    }
    return answer;
}


int main() {
    vector <int> arr = {4,1,2,1,2};
    cout << singleNumber(arr) << endl;

    return 0;
}

// | i     | nums[i] | Expression | answer |
// | ----- | ------- | ---------- | ------ |
// | Start | -       | -          | 0      |
// | 0     | 4       | 0 ^ 4      | 4      |
// | 1     | 1       | 4 ^ 1      | 5      |
// | 2     | 2       | 5 ^ 2      | 7      |
// | 3     | 1       | 7 ^ 1      | 6      |
// | 4     | 2       | 6 ^ 2      | 4      |
