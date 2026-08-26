// FREQUENCY ARRAY APPROACH
// Time Complexity : O(n)
// Space Complexity : O(1)

#include <algorithm>
#include <iostream>
#include <cstring>

using namespace std;

bool isAragram(char *arr1, char *arr2, int size1, int size2) {
    // if both string size different
    if (size1 != size2) {
        cout << "not a valid anagram" << endl;
        return false;
    }

    // storing frequency of each char
    char freq[26] = {0};
    for (int i=0; i<size1; i++) {
        int writeInd = arr1[i] - 'a';
        freq[writeInd] += 1;
    }

    // valid dec frequency of each char
    for (int i=0; i<size2; i++) {
        int writeInd = arr1[i] - 'a';
        if (freq[writeInd] <= 0) {
            cout << "not a valid anagram" << endl;
            return false;
        }
        freq[writeInd] -= 1;
    }
    cout << "valid anagram" << endl;
    return true;
}


int main() {
    char word1[] = "anagram";
    char word2[] = "nagaram";

    isAragram(word1, word2, strlen(word1), strlen(word2));

    return 0;
}