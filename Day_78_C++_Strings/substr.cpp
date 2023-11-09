// Substrings - substr() in C++

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1{"You are kind"};

  cout << s1.substr(0, 3) << endl; // You
  cout << s1.substr(4, 3) << endl; // are
  cout << s1.substr(8, 4) << endl; // kind

  return 0;
}