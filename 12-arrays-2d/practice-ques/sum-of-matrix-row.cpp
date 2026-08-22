// Question 2 : Print out the sum of the numbers in the second row of the “nums” array.
// Example :
// Input - int nums[ ][ ] = { {1,4,9}, {11,4,3}, {2,2,3} };
// Output - 18

#include <iostream>
using namespace std;

int sum_of_row(int mat[][3], int n, int m, int rowNo) {
    int sum = 0;
    for (int i=0; i<m; i++) {
        sum += mat[rowNo-1][i];
    }
    return sum;
}

int sum1(int (*mat)[3], int m) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += *(*(mat) + i);
    }
    return sum;
}

int main() {
    int nums[ ][3] = { {1,4,9}, {11,4,3}, {2,2,3} };
    int n=3;
    int m=3;
    cout << "sum of second row : " << sum_of_row(nums, n, m, 2) << "\n";
    cout << "sum of second row : " << sum1(nums+1, m) << "\n";

    return 0;
}