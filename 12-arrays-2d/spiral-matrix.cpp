#include <iostream>
using namespace std;

void spiralMatrix(int mat[][4], int n, int m) {
    int s_row=0, e_row=n-1;
    int s_col=0, e_col=m-1;

    while (s_row<=e_row && s_col<=e_col) {
        // top
        for (int j=s_col; j<=e_col; j++) {
            cout << mat[s_row][j] << " ";
        }

        // right
        for (int j=s_row+1; j<=e_row; j++) {
            cout << mat[j][e_col] << " ";
        }

        //bottom
        for (int j=e_col-1; j>=s_col; j--) {
            if (s_row == e_row) {
                break;
            }
            cout << mat[e_row][j] << " ";
        }

        //left
        for (int j=e_row-1; j>=s_row+1; j--) {
            if (s_col == e_col) {
                break;
            }
            cout << mat[j][s_col] << " ";
        }
        s_row++ ; s_col++;
        e_row-- ; e_col--;
    }
}

int main() {
    int matrix [4][4] = {
        { 1, 2, 3, 4},
        { 5, 6, 7, 8},
        { 9,10,11,12},
        {13,14,15,16}
    };

    spiralMatrix(matrix, 4,4);

    return 0;
}