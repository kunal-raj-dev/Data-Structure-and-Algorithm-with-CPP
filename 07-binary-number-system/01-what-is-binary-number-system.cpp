// Topic: What is Binary Number System
// Binary is a base-2 number system that uses only two digits: 0 and 1 (bits).
// In base-2, each position represents an increasing power of 2 from right to left (2^0, 2^1, 2^2, 2^3, ...).

#include <iostream>
using namespace std;

void explainBinarySystem() {
    cout << "=== Binary Number System (Base 2) ===" << endl;
    cout << "Base: 2 (Digits used: 0, 1)" << endl;
    cout << "Positional Weights (from right to left):" << endl;
    cout << "2^4 = 16 | 2^3 = 8 | 2^2 = 4 | 2^1 = 2 | 2^0 = 1" << endl;
    cout << "-----------------------------------------------" << endl;
    
    // Example: (1011)_2 in decimal
    // = (1 * 2^3) + (0 * 2^2) + (1 * 2^1) + (1 * 2^0)
    // = 8 + 0 + 2 + 1 = 11
    cout << "Example: (1011)_2 to Decimal:" << endl;
    cout << "1*2^3 + 0*2^2 + 1*2^1 + 1*2^0 = 8 + 0 + 2 + 1 = 11" << endl;
}

int main() {
    explainBinarySystem();
    
    // In C++14 onwards, binary literals can be written with '0b' prefix
    int binaryNum = 0b1011;
    cout << "\nBinary literal 0b1011 in decimal = " << binaryNum << endl;

    return 0;
}
