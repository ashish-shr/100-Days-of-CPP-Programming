// Overloading unary ! operator

#include <iostream>
using namespace std;

class unaryNot
{
  int a;

public:
  void get()
  {
    cin >> a;
  }

  void show(void)
  {
    cout << "a: " << a << endl;
  }

  void operator!() // overloading unary ! operator
  {
    a = !a;
  }
};

int main()
{
  unaryNot t;
  cout << "Enter value of a for t: ";
  t.get();
  cout << "Value before operator overloading: " << endl;
  t.show();
  cout << "Value after operator overloading: " << endl;
  !t; // calling overloaded unary ! operator
  t.show();
  return 0;
}