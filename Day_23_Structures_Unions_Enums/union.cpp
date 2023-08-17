// C++ program to demonstrate Unions

#include <iostream>
using namespace std;

union employee
{
  float salary;
  int work_hour;
} emp;

int main()
{
  emp.salary = 143.3;

  // when emp.work_hour is assigned a value, emp.salary will no longer hold 143.3
  emp.work_hour = 8;

  // Print members of employee
  cout << emp.salary << endl;
  cout << emp.work_hour;
  return 0;
}