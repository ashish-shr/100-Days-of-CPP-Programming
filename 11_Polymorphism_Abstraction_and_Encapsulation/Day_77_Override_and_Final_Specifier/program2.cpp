// with using override specifier

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
  virtual void hello() override // make sure hello() overrides or not
  {
    std::cout << "Hello from Derived Class" << std::endl;
  }
};

int main()
{
  Base *p1 = new Base();
  Base *p2 = new Derived();

  p1->hello();
  p2->hello();

  return 0;
}
