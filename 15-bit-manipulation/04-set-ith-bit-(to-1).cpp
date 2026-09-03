#include <iostream>
using namespace std;

int setIthBit(int num, int ith) {
    int bitMask = 1 << ith;

    return num | bitMask;
}

int main(){
    cout << setIthBit(6,2) << "\n";
    cout << setIthBit(7,2) << "\n";

    return 0;
}