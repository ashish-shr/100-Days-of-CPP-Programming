// Program to demonstrate function overriding

#include <iostream>
using namespace std;

class Parent
{
public:
  // overridden function
  void display()
  {
    cout << "Hello from Parent Class!";
  }
};

class Child : public Parent
{
public:
  // overriding function
  void display()
  {
    cout << "Hello from Child Class!";
  }
};

int main()
{
  Child c;
  c.display(); // calls overriding function
  return 0;
}