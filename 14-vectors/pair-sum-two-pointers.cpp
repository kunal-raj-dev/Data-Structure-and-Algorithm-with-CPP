// TWO POINTERS APPROACH
// Time Complexity : O(n)
// Space Complexity : O(1)


#include <iostream>
#include <vector>

using namespace std;

vector<int> result(const vector<int> &vec, int target) {

    vector<int> output;
    int l_pointer = 0;
    int r_pointer = vec.size()-1;

    while (l_pointer < r_pointer) {
        int sum = vec[l_pointer] + vec[r_pointer];
        if (sum == target) {
            return {l_pointer, r_pointer};
        }
        else if (sum > target) {
            r_pointer--;
        }
        else {
            l_pointer++;
        }
    }
    return output;
}

int main() {
    vector<int> vec = {2,7,11,15};
    int target = 170;

    vector<int> ans = result(vec, target);

    if (!ans.empty()) {
        cout << "[" << ans[0] << "," << ans[1] << "]" << endl;
    }
    else {cout << "[]";}

    return 0;
}