#include <iostream>
using namespace std;


int clearLastIBits(int n , int i){
    return((n >> i) << i);
} 

int main(){
    cout << clearLastIBits(7 , 2) << endl;
    cout << clearLastIBits(15 , 2) << endl;

    return 0;
}
