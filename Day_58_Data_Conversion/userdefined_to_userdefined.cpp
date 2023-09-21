// Program to demostrate user-defined to user-defined type conversion

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  test() {}

  test(int n)
  {
    a = n;
  }

  void display()
  {
    cout << "value of a: " << a << endl;
  }
};

class sample
{
  int x;

public:
  sample() {}

  sample(int n)
  {
    x = n;
  }

  void display()
  {
    cout << "Value of x: " << x << endl;
  }

  // typecasting operator function
  operator test()
  {
    return test(x);
  }
};

int main()
{
  test t;
  sample s(10);
  t = s; // user-defined to user-defined type conversion
  t.display();
  return 0;
}