#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec1; // size:0
    vector<int> vec2 = {1,2,3,4}; // size:4
    vector<int> vec3(5,-1); // size:5

    for (int i=0; i<vec3.size(); i++) {
        cout << vec3[i] << " ";
    }
}