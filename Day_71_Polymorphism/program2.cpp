// Program to demonstrate run-time polymorphism using function overriding

#include <iostream>
using namespace std;

class A
{
public:
  void print()
  {
    cout << "Parent Class Function" << endl;
  }
};

class B : public A
{
public:
  void print()
  {
    cout << "Child Class Function" << endl;
  }
};

int main()
{
  // Parent class object
  A obj1;
  obj1.print();

  // Child class object
  B obj2;
  obj2.print();

  return 0;
}