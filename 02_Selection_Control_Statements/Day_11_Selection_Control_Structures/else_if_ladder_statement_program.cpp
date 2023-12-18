/* program to have :
- Veg MOMO if money is greater than 100
- Paneer MOMO if money is greater than 110
- Chicken MOMO if money is greater than 120
*/

#include <iostream>
using namespace std;

int main()
{
  int money;
  cout << "Your money: ";
  cin >> money;
  if (money > 100)
  {
    cout << "Have a Veg MOMO" << endl;
  }
  else if (money > 110)
  {
    cout << "Have a Paneer MOMO" << endl;
  }
  else if (money > 120)
  {
    cout << "Have a Chicken MOMO" << endl;
  }
  cout << "Go home!" << endl;
  return 0;
}