// Question 2 : Write a function to calculate the sum of digits of a number.

#include <iostream>
using namespace std;

int digitSum(int number) {
    int sum = 0;
    while (number > 0) {
        int lstDigit = number%10;
        sum = sum + lstDigit;
        number = number / 10;
    }

    return sum;
}

int main(){
    cout << "sum of digit of 126 = "<<digitSum(126)<<endl;
    cout << "sum of digit of 905 = "<<digitSum(905)<<endl;

    return 0;
}