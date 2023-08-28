# ⚡Static Data Members and Member Functions

## Static Data Members

- If a data member in a class is defined as static, then only one copy of the that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
- These data members are normally used to maintain values common to the entire class and are also called class variables.
- Memory of static data members are allocated at the time of declaration. By default all the static members are initialized as zero when it is created, but we can initialize it by required value.
- We can’t initialize static data member inside the class definition, we have to initialize outside the class using scope resolution operator (::) to identify which class it belongs.

#### Program

```cpp
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
```

## Static Member Function
