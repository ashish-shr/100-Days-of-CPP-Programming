// Overloading logical not ! operator

#include <iostream>
using namespace std;

class logicalNot
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

  void operator!() // overloading logical not ! operator
  {
    a = !a;
  }
};

int main()
{
  logicalNot t;
  cout << "Enter value of a for t: ";
  t.get();
  cout << "Value before operator overloading: " << endl;
  t.show();
  cout << "Value after operator overloading: " << endl;
  !t; // calling overloaded logical not ! operator
  t.show();
  return 0;
}