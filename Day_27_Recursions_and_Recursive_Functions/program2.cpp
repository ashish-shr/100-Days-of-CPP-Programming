// 2. Fibonacci Series Using Recursion in C++.

#include <iostream>
using namespace std;

int fact(int n);

int main()
{
  int n;
  cout << "Number? ";
  cin >> n;
  cout << "Factorial of " << n << " = " << fact(n);
  return 0;
}

int fact(int n)
{
  if (n > 1)
    return n * fact(n - 1);
  else
    return 1;
}