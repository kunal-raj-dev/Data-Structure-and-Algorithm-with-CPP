#include <iostream>
using namespace std;

int updateIth1(int number, int i, int value) {
    if (value == 1) {
        return (1<<i) | number;
    }
    else if (value == 0) {
        return ~(1<<i) & number;
    }
}

int updateIth2(int number, int i, int value) {
    number = ~(1<<i) & number; // clear to make blank canvas
    number = (value<<i) | number; // update ith with value

    return number;
}

int main() {
    int number = 7;
    cout << updateIth1(7, 2, 0) << "\n";
    cout << updateIth2(7, 2, 0) << "\n";
    cout << updateIth1(7, 3, 1) << "\n";
    cout << updateIth2(7, 3, 1) << "\n";

    return 0;
}
