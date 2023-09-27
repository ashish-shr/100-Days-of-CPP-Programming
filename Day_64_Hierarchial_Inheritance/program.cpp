// Program to demonstrate Hierarchial inheritance

#include <iostream>
using namespace std;

// base class
class StudentDetails
{
  int id;
  string name;

public:
  void getDetails()
  {
    cout << "Student ID: ";
    cin >> id;
    cout << "Student Name: ";
    cin >> name;
  }
};

// first derived class
class SubjectMarks : public StudentDetails
{
protected:
  float physics, maths;

public:
  void getMarks()
  {
    cout << "Physics Marks: ";
    cin >> physics;
    cout << "Maths Marks: ";
    cin >> maths;
  }
};

// second derived class
class Result : public SubjectMarks
{
  float totalMarks;

public:
  void getResult()
  {
    totalMarks = physics + maths;
    cout << "Total Marks: " << totalMarks;
  }
};

int main()
{
  Result Bishal;
  Bishal.getDetails();
  Bishal.getMarks();
  Bishal.getResult();
  return 0;
}