// 2. Program to find factorial of n number.

#include <iostream>
using namespace std;

int main()
{
  int num, fact = 1;
  cout << "Number? ";
  cin >> num;
  for (int i = 1; i <= num; i++)
    fact = fact * i;
  cout << "Factorial of " << num << " is " << fact;
  return 0;
}
