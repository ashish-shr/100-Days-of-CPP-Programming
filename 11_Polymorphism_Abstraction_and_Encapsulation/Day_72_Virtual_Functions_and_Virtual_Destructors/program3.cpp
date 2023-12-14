// without using virtual destructor

#include <iostream>
using namespace std;

class Account
{
public:
  virtual void withdraw()
  {
    cout << "In Account::withdraw" << endl;
  }

  ~Account()
  {
    cout << "~Account called..." << endl;
  }
};

class Checking : public Account
{
public:
  virtual void withdraw()
  {
    cout << "In Checking::withdraw" << endl;
  }

  ~Checking()
  {
    cout << "~Checking called..." << endl;
  }
};

class Saving : public Account
{
public:
  virtual void withdraw()
  {
    cout << "In Saving::withdraw" << endl;
  }

  ~Saving()
  {
    cout << "~Saving called..." << endl;
  }
};

int main()
{
  Account *p1 = new Account();
  Account *p2 = new Checking();
  Account *p3 = new Saving();

  delete p1;
  delete p2;
  delete p3;

  return 0;
}