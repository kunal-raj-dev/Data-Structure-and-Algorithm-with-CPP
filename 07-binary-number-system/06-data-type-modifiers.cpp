// Topic: Data Type Modifiers in C++
// Modifiers alter the meaning of base data types to fit various memory size and sign requirements.
// Types of Modifiers:
// 1. signed   : stores both positive and negative values (MSB is sign bit)
// 2. unsigned : stores only non-negative values (0 and positive; full range for magnitude)
// 3. short    : allocates less or equal bytes than standard type (usually 2 bytes)
// 4. long     : allocates at least 4 bytes
// 5. long long: allocates at least 8 bytes

#include <iostream>
using namespace std;

int main() {
    cout << "=== Sizes of Data Types with Modifiers ===" << endl;
    cout << "sizeof(short int)      : " << sizeof(short int) << " bytes" << endl;
    cout << "sizeof(int)            : " << sizeof(int) << " bytes" << endl;
    cout << "sizeof(long int)       : " << sizeof(long int) << " bytes" << endl;
    cout << "sizeof(long long int)  : " << sizeof(long long int) << " bytes" << endl;
    cout << "sizeof(unsigned int)   : " << sizeof(unsigned int) << " bytes" << endl;
    cout << "sizeof(signed int)     : " << sizeof(signed int) << " bytes" << endl;

    cout << "\n=== Signed vs Unsigned Behavior ===" << endl;
    signed int sVal = -10;
    unsigned int uVal = 10;
    cout << "signed int sVal   = " << sVal << endl;
    cout << "unsigned int uVal = " << uVal << endl;

    // Unsigned overflow demonstration (wrap around to max value 2^32 - 1)
    unsigned int maxUnsigned = 0;
    maxUnsigned = maxUnsigned - 1;
    cout << "0 - 1 on unsigned int wraps around to: " << maxUnsigned << endl;

    return 0;
}
