// Overloading shorthand += operator

#include <iostream>
using namespace std;

class shortHand
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
  void operator+=(shortHand o) // overloading shorthand += operator
  {
    a = a + o.a;
  }
};

int main()
{
  shortHand o1, o2;
  cout << "Enter value of a for o1: ";
  o1.get();
  cout << "Enter value of a for o2: ";
  o2.get();
  o1 += o2; // calling overloaded shorthand += operator
  cout << "Value of o1: ";
  o1.show();
  cout << "Value of o2: ";
  o2.show();
  return 0;
}