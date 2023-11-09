// Accessing Characters using [] and at() method

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s{"Cat"};

  cout << s[0] << endl;    // C
  cout << s.at(0) << endl; // C

  s[0] = 'H'; // Hat
  cout << s << endl;

  s.at(0) = 'B'; // Bat
  cout << s << endl;
  return 0;
}