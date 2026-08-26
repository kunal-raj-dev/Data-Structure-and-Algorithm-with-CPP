// SORTING APPROACH
// Time Complexity : O(n log n)
// Space Complexity : O(log n)

#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;


bool isAnagram(char *arr1, char *arr2, int size1, int size2) {
    if (size1 != size2) {
        cout << "not a valid anagram" << endl;
        return false;
    }

    sort(arr1, arr1 + size1);
    sort(arr2, arr2 + size2);

    // for (int i=0; i<size1; i++) {
    //     if (arr1[i] != arr2[i]) {
    //         cout << "not a valid anagram" << endl;
    //         return false;
    //     }
    // }
    // cout << "valid anagram" << endl;
    // return true;

    if (strcmp(arr1, arr2) != 0){
        cout << "not a valid anagram" << endl;
        return false;
    }
    cout << "valid anagram" << endl;
    return true;
}

int main() {
    char word1[] = "anagram";
    char word2[] = "nagaram";

    isAnagram(word1, word2, strlen(word1), strlen(word2));

    return 0;
}