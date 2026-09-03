#include <iostream>
using namespace std;

bool isPowerOf2(int num) {
    return (num & num-1) == 0;
}

int main(){
    cout << isPowerOf2(6) << "\n";
    cout << isPowerOf2(32) << "\n";

    return 0;
}