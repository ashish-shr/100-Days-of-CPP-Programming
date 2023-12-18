// 5. Program to reverse a number.

#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Number? ";
  cin >> num;
  int rem, sum;
  while (num > 0)
  {
    rem = num % 10;
    sum = sum * 10 + rem;
    num = num / 10;
  }
  cout << "Reverse: " << sum;
  return 0;
}