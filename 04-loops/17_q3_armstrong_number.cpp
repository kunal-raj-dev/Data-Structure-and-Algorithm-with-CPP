// Question 3 : WAP to input a number and check whether the number is an Armstrong number or not.
// An Armstrong number is a number that is equal to the sum of cubes of its digits.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int num = n;
    int sumOfCubes = 0;

    while (num > 0) {
        int lastDigit = num % 10;
        sumOfCubes += (lastDigit * lastDigit * lastDigit);
        num /= 10;
    }

    if (sumOfCubes == n) {
        cout << n << " is an Armstrong number" << endl;
    } else {
        cout << n << " is not an Armstrong number" << endl;
    }

    return 0;
}
