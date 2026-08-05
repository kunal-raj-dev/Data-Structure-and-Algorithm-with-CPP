// Question 4 : Write a function that prints the largest of 3 numbers.
#include <iostream>
#include <algorithm>
using namespace std;

int largest_of_three(int a, int b, int c){
    if ((a >= b) && (a >= c)) {
        return a;
    }
    else if (b >= c) {
        return b;
    }
    else {
        return c;
    }
    // int largest = max(a, max(b, c));
    // int largest = max({a, b, c});
    // return largest;

}

int main(){
    cout << "Largest of (52, 34, 23): " << largest_of_three(52, 34, 23) << endl;
    cout << "Largest of (23, 52, 34): " << largest_of_three(23, 52, 34) << endl;
    cout << "Largest of (23, 34, 52): " << largest_of_three(23, 34, 52) << endl;
    cout << "Largest of (23, 23, 23): " << largest_of_three(23, 23, 23) << endl;

    return 0;
}