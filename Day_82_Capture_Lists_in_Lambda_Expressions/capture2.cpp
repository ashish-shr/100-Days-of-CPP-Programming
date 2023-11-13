// capturing by value

#include <iostream>

int main()
{
  int var{3};

  // value
  auto func = [var]()
  {
    std::cout << "Inner value: " << var << std::endl;
  };

  for (int i = 0; i < 5; i++)
  {
    std::cout << "Outer value: " << var << std::endl;
    func();
    ++var;
  }
}