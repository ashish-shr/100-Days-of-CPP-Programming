// lambda function that returns something

#include <iostream>

int main()
{
  // lambda function
  auto sum = [](int a, int b)
  {
    return (a + b);
  }(3, 21);
  std::cout << "sum: " << sum << std::endl; // 24

  return 0;
}