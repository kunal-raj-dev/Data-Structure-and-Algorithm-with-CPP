#include <iostream>
using namespace std;

int clearBitsRange(int num , int i , int j){
    int temp = ~0;
    int a = temp << i; // 1111 1110
    int b = temp << j; // 1111 0000

    int tempMask = ~b;  // 0000 1111
    int bitMask = ~(a & b);
    
    return bitMask & num; // clear
}

int main(){
    cout << clearBitsRange(15, 1, 3) << endl;
    cout << clearBitsRange(31, 1, 3) << endl;


    return 0;
}