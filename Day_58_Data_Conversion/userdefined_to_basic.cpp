// Program to demostrate user-defined to basic type conversion

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  void getData()
  {
    cout << "Enter value of a: ";
    cin >> a;
  }

  void display()
  {
    cout << "value of a: " << a << endl;
  }

  // typecasting operator function
  operator int()
  {
    return a;
  }
};

int main()
{
  test t;
  t.getData();
  int x;
  x = t; // user-defined to basic type conversion
  cout << "Value of x: " << x;
  return 0;
}