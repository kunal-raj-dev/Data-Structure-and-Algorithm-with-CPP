// Qs. WAF to convert a Decimal Number to its Binary equivalent.
// Algorithm:
// 1. Divide decimal number by 2 to get remainder (rem = decNum % 2).
// 2. Multiply remainder with power of 10 (10^0, 10^1, 10^2, ...) to place in binary representation.
// 3. Add to result binary number.
// 4. Update decimal number: decNum /= 2.
// 5. Update power: pow *= 10.
// 6. Repeat until decNum becomes 0.

#include <iostream>
using namespace std;

int decToBinary(int decNum) {
    int binNum = 0;
    int pow = 1; // 10^0 = 1

    while (decNum > 0) {
        int rem = decNum % 2;
        binNum += (rem * pow);

        pow *= 10;       // update power of 10
        decNum /= 2;     // divide by base 2
    }

    return binNum;
}

int main() {
    cout << "Decimal 5  -> Binary: " << decToBinary(5) << endl;   // 101
    cout << "Decimal 9  -> Binary: " << decToBinary(9) << endl;   // 1001
    cout << "Decimal 15 -> Binary: " << decToBinary(15) << endl;  // 1111
    cout << "Decimal 10 -> Binary: " << decToBinary(10) << endl;  // 1010
    cout << "Decimal 50 -> Binary: " << decToBinary(50) << endl;  // 110010

    return 0;
}
