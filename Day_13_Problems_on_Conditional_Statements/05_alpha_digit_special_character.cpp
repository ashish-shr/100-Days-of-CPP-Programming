// 5. Write a C++ program to check whether a character is an alphabet, digit or special character.

#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout << "Character? ";
  cin >> ch;
  if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    cout << ch << " is an alphabet";
  else if (ch >= '0' && ch <= '9')
    cout << ch << " is a digit";
  else
    cout << ch << " is a special character";
  return 0;
}