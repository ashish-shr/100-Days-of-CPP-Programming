// program on bitwise operators
#include <iostream>
using namespace std;

int main()
{
  int a = 3, b = 10;
  cout << "a & b: " << (a & b) << endl;
  cout << "a | b: " << (a | b) << endl;
  cout << "a ^ b: " << (a ^ b) << endl;
  cout << "~a: " << (~a) << endl;
  cout << "a << b: " << (a << b) << endl;
  cout << "a >> b: " << (a >> b) << endl;
  return 0;
}