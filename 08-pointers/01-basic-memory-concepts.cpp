// Topic: Basic Concepts of Memory & Memory Addresses
// In C++, each variable is allocated a specific location in RAM with a unique memory address (hexadecimal).
// Memory is organized in bytes (1 byte = 8 bits).

#include <iostream>
using namespace std;

int main() {
    int age = 22;
    float price = 99.5f;
    char grade = 'A';
    double pi = 3.14159265;

    cout << "=== Variable Memory Sizes and Representations ===" << endl;
    cout << "int age        : value = " << age << " | size = " << sizeof(age) << " bytes" << endl;
    cout << "float price    : value = " << price << " | size = " << sizeof(price) << " bytes" << endl;
    cout << "char grade     : value = " << grade << " | size = " << sizeof(grade) << " byte" << endl;
    cout << "double pi      : value = " << pi << " | size = " << sizeof(pi) << " bytes" << endl;

    return 0;
}
