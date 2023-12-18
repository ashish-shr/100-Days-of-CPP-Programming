// comparing two objects with overloading == operator

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  void get()
  {
    cin >> a;
  }
  void operator==(test t2) // overloading == operator
  {
    if (a == t2.a)
      cout << "Objects are equal.";
    else
      cout << "Object are not equal";
  }
};

int main()
{
  test t1, t2;
  cout << "Enter value of a for t1 object: ";
  t1.get();
  cout << "Enter value of a for t2 object: ";
  t2.get();
  t1 == t2; // calling overloaded == operator
  return 0;
}