// Topic: Practice Questions - Pointer Arithmetic & Const Qualifiers
// Pointer Arithmetic:
// ptr + 1 advances address by sizeof(data_type) bytes.
// Const Qualifiers:
// 1. const int* ptr       : Pointer to constant data (cannot change *ptr)
// 2. int* const ptr       : Constant pointer to data (cannot change ptr address)
// 3. const int* const ptr : Constant pointer to constant data

#include <iostream>
using namespace std;

void testPointerArithmetic() {
    cout << "=== Pointer Arithmetic (Address Increments) ===" << endl;
    int a = 10;
    int* ptr = &a;

    cout << "ptr address       : " << ptr << endl;
    cout << "ptr + 1 address   : " << (ptr + 1) << " (advanced by " << sizeof(int) << " bytes)" << endl;
    cout << "ptr + 2 address   : " << (ptr + 2) << " (advanced by " << 2 * sizeof(int) << " bytes)" << endl;
}

void testConstPointers() {
    cout << "\n=== Const with Pointers ===" << endl;
    int x = 10;
    int y = 20;

    // 1. Pointer to constant data
    const int* ptrToConst = &x;
    cout << "Value at ptrToConst: " << *ptrToConst << endl;
    // *ptrToConst = 15; // Error: assignment of read-only location
    ptrToConst = &y;     // Allowed: pointer can point to another location
    cout << "After repointing to y: " << *ptrToConst << endl;

    // 2. Constant pointer to data
    int* const constPtr = &x;
    *constPtr = 99;      // Allowed: data can be modified
    cout << "Modified x via constPtr: " << x << endl;
    // constPtr = &y;    // Error: assignment of read-only variable 'constPtr'
}

int main() {
    testPointerArithmetic();
    testConstPointers();

    return 0;
}
