#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    char word1[6] = "hello";
    char word2[100] = "world!!!";

    cout << strcat(word1 , word2) << endl;
    cout << strlen(word1);


    return 0;
}