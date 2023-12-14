// namespace using scope resolution operator (::)

#include <iostream>

namespace ns1
{
  void greet()
  {
    std::cout << "Hello from namespace ns1." << std::endl;
  }
}

namespace ns2
{
  void greet()
  {
    std::cout << "Hello from namespace ns2." << std::endl;
  }

  int var = 10;

  int func()
  {
    return var * 3;
  }
}

int main()
{
  // Run the greet() function present in ns1
  ns1::greet();

  // Run the greet() function present in ns2
  ns2::greet();

  return 0;
}
