// Program to demonstrate access modifiers

#include <iostream>
using namespace std;

class student
{
private: // cannot be accessed
  string phone;

public: // can be accessed
  int id;
  string name;
  string faculty;

protected: // cannot be accessed
  string guardian_phone;
};

int main()
{
  student Rahul;
  Rahul.phone = "987654321"; // not allowed
  Rahul.id = 1;
  Rahul.name = "Rahul Das";
  Rahul.faculty = "Science";
  Rahul.guardian_phone = "098765432"; // not allowed
  return 0;
}