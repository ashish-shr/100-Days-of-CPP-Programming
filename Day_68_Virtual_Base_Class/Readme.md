# ⚡Virtual Base Class

- Virtual base classes are primarily used to address the problems associated with multiple inheritance.
- When a class inherits from multiple classes that share a common virtual base class, the virtual base class ensures that only one instance of that class is included in the derived class, regardless of how many times it is inherited.
- Without virtual inheritance, the "diamond problem" can occur in multiple inheritance.
- This problem happens when a class inherits from two classes that both inherit from the same base class.
- With virtual inheritance, the ambiguity is resolved, and there is only one instance of the common base class in the derived class.

### Syntax

```cpp
class className : virtual visibilityMode className
{
  //statements
};

//also written as
class className : visibilityMode virtual className
{
  //statements
};
```

### Examples

```cpp
// program to show ambiguity

#include <iostream>
using namespace std;

class A
{
public:
  void show()
  {
    cout << "Hello form A \n";
  }
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};

int main()
{
  D object;
  object.show(); // show() is ambiguous
  return 0;
}
```

```bash
Output:
program1.cpp: In function 'int main()':
program1.cpp:30:10: error: request for member 'show' is ambiguous
   30 |   object.show(); // show() is ambiguous
      |          ^~~~
program1.cpp:9:8: note: candidates are: 'void A::show()'
    9 |   void show()
      |        ^~~~
program1.cpp:9:8: note:                 'void A::show()'
```

```cpp
// Example 1
// program to solve ambiguity using virtual base class

#include <iostream>
using namespace std;

class A
{
public:
  int a;
  A()
  {
    a = 8;
  }
};

class B : public virtual A
{
};

class C : public virtual A
{
};

class D : public B, public C
{
};

int main()
{
  D object;
  cout << "a = " << object.a << endl; // gives a = 8
  return 0;
}
```

```
Output:
a = 8
```

```cpp
// Example 2
// program to solve ambiguity using virtual base class

#include <iostream>
using namespace std;

class A
{
public:
  void hello()
  {
    cout << "Hello from A" << endl;
  }
};

class B : public virtual A
{
};

class C : public virtual A
{
};

class D : public B, public C
{
};

int main()
{
  D object;
  object.hello(); // prints Hello from A
  return 0;
}
```

```
Output:
Hello from A
```
