#include <iostream>
using namespace std;

int clearBitsRange(int num , int i , int j){
    for(int k=i; k<=j; k++){
        int bitMask = ~(1 << k);
        num = num & bitMask;
    }
    return num;
}

int main(){
    cout << clearBitsRange(15, 1, 3) << endl;
    cout << clearBitsRange(31, 1, 3) << endl;


    return 0;
}