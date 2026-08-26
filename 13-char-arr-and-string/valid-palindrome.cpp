// TWO POINTERS APPROACH
// Time Complexity : O(n)
// Space Complexity : O(1)

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

bool isPalindrome(char *arr, int size) {
    int n = int(size/2);

    for (int i=0; i<n; i++) {
        if (tolower(arr[i]) != tolower(arr[size-1-i])) {
            return false;
        }
    }
    return true;
}

int main() {
    char word[] = "Rotator";
    cout << isPalindrome(word, strlen(word));

    return 0;
}