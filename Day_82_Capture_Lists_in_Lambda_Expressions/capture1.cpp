// using external variables without capture list

#include <iostream>

int main()
{
  int a{3};
  int b{21};

  // lambda function
  auto sum = []()
  {
    std::cout << "a + b: " << (a + b) << std::endl;
  }(); // this will give an error

  return 0;
}