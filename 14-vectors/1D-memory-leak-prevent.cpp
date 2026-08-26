#include <iostream>
using namespace std;

void functInt(){
    int *ptr = new int;
    *ptr = 5;

    cout << *ptr;
    delete ptr;
}

int main(){
    functInt();


    return 0;
}