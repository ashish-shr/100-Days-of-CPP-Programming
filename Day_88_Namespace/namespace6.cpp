// class inside namespace

#include <iostream>
using namespace std;

namespace ns
{
  // a class in a namespace
  class Printer
  {
  public:
    void print_text()
    {
      cout << "print_text() function is executed." << endl;
    }
  };
}

int main()
{
  // creating an object of the class Printer
  ns::Printer p;

  // calling the print_text() function
  p.print_text();

  return 0;
}