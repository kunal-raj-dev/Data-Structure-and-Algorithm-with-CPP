// Qs. WAF to print if a number is odd or even.
#include <iostream>
using namespace std;

bool isEven(int number) {
    if (number%2 == 0) {
        return true;
    } else {
        return false;
    }
    // return number%2==0?true:false;
}

int main(){
    int number = 34;
    cout << number << " is " << (isEven(number) ? "even" : "odd") << endl;
    return 0;
}