// Program to access data members of class

#include <iostream>
using namespace std;

class student
{
public:        // access modifier
  int id;      // data member
  string name; // data member
  string sex;  // data member
};

int main()
{
  student Rahul; // Rahul object of class student
  // accessing data members of class student
  Rahul.id = 1;
  Rahul.name = "Rahul Das";
  Rahul.sex = "Male";
  cout << "Student details:" << endl;
  cout << "ID: " << Rahul.id << endl;
  cout << "Name: " << Rahul.name << endl;
  cout << "Sex: " << Rahul.sex << endl;
  return 0;
}