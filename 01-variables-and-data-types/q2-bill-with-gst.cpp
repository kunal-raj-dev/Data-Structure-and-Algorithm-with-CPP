#include <iostream>
using namespace std;

/*Question 2 : Enter cost of 3 items from the user (using float data type)- a
pencil, a pen and an eraser. You have to output the total cost of the items back
to the user as their bill. (Add on : You can also try adding 18% GST tax to the
items in the bill as an advanced problem)*/

int main() {
  float pencil;
  cout << "enter price of pencil\n";
  cin >> pencil;

  float pen;
  cout << "enter price of pen\n";
  cin >> pen;

  float eraser;
  cout << "enter price of eraser\n";
  cin >> eraser;

  float bill = (pencil + pen + eraser);
  cout << "bill without gst : " << bill << endl;

  float final_bill = bill + (bill) * 0.18;
  cout << "final bill with gst : " << final_bill << endl;

  return 0;
}
