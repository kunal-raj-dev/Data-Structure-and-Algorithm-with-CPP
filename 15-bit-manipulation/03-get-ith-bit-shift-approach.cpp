#include <iostream>
using namespace std;

int getIthBit(int n, int i) {
    return (n >> i) & 1;
}

int main(){
    
    cout << getIthBit(6,2);

    return 0;
}