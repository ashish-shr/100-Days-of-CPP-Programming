// Removing characters using erase() and clear()

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1{"Apple"};
  cout << s1.erase(0, 2) << endl; // ple

  string s2{"Banana"};
  cout << s2.erase(3, 3) << endl; // Ban

  // cout << s1.clear() << endl;//illegal
  s1.clear();
  cout << s1 << endl; // empty
  return 0;
}