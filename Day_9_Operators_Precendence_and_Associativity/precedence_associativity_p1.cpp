#include <iostream>
using namespace std;

int main()
{
  int a = 2 + 3 * 5;
  cout << "a: " << a << endl;
  int b = (2 + 3) * 5;
  cout << "b: " << b << endl;
  int c = 2 + 3 * 5 / 2 % 3;
  cout << "c: " << c << endl;
  int d = 2 + 3 | 12 / 6 - 1 << 1 && 6 % 7 / 3 * 5;
  cout << "d: " << d << endl;
  return 0;
}