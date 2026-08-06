// Topic: What are Pointers & Pointer Declaration in C++
// A Pointer is a special variable that stores the memory address of another variable.
// Syntax: data_type* pointer_name = &variable;

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a; // ptr stores address of variable a

    cout << "=== What are Pointers ===" << endl;
    cout << "Value of a      : " << a << endl;
    cout << "Address of a (&a): " << &a << endl;
    cout << "Value in ptr    : " << ptr << " (same as &a)" << endl;
    cout << "Address of ptr  : " << &ptr << " (pointer's own location in memory)" << endl;

    // Pointer to Pointer (Double Pointer)
    int** ptr2 = &ptr; // ptr2 stores address of pointer ptr
    cout << "\n=== Pointer to Pointer (Double Pointer) ===" << endl;
    cout << "Value in ptr2   : " << ptr2 << " (same as &ptr)" << endl;
    cout << "Address of ptr2 : " << &ptr2 << endl;

    // Size of Pointers
    cout << "\n=== Size of Pointers (Architecture Dependent) ===" << endl;
    cout << "sizeof(int*)    : " << sizeof(ptr) << " bytes" << endl;
    cout << "sizeof(char*)   : " << sizeof(char*) << " bytes" << endl;
    cout << "sizeof(double*) : " << sizeof(double*) << " bytes" << endl;

    return 0;
}
