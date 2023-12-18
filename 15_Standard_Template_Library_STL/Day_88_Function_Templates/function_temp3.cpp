// overloading function template

#include <iostream>

// template to calculate max of 2 variables
template <typename T>
T max(T a, T b)
{
  return (a > b) ? a : b;
}

// template to calculate max of 3 variables
template <typename T>
T max(T a, T b, T c)
{
  return max(max(a, b), c);
}

int main()
{
  std::cout << "Max(3, 21): " << max<int>(3, 21) << std::endl;
  std::cout << "Max(8, 7, 3): " << max<int>(8, 7, 3) << std::endl;

  return 0;
}