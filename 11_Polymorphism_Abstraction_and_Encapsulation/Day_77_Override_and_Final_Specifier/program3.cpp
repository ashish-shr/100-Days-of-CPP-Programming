// Program to demonstrate final specifier in function

#include <iostream>

class Base
{
public:
  virtual void hello() final
  {
    std::cout << "hello from Base" << std::endl;
  }
};

class Derived : public Base
{
  virtual void hello() // hello() cannot be overridden
  {
    std::cout << "hello from Derived" << std::endl;
  }
};

int main()
{
  Derived d;
  Base &b = d;
  b.hello();
  return 0;
}
