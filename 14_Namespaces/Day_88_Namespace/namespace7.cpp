// defining class outside namespace

#include <iostream>
using namespace std;

namespace ns
{
  // declaring the class inside the namespace
  class Printer;
}

// defining the class outside the namespace
class ns::Printer
{
public:
  void print_text()
  {
    cout << "Defining classes outside the namespace.";
  }
};

int main()
{
  // creating object of Printer class
  ns::Printer obj;

  obj.print_text();

  return 0;
}