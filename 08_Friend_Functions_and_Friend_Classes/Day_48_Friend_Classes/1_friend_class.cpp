// Program to demonstrate friend class [1]

#include <iostream>
using namespace std;

class info; // forward declaration

class student // container class
{
  int id;
  string name;
  friend class info; // friend class declaration
};

class info // friend class definition
{
  int id;
  string name;

public:
  void getInfo(student s)
  {
    cout << "Enter id and name of student: " << endl;
    cin >> s.id >> s.name;
    id = s.id;
    name = s.name;
  }

  void showInfo(void)
  {
    cout << "Student info..." << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
  }
};

int main()
{
  student s1;
  info Bishal;
  Bishal.getInfo(s1);
  Bishal.showInfo();
  return 0;
}