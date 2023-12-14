// Program to demonstrate parameterized constructor in inheritance[2]

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
    cout << "base class A constructor called.." << endl;
    this->a1 = a1;
    this->a2 = a2;
  }
};

// base class B
class B
{
protected:
  int b1, b2;

public:
  B() {}

  B(int b1, int b2)
  {
    cout << "base class B constructor called.." << endl;
    this->b1 = b1;
    this->b2 = b2;
  }
};

// derived class
class C : public A, public B
{
  int c1, c2;

public:
  C() {}

  C(int a, int b, int p, int q, int x, int y) : A(p, q), B(x, y)
  {
    cout << "derived class constructor called.." << endl;
    c1 = a;
    c2 = b;
  }

  void display()
  {
    cout << "a1: " << a1 << " "
         << "a2: " << a2 << endl;
    cout << "b1: " << b1 << " "
         << "b2: " << b2 << endl;
    cout << "c1: " << c1 << " "
         << "c2: " << c2 << endl;
  }
};

int main()
{
  C object(2, 4, 6, 8, 10, 12);
  object.display();
  return 0;
}