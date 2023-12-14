// Overloading decrement -- operator

#include <iostream>
using namespace std;

class decrement
{
  int a;

public:
  decrement()
  {
    a = 3;
  }

  void show(void)
  {
    cout << "a: " << a << endl;
  }

  void operator--() // overloading pre-decrement -- operator
  {
    a = a - 1; // pre-decrement
  }

  void operator--(int) // overloading post-decrement -- operator
  {
    a = a - 1; // post-decrement
  }
};

int main()
{
  decrement t;

  cout << "Value before operator overloading: " << endl;
  t.show();

  cout << "Value after pre-decrement operator overloading: " << endl;
  --t; // calling overloaded pre-decrement -- operator
  t.show();

  cout << "Value before operator overloading: " << endl;
  t.show();

  cout << "Value after post-decrement operator overloading: " << endl;
  t--; // calling overloaded post-decrement -- operator
  t.show();

  return 0;
}