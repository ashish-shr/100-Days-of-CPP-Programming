// without using override specifier

#include <iostream>

class Base
{
public:
  virtual void hello() const
  {
    std::cout << "Hello from Base Class" << std::endl;
  }
};

class Derived : public Base
{
public:
  virtual void hello() // redefinition of hello() not function overriding
  {
    std::cout << "Hello from Derived Class" << std::endl;
  }
};

int main()
{
  Base *p1 = new Base();
  Base *p2 = new Derived();

  p1->hello(); // Hello from Base Class
  p2->hello(); // Hello from Base Class

  return 0;
}
