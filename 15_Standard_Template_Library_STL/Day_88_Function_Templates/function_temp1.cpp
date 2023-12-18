// program to find max out of 2 variables using function template

#include <iostream>

// function template
template <typename T>
T max(T a, T b)
{
  return (a > b) ? a : b;
}

int main()
{
  // calling max function template
  std::cout << max<int>(3, 21) << std::endl;
  std::cout << max<float>(8.3f, 7.3f) << std::endl;
  std::cout << max<double>(1.4, 3.8) << std::endl;

  return 0;
}