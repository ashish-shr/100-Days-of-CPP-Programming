// namespace3.cpp
#include <iostream>
#include "mynamespace2.h"

using namespace std;

using namespace ns1; // using directive

int main()
{
  using ns2::print_text; // using declaration

  // calling print_text() function
  print_text();

  // calling the hello() function
  hello();

  return 0;
}