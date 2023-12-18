// lambda function that takes parameters

#include <iostream>

int main()
{
  // lambda function
  [](int a, int b) // parameters as integer a and b
  {
    std::cout << "a + b: " << a + b << std::endl;
  }(3, 21); // 24

  return 0;
}