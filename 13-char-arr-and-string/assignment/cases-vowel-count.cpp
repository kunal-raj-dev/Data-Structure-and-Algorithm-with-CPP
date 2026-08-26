// Question 1 : Count how many times lowercase vowels occurred in a String entered
// by the user.

#include <iostream>
#include <string>
using namespace std;

void countLowerVowel(string str) {
    int count = 0;
    for (char ch:str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    cout << "Vowel count: " << count << endl;
}

int main(){
    string text = "";
    getline(cin, text);
    countLowerVowel(text);

    return 0;
}