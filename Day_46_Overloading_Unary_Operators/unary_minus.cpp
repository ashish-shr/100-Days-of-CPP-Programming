// Overloading unary - operator

#include <iostream>
using namespace std;

class unaryMinus
{
  int a, b;

public:
  void get()
  {
    cin >> a >> b;
  }

  void show(void)
  {
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
  }

  void operator-() // overloading unary - operator
  {
    a = -a;
    b = -b;
  }
};

int main()
{
  unaryMinus t;
  cout << "Enter value of a and b for t: ";
  t.get();
  cout << "Values before operator overloading: " << endl;
  t.show();
  -t; // calling overloaded unary - operator
  cout << "Values after operator overloading: " << endl;
  t.show();
  return 0;
}