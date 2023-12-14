// without using virtual function

#include <iostream>
using namespace std;

class Account
{
public:
  void withdraw()
  {
    cout << "In Account::withdraw" << endl;
  }
};

class Checking : public Account
{
public:
  void withdraw()
  {
    cout << "In Checking::withdraw" << endl;
  }
};

class Saving : public Account
{
public:
  void withdraw()
  {
    cout << "In Saving::withdraw" << endl;
  }
};

int main()
{
  Account *p1 = new Account();
  Account *p2 = new Checking();
  Account *p3 = new Saving();

  p1->withdraw(); // Account::withdraw
  p2->withdraw(); // Account::withdraw
  p3->withdraw(); // Account::withdraw

  delete p1;
  delete p2;
  delete p3;

  return 0;
}