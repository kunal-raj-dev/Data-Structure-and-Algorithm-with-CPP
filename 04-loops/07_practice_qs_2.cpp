// Practice Qs 2: Reverse of a given number
#include <iostream>
using namespace std;

int main() {
    int n = 10829;
    int rev = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        rev = (rev * 10) + lastDigit;
        n = n / 10;
    }

    cout << "Reversed number: " << rev << endl;

    return 0;
}
