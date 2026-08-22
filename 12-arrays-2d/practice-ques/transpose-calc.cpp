// Question 3 : Write a program to Find Transpose of a Matrix.

// What is Transpose?
// Transpose of a matrix is the process of swapping the rows to columns. For a 2x3
// matrix,

// a11

// Matrix
// a11 a12 a13
// a21 a22 a23

// Transposed Matrix
// a11 a21
// a12 a22
// a13 a23

#include <iostream>
using namespace std;

void matrixTranspose(int mat[][3], int n, int m) {
    int transposeMat[3][2] = {};
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            transposeMat[j][i] = mat[i][j];
        }
    }

    for (int i=0; i<m; i++){
        for(int j=0; j<n ; j++){
            cout << transposeMat[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int matrix[2][3] = {{11,12,13},
                        {21,22,23}};

    matrixTranspose(matrix, 2, 3);


    return 0;
}