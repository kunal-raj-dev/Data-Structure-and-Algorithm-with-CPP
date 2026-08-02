// Question 1 : WAP to find the Factorial of a number entered by the user.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial of " << n << " = " << fact << endl;

    return 0;
}
