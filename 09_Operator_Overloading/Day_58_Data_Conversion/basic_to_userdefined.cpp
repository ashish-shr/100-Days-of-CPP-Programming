// Program to demostrate basic to user-defined type conversion

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  test() {} // default constructor

  test(int x) // parameterized constructor
  {
    a = x;
  }

  void display()
  {
    cout << "value of a: " << a << endl;
  }
};

int main()
{
  test t;
  int p = 8;
  t = p; // basic to user-defined type conversion
  t.display();
  return 0;
}