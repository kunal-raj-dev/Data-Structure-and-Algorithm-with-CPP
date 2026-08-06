// Topic: Common Number Systems in Computer Science
// 1. Binary System      : Base 2  (Digits: 0, 1)                  Prefix: 0b
// 2. Octal System       : Base 8  (Digits: 0 to 7)                Prefix: 0
// 3. Decimal System     : Base 10 (Digits: 0 to 9)                No prefix
// 4. Hexadecimal System : Base 16 (Digits: 0 to 9, A to F)        Prefix: 0x

#include <iostream>
using namespace std;

int main() {
    int decimalVal = 42;
    int binaryVal  = 0b101010; // 42 in binary
    int octalVal   = 052;      // 42 in octal (5*8^1 + 2*8^0 = 42)
    int hexVal     = 0x2A;     // 42 in hex (2*16^1 + 10*16^0 = 42)

    cout << "=== Representation of Value 42 in Different Literals ===" << endl;
    cout << "Decimal literal (42)       = " << decimalVal << endl;
    cout << "Binary literal (0b101010)  = " << binaryVal << endl;
    cout << "Octal literal (052)        = " << octalVal << endl;
    cout << "Hexadecimal literal (0x2A) = " << hexVal << endl;

    cout << "\n=== Formatting Output with C++ Stream Manipulators ===" << endl;
    int num = 255;
    cout << "Value: " << num << endl;
    cout << "In Decimal     : " << dec << num << endl;
    cout << "In Octal       : " << oct << num << endl;
    cout << "In Hexadecimal : " << hex << num << endl;

    return 0;
}
