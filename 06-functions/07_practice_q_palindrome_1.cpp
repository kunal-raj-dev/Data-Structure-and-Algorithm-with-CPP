// TWO POINTERS APPROACH
// Time Complexity : O(n)
// Space Complexity : O(1)

// Question 1 : Write a function to check if a number is a palindrome in C++.
// (121 is a palindrome, 321 is not)

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int number) {
    string str = to_string(number);
    int len = str.size();
    int left = 0;
    int right = len - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main(){
    int num1 = 12321;
    int num2 = 54321;

    cout << num1 << " is " << (isPalindrome(num1) ? "a palindrome" : "NOT a palindrome") << endl;
    cout << num2 << " is " << (isPalindrome(num2) ? "a palindrome" : "NOT a palindrome") << endl;

    return 0;
}