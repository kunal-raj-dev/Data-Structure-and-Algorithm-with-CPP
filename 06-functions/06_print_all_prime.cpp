// BRUTE FORCE APPROACH
// Time Complexity : O(n^2)
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
    int n = 30;
    for (int i=2; i<=n; i++){
        bool prime = isPrime(i);
        cout<< i << " - ";
        if (prime) {
            cout << "prime\n";
        }
        else {
            cout << "non-prime\n";
        }
    }

    return 0;
}