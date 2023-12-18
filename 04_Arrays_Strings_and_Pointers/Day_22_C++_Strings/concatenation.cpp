// Concatenation in C++ Strings

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string part1{"C++"};
  string part2{"is awesome"};

  string sentence;

  sentence = part1 + " " + part2 + " language!";
  cout << sentence; // C++ is awesome language!

  sentence = "C++" + "is awesome!"; // illegal

  return 0;
}