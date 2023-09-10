// Overloading assignment = operator

#include <iostream>
using namespace std;

class assign
{
  int a;

public:
  void get(void)
  {
    cin >> a;
  }
  void show(void)
  {
    cout << a << endl;
  }
  void operator=(assign o) // overloading assignment = operator
  {
    a = o.a;
  }
};

int main()
{
  assign o1, o2;
  cout << "Enter value of a: ";
  o2.get();
  o1 = o2; // calling overloaded assignment = operator
  cout << "Value of o1: ";
  o1.show();
  cout << "Value of o2: ";
  o2.show();
  return 0;
}