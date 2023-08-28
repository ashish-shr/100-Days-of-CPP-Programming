# ⚡Structures, Unions and Enums

## Structure

- A structure is a user-defined data type used to group items of possibly different types into a single type.
- Structures in C++ can contain two types of members:
  - <b>Data Member</b>: We can create a structure with variables of different data types.
  - <b>Member Functions</b>: Along with variables, we can also include functions inside a structure declaration.

## How to create a structure

- The 'struct' keyword is used to create a structure.

#### Syntax:

```cpp
   struct structure_name
   {
    member1;
    member2;
    member3;
    .
    .
    memberN;
  };
```

## Structure using typedef

- 'typedef' is a keyword that is used to assign a new name to any existing data-type.

#### Syntax:

```cpp
  typedef struct struct_name
  {
    member1;
    member2;
    member3;
    .
    .
    memberN;
  }new_name;
```

## Union

- A union is a user-defined type in which all members share the same memory location.

## How to create a union

- The 'union' keyword is used to create a union.

#### Syntax:

```cpp
   union union_name
   {
    member1;
    member2;
    member3;
    .
    .
    memberN;
  };
```

## Enums

- Enums are user-defined types that consist of named integral constants.
- It helps to assign constants to a set of names to make the program easier to read, maintain and understand.

## How to create an enum

- An Enumeration is declared by using the keyword "enum".

#### Syntax:

```cpp
enum enum_name{member1, member2, ......, memberN};
```

## Programs

```cpp
// C++ program to demonstrate Structures

#include <iostream>
using namespace std;

struct student
{
  int roll;
  string name;
};

int main()
{
  struct student s;
  // Assign values to members of student
  s.roll = 1;
  s.name = "Ashish Shrestha";

  // Print members of student
  cout << s.roll << "\n";
  cout << s.name << "\n";
  return 0;
}
```

```cpp
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
```

```cpp
// C++ program to demonstrate Enums

#include <iostream>
using namespace std;

enum week
{
  Sun,
  Mon,
  Tue,
  Wed,
  Thur,
  Fri,
  Sat
};

int main()
{
  enum week day;
  day = Wed;
  cout << day; // day -> 3
  return 0;
}
```
