# ⚡Function or Method Overriding

## Function or Method Overriding

- Function overriding in C++ is termed as the redefinition of base class function in its derived class with the same signature.
- Signature includes return type and parameters.
- Suppose, we have two class, Parent and Child having same member function and also having same signature then if we create an object of Child class and call that member function, then the member function that is present in derived class is called which result overriding of member function of the derived class. This concept is called function or method overriding.

### Syntax

```cpp
class Parent
{
  access_modifier:

    // overridden function
    returnType functionName(){}
};

class child : public Parent
{
  access_modifier:

    // overriding function
    returnType functionName(){}

};

```

### Examples

```cpp
// Program to demonstrate function overriding

#include <iostream>
using namespace std;

class Parent
{
public:
  // overridden function
  void display()
  {
    cout << "Hello from Parent Class!";
  }
};

class Child : public Parent
{
public:
  // overriding function
  void display()
  {
    cout << "Hello from Child Class!";
  }
};

int main()
{
  Child c;
  c.display(); // calls overriding function
  return 0;
}
```

```
Output:
Hello from Child Class!
```

```cpp
// Program to call overridden function from derived class

#include <iostream>
using namespace std;

class Parent
{
public:
  // overridden function
  void display()
  {
    cout << "Hello from Parent Class!";
  }
};

class Child : public Parent
{
public:
  // overriding function
  void display()
  {
    cout << "Hello from Child Class!" << endl;
    Parent::display();
  }
};

int main()
{
  Child c;
  c.display(); // calls overriding and overridden function
  return 0;
}
```

```
Output:
Hello from Child Class!
Hello from Parent Class!
```

```cpp
// Program to access overridden function by object of derived class

#include <iostream>
using namespace std;

class Parent
{
public:
  // overridden function
  void display()
  {
    cout << "Hello from Parent Class!";
  }
};

class Child : public Parent
{
public:
  // overriding function
  void display()
  {
    cout << "Hello from Child Class!" << endl;
  }
};

int main()
{
  Child c;
  c.display();         // calls overriding function
  c.Parent::display(); // calls overridden function
  return 0;
}
```

```
Output:
Hello from Child Class!
Hello from Parent Class!
```
