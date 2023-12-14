# ⚡Data Members, Member Functions and Access Modifiers

## Accessing the Data Members of Class

- The public data members of objects of a class can be accessed using the direct
  member access operator (.)
- Syntax:
  object.class_member;

## Member Function of Class

- A member function of a class is a function that has its definition or its prototype within the class definition like any other variable.
- It operates on any object of the class of which it is a member, and has access to all the members of a class for that object.
- Member functions can be defined within the class definition or separately
  using scope resolution operator, (::).
- Defining a member function within the class definition declares the function inline, even if we do not use the inline specifier.

## Class Access Modifiers

- Class Access modifiers are keywords that can be used to control the visibility of fields, methods, and constructors in a class.
- The keywords public, private, and protected are called access specifiers.

## The public Members:

- A public member is accessible from anywhere outside the class but within a
  program.

## The private Members:

- A private member variable or function cannot be accessed, or even viewed from
  outside the class. Only the class and friend functions can access private members.
  By default all the members of a class would be private.

## The protected Members:

- A protected member variable or function is very similar to a private member they can be accessed in child classes which are called derived classes.

## Programs

```cpp
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
```

```cpp
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
```

```cpp
// Program to create member function

#include <iostream>
using namespace std;

class student
{
public:
  int id;
  string name;
  // member function
  void display()
  {
    cout << "Member function running";
  }
};

int main()
{
  student Rahul;
  Rahul.display();
  return 0;
}
```

```cpp
// Program to define member function outside of the class

#include <iostream>
using namespace std;

class student
{
public:
  int id;
  string name;
  void display();
};

// member function definition outside of class
void student::display()
{
  cout << "member function outside class" << endl;
}

int main()
{
  student Rahul;
  Rahul.display();
  return 0;
}
```
