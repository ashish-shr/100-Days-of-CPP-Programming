// 3. Program to generate multiplicative table of n number.

#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Num? ";
  cin >> num;
  for (int i = 1; i <= 10; i++)
    cout << num << " x " << i << "= " << num * i << endl;
  return 0;
}