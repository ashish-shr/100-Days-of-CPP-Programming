// program to find max out of 2 variables of different datatypes using function template

#include <iostream>

// function template
template <typename T1, typename T2>
void max(T1 a, T2 b)
{
  std::cout << ((a > b) ? a : b) << std::endl;
}

int main()
{
  // calling max function template
  max<int, int>(3, 21);
  max<int, float>(8, 7.3f);
  max<float, double>(1.4f, 3.8);

  return 0;
}