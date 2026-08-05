#include <iostream>
using namespace std;

int calcFactorial(int number) {
    int fac = 1;
    for (int i=1; i<=number; i++){
        fac *= i;
    }
    return fac;
}

int binomCoeffi(int n, int r) {
    int n_fac = calcFactorial(n);
    int r_fac = calcFactorial(r);
    int n_r_diff_fac = calcFactorial(n-r);

    return n_fac/ (r_fac * n_r_diff_fac);
}


int main()
{
    int n = 4;
    int r = 2;

    cout << binomCoeffi(n, r) << endl;

    return 0;
}