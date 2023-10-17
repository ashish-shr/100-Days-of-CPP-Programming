// Program to demonstrate constructor in inheritance

#include <iostream>
using namespace std;

// base class
class A
{
public:
  A()
  {
    cout << "Hello from base class constructor." << endl;
  }
};

// derived class
class B : public A
{
public:
  B()
  {
    cout << "Hello from derived class constructor." << endl;
  }
};

int main()
{
  B object; // invokes base class constructor first then derived class
  return 0;
}