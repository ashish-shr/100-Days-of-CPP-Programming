// Overloading arrow -> operator

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  void setData(void)
  {
    cout << "Enter value of a: ";
    cin >> a;
  }

  void showData(void)
  {
    cout << "Value of a: ";
    cout << a;
  }

  test *operator->() // overloading arrow -> operator
  {
    return this;
  }
};

int main()
{
  test t;
  t->setData();  // calling overloaded arrow -> operator
  t->showData(); // calling overloaded arrow -> operator
  return 0;
}