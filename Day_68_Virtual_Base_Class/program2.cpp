// Example 1
// program to solve ambiguity using virtual base class

#include <iostream>
using namespace std;

class A
{
public:
  int a;
  A()
  {
    a = 8;
  }
};

class B : public virtual A
{
};

class C : public virtual A
{
};

class D : public B, public C
{
};

int main()
{
  D object;
  cout << "a = " << object.a << endl; // gives a = 8
  return 0;
}
