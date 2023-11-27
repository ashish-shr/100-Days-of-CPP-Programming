// namespace alias

#include <iostream>
using namespace std;

namespace outer_ns
{
  void func1()
  {
    cout << "This function is inside the outer namespace." << endl;
  }

  namespace inner_ns
  {
    void func2()
    {
      cout << "This function is inside the inner namespace." << endl;
    }
  }

}

// creating an alias for an outer namespace
namespace o_ns = outer_ns;

// creating an alias for an inner namespace
namespace i_ns = outer_ns::inner_ns;

int main()
{
  // calling func1() from outer namespace
  o_ns::func1();

  // calling func2() from inner namespace
  // no need to write o_ns::i_ns::func2()
  // equivalent to outer_ns::inner_ns::func2()
  i_ns::func2();

  return 0;
}