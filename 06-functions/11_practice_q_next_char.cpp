// Question 5 : Write a function that accepts a character (ch) as parameters & returns
// the character that occurs after ch in the English alphabet.
// Eg : input = ‘c’, return value = ‘d’
// Note : for ch = ‘z’, return ‘a’.

#include <iostream>
using namespace std;

char nextChar(char ch) {
    if (ch == 'z') {
        return 'a';
    }
    else if (ch == 'Z') {
        return 'A';
    }
    else {
        return ch + 1;
    }
}

int main(){
    cout << "Next of 'j': " << nextChar('j') << endl;
    cout << "Next of 'z': " << nextChar('z') << endl;
    cout << "Next of 'Z': " << nextChar('Z') << endl;

    return 0;
}