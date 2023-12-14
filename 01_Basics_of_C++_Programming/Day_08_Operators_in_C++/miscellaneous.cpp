// program on ternary, sizeof(), casting operators
#include <iostream>
using namespace std;

int main()
{
  int a = 3, b = 10;
  const float PI = 3.14f;
  (a > b) ? cout << a : cout << b << endl;
  cout << "Size of a: " << sizeof(a) << endl;
  cout << "PI: " << int(PI) << endl;
  return 0;
}