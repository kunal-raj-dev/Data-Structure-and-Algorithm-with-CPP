#include <iostream>
using namespace std;

/*Question 1 : In a program, input the side of a square. You have to output the
area of the square. Input : n (side) Output : n*n (area)*/

int area(int n) {
    return n * n;
}

int main() {
  int n;
  cout << "enter side n: ";
  cin >> n;

  int result = area(n);
  cout << "area of square : " << result << endl;
  
  return 0;
}
