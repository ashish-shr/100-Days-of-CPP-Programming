// Program to demonstrate order of constructor invokation in inheritance [1]

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

class C : public A, public B // first A then B
{
public:
  C()
  {
    cout << "Hello from derived class constructor." << endl;
  }
};

int main()
{
  // invokes base class A constructor first then base class B and derived class constructor
  C object;
  return 0;
}