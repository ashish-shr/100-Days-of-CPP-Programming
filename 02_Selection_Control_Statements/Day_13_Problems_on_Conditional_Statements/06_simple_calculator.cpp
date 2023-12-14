// 6. Calculator program to ask two numbers and do mathematical operations such as (+, -, *, /, %) using switch case statement.

#include <iostream>
using namespace std;

int main()
{
  int fnum, snum, choice;
  cout << "1. Add | 2. Subtract | 3. Multiply | 4. Divide | 5. Remainder" << endl;
  cin >> choice;
  switch (choice)
  {
  case 1:
    cout << "Enter two numbers: ";
    cin >> fnum >> snum;
    cout << fnum + snum;
    break;

  case 2:
    cout << "Enter two numbers: ";
    cin >> fnum >> snum;
    cout << fnum - snum;
    break;

  case 3:
    cout << "Enter two numbers: ";
    cin >> fnum >> snum;
    cout << fnum * snum;
    break;

  case 4:
    cout << "Enter two numbers: ";
    cin >> fnum >> snum;
    cout << fnum / snum;
    break;

  case 5:
    cout << "Enter two numbers: ";
    cin >> fnum >> snum;
    cout << fnum % snum;

  default:
    cout << "Invalid choice!";
  }
  return 0;
}