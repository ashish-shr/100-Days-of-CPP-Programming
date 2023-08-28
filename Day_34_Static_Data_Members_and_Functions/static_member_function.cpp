// Program to demonstrate static member function
#include <iostream>
using namespace std;

class student
{
public:
  static int id;     // static data member declaration
  static void show() // static member function
  {
    cout << "The value of id is " << id << endl;
  }
};

int student::id; // static data member definition

int main()
{
  student s;

  // accessing static data member by using object
  s.id = 3;

  // accessing static data member by using class_name
  student::id = 3;

  // accessing static member function by using object
  s.show();

  // accessing static member function by using class_name
  student::show();

  return 0;
}