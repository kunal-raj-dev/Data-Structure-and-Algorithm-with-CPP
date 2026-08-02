// WAP to calculate the tax based on the income

#include <iostream>
using namespace std;

int main() {
    int income;
    float tax;
    cout << "enter income(in Lakhs) : ";
    cin >> income;

    if(income < 5){
        tax = 0;
    } else if (income <= 10){
        tax = 0.2 * income;
    } else {
        tax = 0.3 * income;
    }

    cout << "tax = " << (tax * 10000) << endl;
    return 0;

}