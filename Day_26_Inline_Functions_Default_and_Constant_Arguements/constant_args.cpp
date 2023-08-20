// CPP Program to demonstrate constant arguments

#include <iostream>
using namespace std;

void len(const int num)
{
  // this is not allowed
  num = 4;
}

int main()
{
  len(321);
  return 0;
}