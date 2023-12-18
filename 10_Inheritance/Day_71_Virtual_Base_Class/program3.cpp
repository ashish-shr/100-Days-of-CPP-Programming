// Example 2
// program to solve ambiguity using virtual base class

#include <iostream>
using namespace std;

class A
{
public:
  void hello()
  {
    cout << "Hello from A" << endl;
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
  object.hello(); // prints Hello from A
  return 0;
}
