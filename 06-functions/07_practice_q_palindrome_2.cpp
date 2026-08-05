// Question 1 : Write a function to check if a number is a palindrome in C++.
// (121 is a palindrome, 321 is not)

#include <iostream>
#include <string>
using namespace std;

int numReverse(int number) {
    int rev = 0;

    while (number > 0) {
        int lstDigit = number % 10; // get last digit via remainder
        rev = rev*10 + lstDigit; // updating reverse
        number /= 10; // removing last digit from number
    }

    return rev;
}

bool isPalindrome(int number) {
    return number == numReverse(number);
}

int main() {
    int num1 = 123321;
    int num2 = 12345;
    
    cout << num1 << " is " << (isPalindrome(num1) ? "a palindrome" : "NOT a palindrome") << endl;
    cout << num2 << " is " << (isPalindrome(num2) ? "a palindrome" : "NOT a palindrome") << endl;

    return 0;
}