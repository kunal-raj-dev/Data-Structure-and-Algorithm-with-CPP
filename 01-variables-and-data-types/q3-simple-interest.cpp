#include <iostream>
using namespace std;

/* Question 3 : Build a Simple Interest Calculator.
Input : principal (P), rate (R), time (T)
Output : (P*R*T) / 100 */

int main() {
    float p, r, t;
    cout << "enter principal (P): ";
    cin >> p;
    
    cout << "enter rate (R): ";
    cin >> r;
    
    cout << "enter time (T): ";
    cin >> t;

    float si = (p * r * t) / 100;
    cout << "Simple Interest : " << si << endl;

    return 0;
}
