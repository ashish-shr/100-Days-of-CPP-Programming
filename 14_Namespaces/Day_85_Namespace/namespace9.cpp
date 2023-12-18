// defining methods outside the namespace

#include <iostream>
using namespace std;

namespace ns
{
  // declaring a function
  void func1();

  class Printer
  {
  public:
    // declaring a method
    void func2();
  };

}

// defining func1()
void ns::func1()
{
  cout << "func1() executed successfully" << endl;
}

// defining func2()
void ns::Printer::func2()
{
  cout << "func2() executed successfully" << endl;
}

int main()
{
  // creating an object to execute func2().
  ns::Printer obj;

  // executing func1().
  ns::func1();

  // executing func2().
  obj.func2();

  return 0;
}