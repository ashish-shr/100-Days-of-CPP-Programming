// program to have coffee in cafe if money is greater than 100 otherwise have a black tea in tea stall

#include <iostream>
using namespace std;

int main()
{
  int money;
  cout << "Your money: ";
  cin >> money;
  if (money > 100)
  {
    cout << "Have a coffee in cafe" << endl;
  }
  else
  {
    cout << "Have a black tea in tea stall" << endl;
  }
  cout << "Go home!" << endl;
  return 0;
}