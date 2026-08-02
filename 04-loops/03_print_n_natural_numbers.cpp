// Print numbers from 1 to n
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int count = 1;
    while (count <= n) {
        cout << count << " ";
        count++;
    }
    cout << endl;

    return 0;
}
