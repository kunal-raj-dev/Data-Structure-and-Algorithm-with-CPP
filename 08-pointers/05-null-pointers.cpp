// Topic: Null Pointers in C++
// A Null Pointer is a pointer that points to nothing (address 0x0 / invalid address).
// In modern C++ (C++11 onwards), 'nullptr' is preferred over NULL or 0 because it is strongly typed.
// Always verify that a pointer is not null before dereferencing to prevent segmentation faults.

#include <iostream>
using namespace std;

int main() {
    // 1. Initializing null pointers
    int* ptr1 = NULL;
    int* ptr2 = 0;
    int* ptr3 = nullptr; // Recommended modern C++ style

    cout << "=== Null Pointer Values ===" << endl;
    cout << "ptr1 (NULL)    = " << ptr1 << endl;
    cout << "ptr2 (0)       = " << ptr2 << endl;
    cout << "ptr3 (nullptr) = " << ptr3 << endl;

    // 2. Safe dereferencing check
    int val = 100;
    int* safePtr = nullptr;

    if (safePtr != nullptr) {
        cout << "Value: " << *safePtr << endl;
    } else {
        cout << "\nsafePtr is currently null, assigning address of val..." << endl;
        safePtr = &val;
    }

    if (safePtr != nullptr) {
        cout << "Now safe to dereference! Value = " << *safePtr << endl;
    }

    return 0;
}
