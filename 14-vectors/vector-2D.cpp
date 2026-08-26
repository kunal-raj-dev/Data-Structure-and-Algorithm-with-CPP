#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector<vector<int>> vec1; // But vec1 has 0 rows, so vec1[0] doesn't exist.

    // vector<Type> name(number_of_elements, default_value);
    // vector<int>(3) looks like: [0, 0, 0]
    vector <vector<int>> vec1(3, vector<int>(3));

    int count = 1;
    for (int row=0; row<3; row++) {
        for (int col=0; col<3; col++) {
            vec1[row][col] = count++;
        }
    }

    vector <vector<int>> vec2;//2d

    int count = 1;
    for (int row=0; row<3; row++) {
      vector<int> current_row;//1d
        for (int col=0; col<3; col++) {
          current_row.push_back((count++));
        }
        vec2.push_back(current_row);
    }


    vector <vector<int>> vec3 = {{1,2,3}, {4,5}, {6}};
    for (int i=0; i<vec3.size(); i++){
        for (int j=0; j<vec3[i].size(); j++){
            cout << vec3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}