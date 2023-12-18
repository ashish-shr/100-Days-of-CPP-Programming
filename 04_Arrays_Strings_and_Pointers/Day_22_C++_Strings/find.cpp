// Substrings - find() in C++

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1{"This is awesome"};

  cout << s1.find("This") << endl;    // 0
  cout << s1.find("is") << endl;      // 2
  cout << s1.find("awesome") << endl; // 8
  cout << s1.find('e') << endl;       // 10
  cout << s1.find("is", 4) << endl;   // 5

  return 0;
}