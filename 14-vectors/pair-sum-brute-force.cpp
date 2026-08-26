// BRUTE FORCE APPROACH
// Time Complexity : O(n²)
// Space Complexity : O(1)


#include <iostream>
#include <vector>

using namespace std;

vector<int> result(const vector<int> &vec, int target) {
    int vec_size = vec.size();
    vector<int> output;
    for (int i=0; i<vec_size-1; i++) {
        for (int j=i+1; j<vec_size; j++) {
            if (vec[i] + vec[j] == target) {
                output.push_back(i);
                output.push_back(j);
                return  output;
            }
        }
    }
    return output;   // or return {};
}

int main() {
    vector<int> vec = {2,7,11,15};
    int target = 18;

    vector<int> ans = result(vec, target);

    if (!ans.empty()) {
        cout << "[" << ans[0] << "," << ans[1] << "]" << endl;
    }
    else {cout << "[]";}

    return 0;
}