# ⚡Constructor Initialization List

## Initialization List

Initialization lists are an alternative technique for initializing an object's data members in a constructor.

#### Syntax

```cpp
constructor (arguments) : initialization-section
{
  //statements
}
```

### Examples

```cpp
Date(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}
```

can instead be written using an initialization list:

```cpp
Date(int m, int d, int y) : month{m}, day{d}, year{y}
{
}
```

If we have a data member of your class that has the same name as a parameter to your constructor, then the initialization list "does the right thing." For example,

```cpp
Date(int month, int day, int year) : month{month}, day{day}, year{year}
{
}
```

is roughly equivalent to

```cpp
Date(int month, int day, int year)
{
    this->month = month;
    this->day = day;
    this->year = year;
}
```

That is, the compiler knows which month belongs to the object, and which month is the local variable that is declared in the member function.

### Points to remember

- Constructor initialization lists are more efficient to initialize the data members as the object is created.
- The order of initialization is the order of declaration in the class.

### Examples

```cpp
// Program to demonstrate constructor initialization without initialization lists

#include <iostream>
using namespace std;

class Date
{
  int month, day, year;

public:
  Date()
  {
    month = 0;
    day = 0;
    year = 0;
  }

  Date(int m, int d, int y)
  {
    month = m;
    day = d;
    year = y;
  }

  void display()
  {
    cout << month << "/" << day << "/" << year << endl;
  }
};

int main()
{
  Date d1;
  d1.display();
  Date d2(10, 20, 30);
  d2.display();
  return 0;
}
```

```
Output:
0/0/0
10/20/30
```

```cpp
// Program to demonstrate constructor initialization using initialization lists

#include <iostream>
using namespace std;

class Date
{
  int month, day, year;

public:
  Date() : month{0}, day{0}, year{0}
  {
  }

  Date(int m, int d, int y) : month{m}, day{d}, year{y}
  {
  }

  void display()
  {
    cout << month << "/" << day << "/" << year << endl;
  }
};

int main()
{
  Date d1;
  d1.display();
  Date d2(10, 20, 30);
  d2.display();
  return 0;
}
```

```
Output:
0/0/0
10/20/30
```
