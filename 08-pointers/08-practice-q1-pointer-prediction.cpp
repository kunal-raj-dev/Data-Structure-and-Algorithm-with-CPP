// Topic: Practice Questions - Pointer Tracing & Predictions
// Tracing pointer arithmetic, multiple levels of indirection, and value modification.

#include <iostream>
using namespace std;

void question1() {
    cout << "=== Question 1: Pointer Modification Tracing ===" << endl;
    int a = 10;
    int* p = &a;
    int** q = &p;

    *p = 20;
    cout << "After *p = 20 -> a = " << a << endl;

    **q = 30;
    cout << "After **q = 30 -> a = " << a << endl;
}

void question2() {
    cout << "\n=== Question 2: Multiple Pointers Pointing to Same Variable ===" << endl;
    int x = 50;
    int* ptr1 = &x;
    int* ptr2 = &x;

    *ptr1 += 10;
    *ptr2 *= 2;

    cout << "Final value of x = " << x << " (Expected: (50+10)*2 = 120)" << endl;
}

void question3() {
    cout << "\n=== Question 3: Pointer to Array Element ===" << endl;
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr; // points to arr[0]

    cout << "*ptr       : " << *ptr << endl;         // 10
    cout << "*(ptr + 2) : " << *(ptr + 2) << endl;   // 30
    cout << "*(ptr + 4) : " << *(ptr + 4) << endl;   // 50
}

int main() {
    question1();
    question2();
    question3();

    return 0;
}
