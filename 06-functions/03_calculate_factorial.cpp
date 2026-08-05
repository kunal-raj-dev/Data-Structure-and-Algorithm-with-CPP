// Qs. WAF to print the factorial of a number, n.
#include <iostream>
using namespace std;

int calFactorial(int number) {
    int fact = 1;

    for (int i=1; i<=number; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    cout << calFactorial(4);

    return 0;
}