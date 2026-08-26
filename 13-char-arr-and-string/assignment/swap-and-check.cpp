// Question 2 : You are given two strings s1 and s2 of equal length. A string swap is an
// operation where you choose two indices in a string (not necessarily different) and
// swap the characters at these indices.

// Return true if it is possible to make both strings equal by performing at most one
// string swap on exactly one of the strings. Otherwise, return false.

// Example :
// Input: s1 = "bank", s2 = "kanb"
// Output: true
// Explanation: For example, swap the first character with the last character of s2 to
// make "bank".

#include <iostream>
#include <string>
using namespace std;


bool swapCheck(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    int diffInd[2] = {};
    int count = 0;

    int n = str1.length();
    for (int i=0; i<n; i++) {
        if (str1[i] != str2[i]) {
            diffInd[count] = i;
            count++;
        }
        if (count == 2){
            break;
        }
        // bankad // kanbad
        // kanbac
    }

    
    if (count == 2) {
        swap(str1[diffInd[0]], str1[diffInd[1]]);
        if (str1 == str2) {
            return true;
        }
    }
    return false;
}


int main(){
    string s1 = "bankac";
    string s2 = "kanbad";

    cout << swapCheck(s1, s2);

    return 0;
}