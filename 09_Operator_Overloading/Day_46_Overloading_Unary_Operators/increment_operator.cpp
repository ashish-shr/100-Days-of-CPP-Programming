// Overloading increment ++ operator

#include <iostream>
using namespace std;

class increment
{
  int a;

public:
  increment()
  {
    a = 0;
  }

  void show(void)
  {
    cout << "a: " << a << endl;
  }

  void operator++() // overloading pre-increment ++ operator
  {
    a = a + 1; // pre-increment
  }

  void operator++(int) // overloading post-increment ++ operator
  {
    a = a + 1; // post-increment
  }
};

int main()
{
  increment t;

  cout << "Value before operator overloading: " << endl;
  t.show();

  cout << "Value after pre-increment operator overloading: " << endl;
  ++t; // calling overloaded pre-increment ++ operator
  t.show();

  cout << "Value before operator overloading: " << endl;
  t.show();

  cout << "Value after post-increment operator overloading: " << endl;
  t++; // calling overloaded post-increment ++ operator
  t.show();

  return 0;
}