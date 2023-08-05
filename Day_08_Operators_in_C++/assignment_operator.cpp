// program on assignment operators
#include <iostream>
using namespace std;

int main()
{
  int a = 3;
  cout << "a += 2" << (a += 2) << endl;
  cout << "a -= 2" << (a -= 2) << endl;
  cout << "a *= 2" << (a *= 2) << endl;
  cout << "a /= 2" << (a /= 2) << endl;
  cout << "a %= 2" << (a %= 2) << endl;
  return 0;
}