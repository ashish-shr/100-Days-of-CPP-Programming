// Program to access overridden function by object of derived class

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
  }
};

int main()
{
  Child c;
  c.display();         // calls overriding function
  c.Parent::display(); // calls overridden function
  return 0;
}