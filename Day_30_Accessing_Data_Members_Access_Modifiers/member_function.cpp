// Program to create member function

#include <iostream>
using namespace std;

class student
{
public:
  int id;
  string name;
  // member function
  void display()
  {
    cout << "Member function running";
  }
};

int main()
{
  student Rahul;
  Rahul.display();
  return 0;
}