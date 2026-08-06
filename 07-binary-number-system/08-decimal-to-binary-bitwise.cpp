// Topic: Decimal to Binary Conversion using Bitwise Right Shift (>>) & Bitwise AND (&)
// Algorithm:
// 1. To check each bit from MSB to LSB (or LSB to MSB):
//    - (num & 1) gives the least significant bit (LSB).
//    - (num >> 1) shifts bits to the right by 1 position.
// 2. Alternatively, for 32-bit integer: check ((num >> i) & 1) from i = 31 down to 0.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Method 1: Generating exact binary string from LSB to MSB
string decimalToBinaryString(int num) {
    if (num == 0) return "0";

    string binaryStr = "";
    while (num > 0) {
        int bit = num & 1;          // extract last bit
        binaryStr += to_string(bit);
        num = num >> 1;             // right shift by 1
    }

    reverse(binaryStr.begin(), binaryStr.end());
    return binaryStr;
}

// Method 2: Printing full 8-bit or 16-bit binary representation
void print32BitBinary(int num) {
    bool leadingZero = true;
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (bit == 1) {
            leadingZero = false;
        }
        if (!leadingZero) {
            cout << bit;
        }
    }
    if (leadingZero) cout << 0;
    cout << endl;
}

int main() {
    int testCases[] = {5, 9, 13, 15, 42, 64, 127};

    cout << "=== Decimal to Binary (Bitwise String Conversion) ===" << endl;
    for (int num : testCases) {
        cout << "Decimal: " << num << "\t-> Binary: " << decimalToBinaryString(num) << endl;
    }

    cout << "\n=== Full 32-bit Shift Printing ===" << endl;
    cout << "42 in Binary: ";
    print32BitBinary(42);

    return 0;
}
