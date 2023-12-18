// program to show ambiguity

#include <iostream>
using namespace std;

class A
{
public:
  void show()
  {
    cout << "Hello form A \n";
  }
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};

int main()
{
  D object;
  object.show(); // show() is ambiguous
  return 0;
}
