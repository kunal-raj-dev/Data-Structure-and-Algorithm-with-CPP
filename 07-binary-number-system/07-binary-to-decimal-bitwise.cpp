// Topic: Binary to Decimal Conversion using String and Bitwise Left Shift
// Algorithm:
// Iterating through the binary string:
// ans = (ans << 1) | (bit - '0')
// Equivalent to: ans = (ans * 2) + digit

#include <iostream>
#include <string>
using namespace std;

int binaryStringToDecimal(string binaryStr) {
    int decimalVal = 0;
    
    for (char bit : binaryStr) {
        // Shift existing decimal value to left by 1 bit (multiply by 2)
        // and OR with the current bit (0 or 1)
        decimalVal = (decimalVal << 1) | (bit - '0');
    }

    return decimalVal;
}

int main() {
    string bin1 = "101";
    string bin2 = "1101";
    string bin3 = "11111";
    string bin4 = "100000";

    cout << "Binary \"" << bin1 << "\" -> Decimal: " << binaryStringToDecimal(bin1) << endl; // 5
    cout << "Binary \"" << bin2 << "\" -> Decimal: " << binaryStringToDecimal(bin2) << endl; // 13
    cout << "Binary \"" << bin3 << "\" -> Decimal: " << binaryStringToDecimal(bin3) << endl; // 31
    cout << "Binary \"" << bin4 << "\" -> Decimal: " << binaryStringToDecimal(bin4) << endl; // 32

    return 0;
}
