// call lambda function directly after definition

#include <iostream>

int main()
{
  // lambda function
  []()
  {
    std::cout << "Good Morning" << std::endl;
  }(); // Good Morning

  return 0;
}