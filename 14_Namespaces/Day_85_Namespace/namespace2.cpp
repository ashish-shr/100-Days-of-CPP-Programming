// including the header file.
#include "mynamespace.h"

int main()
{
  // using directive.
  using namespace Employee;

  /*
  Now, all variables, functions, and classes are in the namespace
  Employee can be directly used here.
  */

  Employees e1;

  return 0;
}