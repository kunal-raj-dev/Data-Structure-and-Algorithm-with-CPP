#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age : ";
    cin >> age;

    if(age < 0) {
        cout << "invalid age" << endl;
    }

    else if(age <13) {
        cout << "toddler" << endl;
    }
    
    else if(age < 20) {
        cout << "teenager" << endl;
    }

    else{
        cout << "adult" << endl;
    }

    return 0;
}