// Program to demonstrate basic to basic type conversion

#include <iostream>
using namespace std;

int main()
{
  int a;
  float b = 3.21;
  a = b;                      // basic to basic type conversion
  cout << "a: " << a << endl; // 3
  cout << "b: " << b << endl; // 3.21
  return 0;
}