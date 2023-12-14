# ⚡Data Conversion

## Data Conversion

- Data conversion simply means the conversion of data of one type into another type.
- Generally, we have two datatypes i.e. Basic/Primitive datatypes and User-defined datatypes.
- Basic/Primitive datatypes includes int, float, char etc whereas, User-defined datatypes includes class, structure, union etc.
- There are mainly 4 types of data conversion.
  - Basic to Basic type conversion [automatic conversion]
  - Basic to User-defined type conversion
  - User-defined to Basic type conversion
  - User-defined to User-defined type conversion

## Basic to Basic type conversion

- It is done automatically by the compiler.

### Example

```cpp
// Program to demonstrate basic to basic type conversion

#include <iostream>
using namespace std;

int main()
{
  int a;
  float b = 3.21;
  a = b;                      // basic to basic type conversion
  cout << "a: " << a << endl; // 3
  cout << "b: " << b << endl; // 3.21
  return 0;
}
```

```
Output:
a: 3
b: 3.21
```

## Basic to User-defined type conversion

- It is done by using the constructor with one argument of basic type.

### Syntax

```cpp
class test
{
  //data members
  public:
    test(data_type parameter)
    {
      //conversion code
    }
};
```

### Example

```cpp
// Program to demostrate basic to user-defined type conversion

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  test() {} // default constructor

  test(int x) // parameterized constructor
  {
    a = x;
  }

  void display()
  {
    cout << "value of a: " << a << endl;
  }
};

int main()
{
  test t;
  int p = 8;
  t = p; // basic to user-defined type conversion
  t.display();
  return 0;
}
```

```
Output:
value of a: 8
```

## User-defined to Basic type conversion

- It is done by using typecasting operator function.
- We should mention the datatype in which the user-defined type is being converted.

### Syntax

```cpp
class test
{
  //data members
  public:
    //typecasting operator function
    operator datatype()
    {
      return datatype_value;
    }
};
```

### Example

```cpp
// Program to demostrate user-defined to basic type conversion

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  void getData()
  {
    cout << "Enter value of a: ";
    cin >> a;
  }

  void display()
  {
    cout << "value of a: " << a << endl;
  }

  // typecasting operator function
  operator int()
  {
    return a;
  }
};

int main()
{
  test t;
  t.getData();
  int x;
  x = t; // user-defined to basic type conversion
  cout << "Value of x: " << x;
  return 0;
}
```

```
Output:
Enter value of a: 10
Value of x: 10
```

## User-defined to User-defined type conversion

- It is also done by using typecasting operator function.
- The typecasting operator function should be defined under the same class whose object is being typecasted.

### Syntax

```cpp
class test
{
  //data members
  public:
    //typecasting operator function
    operator datatype()
    {
      return datatype_value;
    }
};
```

### Example

```cpp
// Program to demostrate user-defined to user-defined type conversion

#include <iostream>
using namespace std;

class test
{
  int a;

public:
  test() {}

  test(int n)
  {
    a = n;
  }

  void display()
  {
    cout << "value of a: " << a << endl;
  }
};

class sample
{
  int x;

public:
  sample() {}

  sample(int n)
  {
    x = n;
  }

  void display()
  {
    cout << "Value of x: " << x << endl;
  }

  // typecasting operator function
  operator test()
  {
    return test(x);
  }
};

int main()
{
  test t;
  sample s(10);
  t = s; // user-defined to user-defined type conversion
  t.display();
  return 0;
}
```

```
Output:
value of a: 10
```
