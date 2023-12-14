// 6. Calculate power of number.

#include <iostream>
using namespace std;

int main()
{
  int num, power, result = 1;
  cout << "Enter number and power: ";
  cin >> num >> power;
  for (int i = 1; i <= power; i++)
  {
    result = result * num;
  }
  cout << num << "^" << power << " is " << result;
  return 0;
}