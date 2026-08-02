#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;
        }
        cout << i << " ";
    }
    cout << "\nout of loop" << endl;

    return 0;
}
