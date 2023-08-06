/*
Program to select dish using switch case statement.
  1. Ham
  2. Shrimp
  3. Rice
  4. Spaghetti
*/

#include <iostream>
using namespace std;

int main()
{
  int dish;
  cout << "Which dish? ";
  cin >> dish;
  switch (dish)
  {
  case 1:
    cout << "Ham" << endl;
    break;
  case 2:
    cout << "Shrimp" << endl;
    break;
  case 3:
    cout << "Rice" << endl;
    break;
  case 4:
    cout << "Spaghetti" << endl;
    break;
  default:
    cout << "Dish not available" << endl;
  }
  cout << "Thankyou for visiting us.";
  return 0;
}