// Overloading function call() operator

#include <iostream>
using namespace std;

class test
{
  int a, b;

public:
  test()
  {
    cout << "default constructor called..." << endl;
    a = 0;
    b = 0;
  }

  test(int x, int y)
  {
    cout << "parameterized constructor called..." << endl;
    a = x;
    b = y;
  }

  void showData(void)
  {
    cout << "value of a: " << a << endl;
    cout << "value of b: " << b << endl;
  }

  void operator()(int x, int y) // overloading function call() operator
  {
    cout << "() operator called..." << endl;
    a = x;
    b = y;
  }
};

int main()
{
  test t1;
  t1.showData();
  test t2(8, 7);
  t2.showData();
  t2(6, 8); // calling overloaded function call() operator
  t2.showData();
  return 0;
}