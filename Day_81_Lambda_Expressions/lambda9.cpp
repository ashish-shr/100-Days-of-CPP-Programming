// lambda function that takes parameters [2]

#include <iostream>

int main()
{
  // lambda function
  auto sum = [](int a, int b) // parameters as integer a and b
  {
    std::cout << "a + b: " << a + b << std::endl;
  };
  sum(10, 20); // 30
  sum(8, 7);   // 15

  return 0;
}