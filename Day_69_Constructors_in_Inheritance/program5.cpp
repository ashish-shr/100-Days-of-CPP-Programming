// Program to demonstrate parameterized constructor in inheritance[1]

#include <iostream>
using namespace std;

// base class A
class A
{
protected:
  int a1, a2;

public:
  A() {}

  A(int a1, int a2)
  {
    cout << "base class constructor called.." << endl;
    this->a1 = a1;
    this->a2 = a2;
  }
};

// derived class
class B : public A
{
  int b1, b2;

public:
  B() {}

  B(int a, int b, int p, int q) : A(a, b)
  {
    cout << "derived class constructor called.." << endl;
    b1 = p;
    b2 = q;
  }

  void display()
  {
    cout << "a1: " << a1 << " "
         << "a2: " << a2 << endl;
    cout << "b1: " << b1 << " "
         << "b2: " << b2 << endl;
  }
};

int main()
{
  B object(10, 20, 30, 40);
  object.display();
  return 0;
}