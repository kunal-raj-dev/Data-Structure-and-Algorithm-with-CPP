#include <iostream>
using namespace std;

int staircaseSearch(int mat[][4], int n, int m, int key) {
    int i = 0, j = m - 1;

    while (i < n && j >= 0) {
        if (mat[i][j] == key) {
            cout << "Found at index : ("<<i<<","<<j<<")\n";
            return 1;

        }

        if (key < mat[i][j])
            j--;
        else
            i++;
    }

    cout << "Not found\n";
    return 0;
}

int main(){
    int matrix [4][4] = {
        { 10, 20, 30, 40},
        { 15, 25, 35, 45},
        { 27, 29, 37, 48},
        { 32, 33, 39, 50}
    };

    staircaseSearch(matrix, 4, 4, 33);

    return 0;
}