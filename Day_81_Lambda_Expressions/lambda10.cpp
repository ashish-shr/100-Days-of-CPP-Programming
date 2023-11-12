// lambda function that takes parameters [3]

#include <iostream>

int main()
{
  int a, b;
  std::cout << "Enter a and b: " << std::endl;
  std::cin >> a >> b; // 10 20

  // lambda function
  auto sum = [](int a, int b) // parameters as integer a and b
  {
    std::cout << "a + b: " << a + b << std::endl;
  };
  sum(a, b); // 30
  return 0;
}