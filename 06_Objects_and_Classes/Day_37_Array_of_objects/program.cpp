// Program to demonstrate array of objects

#include <iostream>
using namespace std;
class student // class
{
  int id;
  string name;

public:
  void setData(void)
  {
    cout << "Enter id and name of student: ";
    cin >> id >> name;
  }

  void getData(void)
  {
    cout << "Student info..." << endl;
    cout << "Id: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "----------------------" << endl;
  }
};

int main()
{
  student s[10]; // array of object
  int size;
  cout << "Size of student (1-10): ";
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    s[i].setData();
  }
  for (int i = 0; i < size; i++)
  {
    s[i].getData();
  }
  return 0;
}