// global namespace

#include <iostream>
using namespace std;

/*
var is defined in the global namespace, i.e.,
this variable exists everywhere in the program
*/
int var = 10;

namespace ns
{
  int var = 20;
}

int main()
{
  cout << ::var << endl;   // global namespace
  cout << ns::var << endl; // ns namespace
  return 0;
}