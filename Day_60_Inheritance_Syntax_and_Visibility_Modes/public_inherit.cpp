// Program to demonstrate Public derivation

#include <iostream>
using namespace std;

class employee // base class
{
public:
  int id;
  string name;
  float salary;
  int experience;
};

class programmer : public employee // derived class
{

public:
  programmer(int getId, string getName, float getSalary, int getExperience)
  {
    id = getId;
    salary = getSalary;
    name = getName;
    experience = getExperience;
  }

  void display()
  {
    cout << "Employee ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
    cout << "Experience: " << experience << endl;
  }
};

int main()
{
  programmer Rahul(1, "Rahul Das", 800.0f, 3);

  // here, the data members can be directly accessed
  cout << "Employee ID: " << Rahul.id << endl;
  cout << "Name: " << Rahul.name << endl;
  cout << "Salary: " << Rahul.salary << endl;
  cout << "Experience: " << Rahul.experience << endl;
  return 0;
}