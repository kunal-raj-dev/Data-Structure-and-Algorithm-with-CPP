// BRUTE FORCE APPROACH
// Time Complexity : O(n)
// Space Complexity : O(1)

// WAF to print if a number is prime or not
#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i=2; i*i<=number; i++) {
        if (number%i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    cout << isPrime(13) << endl;
    cout << isPrime(14) << endl;

    return 0;
}