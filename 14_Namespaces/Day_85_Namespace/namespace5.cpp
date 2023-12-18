// nested namespaces

#include <iostream>
using namespace std;

namespace outer_ns
{
  int outer = 10;
  namespace inner_ns
  {
    int inner = 20;
  }
}

int main()
{
  // outer_ns namespace
  cout << outer_ns::outer << endl;

  // inner_ns namespace
  cout << outer_ns::inner_ns::inner << endl;

  return 0;
}