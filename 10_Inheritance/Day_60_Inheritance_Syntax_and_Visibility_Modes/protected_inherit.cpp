// Program to demonstrate Protected derivation

#include <iostream>
using namespace std;

class employee // base class
{

protected:
  int id;
  float salary;

public:
  string name;
  int experience;
};

class programmer : protected employee // derived class
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
  programmer Anubhav(1, "Anubhav Sharma", 800.0f, 3);
  Anubhav.display();
  return 0;
}