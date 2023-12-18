// Overloading logical OR || operator

#include <iostream>
using namespace std;

class logicalOr
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

  int operator||(logicalOr t) // overloading logical OR || operator
  {
    int x;
    x = a || t.a;
    return x;
  }
};

int main()
{
  logicalOr t1, t2;
  cout << "Enter value of a for t1: ";
  t1.get();
  cout << "Enter value of a for t2: ";
  t2.get();
  int res = t1 || t2; // calling overloaded logical OR || operator
  cout << res;
  return 0;
}