#include <iostream>
#include <cstring>
using namespace std;

void toUpper(char *word, int n) {
    for (int i=0; i<n; i++) {
        char ch = word[i];
        if (ch >= 'a' && ch <= 'z') {
            word[i] = ch - 'a' + 'A';
            // word[i] = ch - 32
        }
    }
}

void toLower(char *word, int n) {
    for (int i=0; i<n; i++) {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'Z') {
            word[i] = ch + 'a' - 'A';
            // word[i] = ch + 32
        }
    }
}

int main() {
    char word[] = "Hello Earth !!!";
    toUpper(word, strlen(word));
    cout << word << endl;

    toLower(word , strlen(word));
    cout << word << endl;

    return 0;
}