// Question 1 : Print the number of all 7’s that are in the 2d array.
// Example :
// Input - int arr[ ][ ] = { {4,7,8}, {8,8,7} }; n = 2, m = 3
// Output - 2

#include <iostream>
using namespace std;

int countAppearance(int mat[][3], int n, int m, int key) {
    int count = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (mat[i][j] == key) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int arr[][3] = { {4,7,8}, {8,8,7} };
    cout << "Number of 7 in matrix : " << countAppearance(arr, 2, 3, 7);

    return 0;
}