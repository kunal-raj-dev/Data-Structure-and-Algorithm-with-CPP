// Topic: Reference Variables in C++
// A Reference Variable is an alias (alternative name) for an already existing variable.
// Syntax: data_type& ref_name = original_variable;
// Key Characteristics:
// 1. Must be initialized when declared.
// 2. Cannot be reseated to refer to another variable.
// 3. Does not have its own memory address (shares address of original variable).

#include <iostream>
using namespace std;

// Pass by Reference using C++ Reference Variables (Cleaner syntax than pointers)
void swapByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void changeValue(int& num) {
    num = 500;
}

int main() {
    int original = 100;
    int& ref = original; // ref is an alias for original

    cout << "=== Reference Variable Demo ===" << endl;
    cout << "original = " << original << " | Address = " << &original << endl;
    cout << "ref      = " << ref << " | Address = " << &ref << " (Same Address!)" << endl;

    // Modifying ref changes original
    ref = 250;
    cout << "\nAfter ref = 250:" << endl;
    cout << "original = " << original << ", ref = " << ref << endl;

    // Function call with reference
    changeValue(original);
    cout << "After changeValue(original): original = " << original << endl;

    // Swapping using references
    int x = 15, y = 30;
    cout << "\nBefore swapByReference: x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swapByReference : x = " << x << ", y = " << y << endl;

    return 0;
}
