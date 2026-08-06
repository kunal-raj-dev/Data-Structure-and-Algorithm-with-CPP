// Qs. Practice Questions on Number System Conversions:
// 1. Convert decimal numbers from 1 to 10 to binary and verify back to decimal.
// 2. Count the number of set bits (1s) in the binary representation of a decimal number.
// 3. Add two binary numbers represented as integers.

#include <iostream>
using namespace std;

int decToBinary(int n) {
    int bin = 0, pow = 1;
    while (n > 0) {
        int rem = n % 2;
        bin += rem * pow;
        pow *= 10;
        n /= 2;
    }
    return bin;
}

int binToDecimal(int bin) {
    int dec = 0, pow = 1;
    while (bin > 0) {
        int lastDigit = bin % 10;
        dec += lastDigit * pow;
        pow *= 2;
        bin /= 10;
    }
    return dec;
}

// Function to count set bits (1s) in binary format
int countSetBits(int n) {
    int count = 0;
    int bin = decToBinary(n);
    while (bin > 0) {
        if (bin % 10 == 1) {
            count++;
        }
        bin /= 10;
    }
    return count;
}

// Function to add two binary numbers
int addBinary(int b1, int b2) {
    int d1 = binToDecimal(b1);
    int d2 = binToDecimal(b2);
    int sumDecimal = d1 + d2;
    return decToBinary(sumDecimal);
}

int main() {
    cout << "=== Question 1: Range Conversions (1 to 10) ===" << endl;
    for (int i = 1; i <= 10; i++) {
        int bin = decToBinary(i);
        int dec = binToDecimal(bin);
        cout << "Dec: " << i << " -> Bin: " << bin << " -> Dec: " << dec << endl;
    }

    cout << "\n=== Question 2: Count Set Bits ===" << endl;
    cout << "Set bits in 15 (Bin: " << decToBinary(15) << ") = " << countSetBits(15) << endl;
    cout << "Set bits in 10 (Bin: " << decToBinary(10) << ") = " << countSetBits(10) << endl;

    cout << "\n=== Question 3: Add Two Binary Numbers ===" << endl;
    int bin1 = 1010; // 10
    int bin2 = 1100; // 12
    cout << bin1 << " + " << bin2 << " = " << addBinary(bin1, bin2) << " (Decimal: " << 10 + 12 << ")" << endl;

    return 0;
}
