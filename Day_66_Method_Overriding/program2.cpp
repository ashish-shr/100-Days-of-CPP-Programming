// Program to call overridden function from derived class

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
    cout << "Hello from Child Class!" << endl;
    Parent::display();
  }
};

int main()
{
  Child c;
  c.display(); // calls overriding and overridden function
  return 0;
}