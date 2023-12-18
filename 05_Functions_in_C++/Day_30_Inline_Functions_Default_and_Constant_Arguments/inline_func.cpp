// CPP Program to demonstrate inline function

#include <iostream>
using namespace std;

// inline function
inline int cube(int s)
{
  return s * s * s;
}

int main()
{
  cout << "The cube of 3 is: " << cube(3) << "\n";
  return 0;
}
