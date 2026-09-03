#include <iostream>
using namespace std;

int clearIthBit(int num, int ith) {
    int bitMask = ~(1 << ith);

    return num & bitMask;
}

int main(){
    cout << clearIthBit(6,2) << "\n";
    cout << clearIthBit(7,2) << "\n";

    return 0;
}