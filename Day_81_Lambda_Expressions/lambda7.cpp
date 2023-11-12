// lambda function that specify return type

#include <iostream>

int main()
{
  // lambda function
  auto sum = [](double a, double b) -> int
  {
    return (a + b); // 8.7 + 3.21 -> 8 + 7 -> 11
  }(8.7, 3.21);
  std::cout << "sum: " << sum << std::endl; // 11

  return 0;
}