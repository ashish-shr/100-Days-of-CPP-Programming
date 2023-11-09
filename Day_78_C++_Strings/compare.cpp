// Comparing C++ Strings

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1{"Apple"};
  string s2{"Banana"};
  string s3{"Coconut"};
  string s4{"apple"};
  string s5{s1}; // Apple

  cout << (s1 == s5) << endl;      // true
  cout << (s1 == s2) << endl;      // false
  cout << (s1 != s2) << endl;      // true
  cout << (s1 < s2) << endl;       // true
  cout << (s2 > s1) << endl;       // true
  cout << (s4 < s5) << endl;       // false
  cout << (s1 == "Apple") << endl; // true

  return 0;
}