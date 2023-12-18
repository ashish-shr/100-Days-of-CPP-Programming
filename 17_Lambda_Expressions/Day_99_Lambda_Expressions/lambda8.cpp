// lambda function that returns something [2]

#include <iostream>

int main()
{
  // lambda function
  auto sum = [](int a, int b)
  {
    return (a + b);
  };
  std::cout << "sum: " << sum(8, 7) << std::endl; // 24

  return 0;
}