#include <iostream>
#include <string>
using namespace std;

int main(){
    string word = "hello my name is c++ and i am used in making games , also c++ is near to system";
    cout << word.find("c++") << endl;
    cout << word.length() << endl;
    cout << word.substr(5 , 200) << endl;
    cout << word.at(500) << endl; // error




    return 0;
}
