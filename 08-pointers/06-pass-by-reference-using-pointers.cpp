// Topic: Passing Arguments - Pass by Value vs Pass by Reference using Pointers
// Pass by Value    : A copy of the variable is passed. Original value remains unchanged.
// Pass by Reference: Address of variable is passed. Changes made inside function modify original variable.

#include <iostream>
using namespace std;

// 1. Pass by Value (fails to swap original variables)
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// 2. Pass by Reference using Pointers (successfully swaps original variables)
void swapByPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Initial values : x = " << x << ", y = " << y << endl;

    // Test Pass by Value
    swapByValue(x, y);
    cout << "After swapByValue   : x = " << x << ", y = " << y << " (Unchanged!)" << endl;

    // Test Pass by Pointer
    swapByPointer(&x, &y);
    cout << "After swapByPointer : x = " << x << ", y = " << y << " (Successfully Swapped!)" << endl;

    return 0;
}
