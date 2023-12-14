// Program to demonstrate Private derivation

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

class programmer : employee // derived class
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
  programmer Bishal(1, "Bishal Baniya", 800.0f, 3);
  Bishal.display();
  return 0;
}