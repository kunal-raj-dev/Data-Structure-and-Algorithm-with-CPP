#include <iostream>
using namespace std;


int clearLastIBits(int n , int i){
    int bitMask = (~0) << i;
    return bitMask & n;
} 

int main(){
    cout << clearLastIBits(7 , 2) << endl;
    cout << clearLastIBits(15 , 2) << endl;

    return 0;
}
