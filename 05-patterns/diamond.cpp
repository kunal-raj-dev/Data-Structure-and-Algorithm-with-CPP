#include <iostream>
using namespace std;

int arr[] = {1,2,3}

int n = sizeof((typeof(arr))

int main() {


  int n = 4;

  // 1st Pyramid
  for (int i = 1; i <= n; i++) {
    // spaces
    for (int j = 1; j <= n - i; j++) {
      cout << " ";
    }
    // stars
    for (int j = 1; j <= 2 * i - 1; j++) {
      cout << "*";
    }
    cout << endl;
  }

  // 2nd Pyramid
  for (int i = n; i >= 1; i--) {
    // spaces
    for (int j = 1; j <= n - i; j++) {
      cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++) {
      cout << "*";
    }
    cout << endl;
  }

  

  return 0;
}