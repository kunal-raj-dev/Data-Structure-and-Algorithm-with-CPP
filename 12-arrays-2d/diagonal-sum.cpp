#include <iostream>
using namespace std;

void diagonalSum(int mat[][3], int n, int m) {
    int sumD1 = 0;
    int sumD2 = 0;

    for (int i=0; i<n; i++) {

        sumD1 += mat[i][i];
        // ignoring duplicate center cells for odd matrix
        if (i != n-i-1) {
            sumD2 += mat[i][n-i-1];
        }
    }
    // cout << "Primary diagonal sum = "<< sumD1 << "\n";
    // cout << "Secondary diagonal sum = "<< sumD2 << "\n";
    cout << "Sum of two diagonals = "<< sumD1+sumD2 << "\n";

}

int main() {
    // int matrix [4][4] = {
    //     { 1, 2, 3, 4},
    //     { 5, 6, 7, 8},
    //     { 9,10,11,12},
    //     {13,14,15,16}
    // };

    // diagonalSum(matrix, 4,4);

    int matrix [3][3] = {
        { 1, 2, 3},
        { 4, 5, 6},
        { 7, 8, 9}
    };

    diagonalSum(matrix, 3,3);

    return 0;
}