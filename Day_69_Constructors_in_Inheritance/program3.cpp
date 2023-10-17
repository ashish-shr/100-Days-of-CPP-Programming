// Program to demonstrate order of constructor invokation in inheritance [2]

#include <iostream>
using namespace std;

// base class A
class A
{
public:
  A()
  {
    cout << "Hello from base class A constructor." << endl;
  }
};

// base class B
class B
{
public:
  B()
  {
    cout << "Hello from base class B constructor." << endl;
  }
};

class C : public B, public A // first B then A
{
public:
  C()
  {
    cout << "Hello from derived class constructor." << endl;
  }
};

int main()
{
  // invokes base class B constructor first then base class A and derived class constructor
  C object;
  return 0;
}