#include <iostream>
using namespace std;

// overloaded function
int sum(int, int);
int sum(int, int, int);

int main()
{
  cout << "Passing 1 and 2 arguments: " << sum(1, 2) << endl;
  cout << "Passing 1, 2, and 3 arguments: " << sum(1, 2, 3);
  return 0;
}

int sum(int a, int b)
{
  return a + b;
}

int sum(int a, int b, int c)
{
  return a + b + c;
}