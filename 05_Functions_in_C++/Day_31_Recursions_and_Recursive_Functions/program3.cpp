// 3. Calculate Number Power Using Recursion.

#include <iostream>
using namespace std;

int calculate(int, int);

int main()
{
  int base, power, result;
  cout << "Base? ";
  cin >> base;
  cout << "Power? ";
  cin >> power;
  result = calculate(base, power);
  cout << base << "^" << power << " = " << result;
  return 0;
}

int calculate(int base, int power)
{
  if (power != 0)
    return (base * calculate(base, power - 1));
  else
    return 1;
}