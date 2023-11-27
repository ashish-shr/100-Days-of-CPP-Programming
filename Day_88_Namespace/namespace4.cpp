// discontiguous Namespaces in C++

#include <iostream>
using namespace std;

// 1st part of the namespace
namespace ns
{
  int var = 20;
}

// 2nd part of the namespace ns
namespace ns
{
  void func()
  {
    cout << "The value of var is: " << var << endl;
  }
}

int main()
{
  cout << ns::var << endl;
  ns::func();

  return 0;
}