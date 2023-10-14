// program to resolve ambiguity in inheritance

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
  obj.A::hello(); // calling hello() of Base Class A
  obj.B::hello(); // calling hello() of Base Class B
  return 0;
}