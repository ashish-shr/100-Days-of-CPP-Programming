// 4. Program to display fibonacci series of n numbers.

#include <iostream>
using namespace std;

int main()
{
  int n, firstNum = 0, secondNum = 1;
  cout << "Series upto? ";
  cin >> n;
  cout << firstNum << " " << secondNum << " ";
  for (int i = 3; i <= n; i++)
  {
    int next = firstNum + secondNum;
    cout << next << " ";
    firstNum = secondNum;
    secondNum = next;
  }
  return 0;
}
