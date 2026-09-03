#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;

    for(int i=0; i<5; i++){
        vec.push_back(i);
    }

    cout << vec.size() << endl; // 5

    // 0 -> 1 -> 2 -> 4 -> 8
    cout << vec.capacity() << endl; // 8
    return 0;
}