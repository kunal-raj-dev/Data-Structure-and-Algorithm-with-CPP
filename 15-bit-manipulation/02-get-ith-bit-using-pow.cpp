#include <iostream>
#include <math.h>
using namespace std;

bool ithBit(int num, int ith) {
    // if ((num & int(pow(2, ith))) >0) {
    //     return 1;
    // }
    // return 0;
    return (num & int(pow(2, ith)))? 1:0;
}

int main() {
    cout << ithBit(6, 2) << "\n";

    return 0;
}

