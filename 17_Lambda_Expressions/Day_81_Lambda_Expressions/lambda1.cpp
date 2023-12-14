#include <iostream>

int main()
{
  // lambda function
  []()
  {
    std::cout << "Good Morning" << std::endl;
  };
  // does nothing because we have not called it yet
  return 0;
}