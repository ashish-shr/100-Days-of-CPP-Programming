// 1. Fibonacci Series Using Recursion in C++.

#include <iostream>
using namespace std;

int fibonnaci(int);

int main()
{
  int n, i = 0;
  cout << "Number of terms? ";
  cin >> n;
  cout << "\nFibonnaci Series : ";
  while (i < n)
  {
    cout << " " << fibonnaci(i);
    i++;
  }
  return 0;
}

int fibonnaci(int n)
{
  if ((n == 1) || (n == 0))
    return (n);
  else
    return (fibonnaci(n - 1) + fibonnaci(n - 2));
}