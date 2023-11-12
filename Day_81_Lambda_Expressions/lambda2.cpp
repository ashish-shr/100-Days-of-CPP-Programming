#include <iostream>

int main()
{
  // lambda function assigned to a auto variable
  auto func = []()
  {
    std::cout << "Good Morning" << std::endl;
  };
  func(); // Good Morning
  return 0;
}