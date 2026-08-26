// FREQUENCY COUNT APPROACH
// Time Complexity : O(n)
// Space Complexity : O(1)

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool closeStrings(string word1 , string word2){
    if (word1.length() != word2.length()) {
        cout << "length is not same" << endl;
        return false;
    }

    int freq1[26] = {0};
    int freq2[26] = {0};

    for(int i=0 ; i < word1.length(); i++){
        freq1[word1[i] - 'a']++;
        freq2[word2[i] - 'a']++;
    }

    for(int i=0; i<26; i++){
        if((freq1[i] > 0 && freq2[i] == 0) || 
           (freq2[i] > 0 && freq1[i] == 0)){
            cout << "both word have some difference in character" << endl;
            return false;
        } 
    }

    sort(freq1, freq1 + 26);
    sort(freq2, freq2 + 26);

    for(int i=0; i<26; i++){
        if(freq1[i] != freq2[i]){
            cout << "not close strings" << endl;
            return false;
        }
    }
    cout << "they are close strings" << endl;
    return true;
}

int main(){
    string word1 = "cabbba";
    string word2 = "abbccc";

    closeStrings(word1 , word2);

    return 0;
}
