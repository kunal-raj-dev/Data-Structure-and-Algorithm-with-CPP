// Topic: Address-Of Operator (&) in C++
// The '&' operator returns the memory address (in hexadecimal format) where the variable is stored.

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 25.5f;
    char ch = 'Z';

    cout << "=== Address-Of Operator (&) Demonstration ===" << endl;
    cout << "Value of a: " << a << " | Address (&a): " << &a << endl;
    cout << "Value of b: " << b << " | Address (&b): " << &b << endl;
    
    // Note: In C++, cout treats char* as a C-string, so to print address of a char variable,
    // we typecast it to (void*)
    cout << "Value of ch: " << ch << " | Address (&ch): " << (void*)&ch << endl;

    return 0;
}
