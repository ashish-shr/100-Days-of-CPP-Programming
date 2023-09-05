// Program to demonstrate reference variables

#include <iostream>
using namespace std;

int main()
{
  // value of x is set to 8 at first
  int x = 8;

  // a reference variable ref is created
  int &ref = x; // ref is reference to variable x

  // x = 8 is printed
  cout << "Original value of x: " << x << endl;

  // now, x is changed to 143
  ref = 143;

  // x = 143 is printed
  cout << "Reference value of x: " << ref << endl;
  return 0;
}