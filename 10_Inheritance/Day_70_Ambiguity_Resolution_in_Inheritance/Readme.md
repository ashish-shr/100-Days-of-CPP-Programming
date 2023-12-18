# ⚡Ambiguity Resolution in Inheritance

## Ambiguity Condition

- In multiple inheritances, when one class is derived from two or more base classes then there may be a possibility that the base classes have functions with the same name and signature, and the derived class may not have functions with that name as those of its base classes.
- If the derived class object tries to access same named member functions of the base classes then it results in ambiguity because the compiler gets confused about which base’s class member function should be called.

### Example

```cpp
// program to show ambiguity in inheritance

#include <iostream>
using namespace std;

// Base class A
class A
{
public:
  void hello()
  {
    cout << " Hello from class A" << endl;
  }
};

// Base class B
class B
{
public:
  void hello()
  {
    cout << " Hello from class B" << endl;
  }
};

// Derived class C
class C : public A, public B
{
};

int main()
{
  C obj;

  // Calling function hello()
  obj.hello();

  return 0;
}

```

```bash
Output:
program.cpp: In function 'int main()':
program.cpp:36:7: error: request for member 'hello' is ambiguous
   36 |   obj.hello();
      |       ^~~~~
program.cpp:20:8: note: candidates are: 'void B::hello()'
   20 |   void hello()
      |        ^~~~~
program.cpp:10:8: note:                 'void A::hello()'
   10 |   void hello()
      |
```

## Resolving Ambiguity in Inheritance

- To solve this ambiguity scope resolution operator is used denoted by ' :: '

#### Syntax

```cpp
ObjectName.ClassName::FunctionName();
```

### Examples

```cpp
// program to resolve ambiguity in inheritance

#include <iostream>
using namespace std;

// Base class A
class A
{
public:
  void hello()
  {
    cout << " Hello from class A" << endl;
  }
};

// Base class B
class B
{
public:
  void hello()
  {
    cout << " Hello from class B" << endl;
  }
};

// Derived class C
class C : public A, public B
{
};

int main()
{
  C obj;
  obj.A::hello(); // calling hello() of Base Class A
  obj.B::hello(); // calling hello() of Base Class B
  return 0;
}
```

```
Output:
 Hello from class A
 Hello from class B
```
