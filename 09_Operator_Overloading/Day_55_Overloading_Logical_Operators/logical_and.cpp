// Overloading logical AND && operator

#include <iostream>
using namespace std;

class logicalAnd
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

  int operator&&(logicalAnd t) // overloading logical AND && operator
  {
    int x;
    x = a && t.a;
    return x;
  }
};

int main()
{
  logicalAnd t1, t2;
  cout << "Enter value of a for t1: ";
  t1.get();
  cout << "Enter value of a for t2: ";
  t2.get();
  int res = t1 && t2; // calling overloaded logical AND && operator
  cout << res;
  return 0;
}