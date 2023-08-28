# ⚡Static Data Members and Member Functions

## Static Data Members

- If a data member in a class is defined as static, then only one copy of the that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
- These data members are normally used to maintain values common to the entire class and are also called class variables.
- Memory of static data members are allocated at the time of declaration.
- By default all the static members are initialized as zero when it is created, but we can initialize it by required value.
- We can’t initialize static data member inside the class definition, we have to initialize outside the class using scope resolution operator (::) to identify which class it belongs.
- We can access static variable in two ways:
  - object.static_variable;
  - class_name::static_variable;

#### Syntax

```cpp
class class_name
{
public:
  static int i; //static data member declaration

};

int class_name::i; //static data member definition

int main()
{
  //accessing static data member using object
  class_name object;
  object.i = 1;

  //accessing static data member using class_name
  class_name::i = 1;

  return 0;
}
```

## Static member function

- Static member functions in C++ are the functions that can access only the static data members.
- These static data members share a single copy of themselves with the different objects of the same class.
- A static member function can be called even if no objects of the class exist.
- A static member function can also be accessed using the class name through the scope resolution operator.
- A static member function can access static data members and static member functions inside or outside of the class.
- A function can be made static by using the keyword static before the function name while defining a class.

#### Syntax

```cpp
class class_name
{
public:
  static int i; //static data member declaration
  static returntype function_name() //static member function
  {
    //statements
  }
};

int class_name::i; //static data member definition

int main()
{
  class_name object;

  // accessing static data member by using object
  object.i = 3;

  // accessing static data member by using class_name
  class_name::i = 3;

  // accessing static member function by using object
  object.function_name();

  // accessing static member function by using class_name
  class_name::function_name();

  return 0;
}
```

## Programs

```cpp
// Program to demonstrate static data member

#include <iostream>
using namespace std;

class student
{
public:
  static int id; // static data member declaration
};

int student::id; // static data member definition

int main()
{
  student s1, s2;
  s1.id = 3;
  s2.id = 8;
  cout << s1.id << endl;
  cout << s2.id << endl;
  return 0;
}
```

```cpp
// Program to demonstrate static member function
#include <iostream>
using namespace std;

class student
{
public:
  static int id;     // static data member declaration
  static void show() // static member function
  {
    cout << "The value of id is " << id << endl;
  }
};

int student::id; // static data member definition

int main()
{
  student s;

  // accessing static data member by using object
  s.id = 3;

  // accessing static data member by using class_name
  student::id = 3;

  // accessing static member function by using object
  s.show();

  // accessing static member function by using class_name
  student::show();

  return 0;
}
```
