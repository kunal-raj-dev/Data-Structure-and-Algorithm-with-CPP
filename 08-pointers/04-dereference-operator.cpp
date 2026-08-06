// Topic: Dereference Operator (*) in C++
// The '*' operator (indirection / dereference operator) is used to access or modify
// the value stored at the memory address pointed to by a pointer.

#include <iostream>
using namespace std;

int main() {
    int a = 25;
    int* ptr = &a;

    cout << "=== Reading Values via Dereference (*) ===" << endl;
    cout << "Value of a      : " << a << endl;
    cout << "Address of a    : " << ptr << endl;
    cout << "Value at (*ptr) : " << *ptr << endl;

    // Modifying value of 'a' using pointer dereferencing
    *ptr = 50;
    cout << "\n=== After (*ptr = 50) ===" << endl;
    cout << "New value of a      : " << a << endl;
    cout << "New value at (*ptr) : " << *ptr << endl;

    // Dereferencing with Double Pointer
    int** ptr2 = &ptr;
    cout << "\n=== Double Pointer Dereferencing ===" << endl;
    cout << "Value in ptr2   : " << ptr2 << endl;
    cout << "Value at (*ptr2): " << *ptr2 << " (address of a)" << endl;
    cout << "Value at (**ptr2): " << **ptr2 << " (actual value of a)" << endl;

    return 0;
}
