// Program to demonstrate final specifier in class

#include <iostream>

class Base final
{
public:
  void hello()
  {
    std::cout << "hello from Base" << std::endl;
  }
};

class Derived : public Base // cannot be derived
{
public:
  void hello()
  {
    std::cout << "hello from Derived" << std::endl;
  }
};

int main()
{
  Derived d;
  d.hello();
  return 0;
}
