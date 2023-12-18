// lambda function that print directly

#include <iostream>

int main()
{
  // lambda function
  std::cout << "sum: " << [](int a, int b)
  {
    return (a + b);
  }(3, 21) << std::endl; // 24

  return 0;
}