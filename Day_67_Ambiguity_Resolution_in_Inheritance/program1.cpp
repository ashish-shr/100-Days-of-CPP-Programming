// program to show ambiguity in inheritance

#include <iostream>
using namespace std;

// Base class A
class A
{
public:
  void hello()
  {
    cout << " Hello from class A" << endl;
  }
};

// Base class B
class B
{
public:
  void hello()
  {
    cout << " Hello from class B" << endl;
  }
};

// Derived class C
class C : public A, public B
{
};

int main()
{
  C obj;

  // Calling function hello()
  obj.hello();

  return 0;
}
