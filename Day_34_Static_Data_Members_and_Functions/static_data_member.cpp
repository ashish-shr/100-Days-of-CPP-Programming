// Program to demonstrate static data members

#include <iostream>
using namespace std;

class student
{
  string name;
  string faculty;
  static int i; // static data member declaration

public:
  student(string n, string f)
  {
    name = n;
    faculty = f;
  }
  void showData()
  {
    cout << "Student " << i << endl;
    cout << "Name: " << name << endl;
    cout << "Faculty: " << faculty << endl;
    i++;
  }
};

int student::i = 1; // static data member declaration

int main()
{
  student s1("Bishal Baniya", "Education");
  s1.showData();
  student s2("Diwakar Phuyal", "Education");
  s2.showData();
  return 0;
}