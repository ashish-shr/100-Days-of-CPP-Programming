/* program to buy icecream if you have money
- You can buy one cone of icecream if you have money Rs. 50
- You can buy two cones of icecream if you have money greater than Rs. 50
*/

#include <iostream>
using namespace std;

int main()
{
  int money;
  cout << "Your money: ";
  cin >> money;
  if (money)
  {
    if (money == 50)
    {
      cout << "One cone of icecream" << endl;
    }
    else if (money > 50)
    {
      cout << "Two cones of icecream" << endl;
    }
  }
  else
  {
    cout << "No money" << endl;
  }
  return 0;
}