// Declaring and Initializing C++ Strings

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1;              // empty
  string s2{"Ashish"};    // Ashish
  string s3{s2};          // Ashish
  string s4{"Ashish", 3}; // Ash
  string s5{s2, 0, 2};    // As
  string s6{3, 'X'};      // XXX
  return 0;
}