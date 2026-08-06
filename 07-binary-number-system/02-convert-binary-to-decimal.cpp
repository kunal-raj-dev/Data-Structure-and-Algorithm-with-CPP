// Qs. WAF to convert a Binary Number to its Decimal equivalent.
// Algorithm:
// 1. Extract last digit of binary number using (binNum % 10).
// 2. Multiply digit with positional power of 2 (2^0, 2^1, 2^2, ...).
// 3. Add to result decimal sum.
// 4. Update binary number: binNum /= 10.
// 5. Repeat until binNum becomes 0.

#include <iostream>
using namespace std;

int binToDecimal(int binNum) {
    int decNum = 0;
    int pow = 1; // 2^0 = 1

    while (binNum > 0) {
        int lastDigit = binNum % 10;
        decNum += (lastDigit * pow);

        pow *= 2;        // update power of 2
        binNum /= 10;    // remove last digit
    }

    return decNum;
}

int main() {
    cout << "Binary (101)  -> Decimal: " << binToDecimal(101) << endl;   // 5
    cout << "Binary (1001) -> Decimal: " << binToDecimal(1001) << endl;  // 9
    cout << "Binary (1111) -> Decimal: " << binToDecimal(1111) << endl;  // 15
    cout << "Binary (1010) -> Decimal: " << binToDecimal(1010) << endl;  // 10

    return 0;
}
