// comparing two objects without overloading != operator

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
  void compare(test t2) // function to compare two objects
  {
    if (a != t2.a)
      cout << "Objects are not equal.";
    else
      cout << "Object are equal";
  }
};

int main()
{
  test t1, t2;
  cout << "Enter value of a for t1 object: ";
  t1.get();
  cout << "Enter value of a for t2 object: ";
  t2.get();
  t1.compare(t2); // calling compare function
  return 0;
}