# ⚡Constructors in Inheritance

## Constructors in Derived Class

- We can use constructors in derived classes in C++.
- If both base and derived classes have constructors, base class constructor is executed first.
- If the base class constructor does not have any arguments, there is no need for any constructor in the derived class.
- But if there are one or more arguments in the base class constructor, derived class need to pass argument to the base class constructor.

## Constructors in Multiple Inheritances

- In multiple inheritances, base classes are constructed in the order in which they appear in the class deceleration. For example if there are three classes “A”, “B”, and “C”, and the class “C” is inheriting classes “A” and “B”. If the class “A” is written before class “B” then the constructor of class “A” will be executed first. But if the class “B” is written before class “A” then the constructor of class “B” will be executed first.
- In multilevel inheritance, the constructors are executed in the order of inheritance. For example if there are three classes “A”, “B”, and “C”, and the class “B” is inheriting classes “A” and the class “C” is inheriting classes “B”. Then the constructor will run according to the order of inheritance such as the constructor of class “A” will be called first then the constructor of class “B” will be called and at the end constructor of class “C” will be called.

## Special Syntax

- C++ supports a special syntax for passing arguments to multiple base classes.
- The constructor of the derived class receives all the arguments at once and then will pass the call to the respective base classes.
- The body is called after the constructors is finished executing.

### Syntax

```cpp
Derived-Constructor (arg1, arg2, arg3,...): Base-Constructor (arg1, arg2,...),...
{

}
```

## Special Case of Virtual Base Class

- The constructors for virtual base classes are invoked before a non-virtual base class.
- If there are multiple virtual base classes, they are invoked in the order declared.
- Any non-virtual base class are then constructed before the derived class constructor is executed.

### Examples

```cpp
//Program to demonstrate constructor in inheritance

#include <iostream>
using namespace std;

// base class
class A
{
public:
  A()
  {
    cout << "Hello from base class constructor." << endl;
  }
};

// derived class
class B : public A
{
public:
  B()
  {
    cout << "Hello from derived class constructor." << endl;
  }
};

int main()
{
  B object; // invokes base class constructor first then derived class
  return 0;
}
```

```
Output:
Hello from base class constructor.
Hello from derived class constructor.
```

```cpp
// Program to demonstrate order of constructor invokation in inheritance [1]

#include <iostream>
using namespace std;

// base class A
class A
{
public:
  A()
  {
    cout << "Hello from base class A constructor." << endl;
  }
};

// base class B
class B
{
public:
  B()
  {
    cout << "Hello from base class B constructor." << endl;
  }
};

class C : public A, public B // first A then B
{
public:
  C()
  {
    cout << "Hello from derived class constructor." << endl;
  }
};

int main()
{
  // invokes base class A constructor first then base class B and derived class constructor
  C object;
  return 0;
}
```

```
Output:
Hello from base class A constructor.
Hello from base class B constructor.
Hello from derived class constructor.
```

```cpp
// Program to demonstrate order of constructor invokation in inheritance [2]

#include <iostream>
using namespace std;

// base class A
class A
{
public:
  A()
  {
    cout << "Hello from base class A constructor." << endl;
  }
};

// base class B
class B
{
public:
  B()
  {
    cout << "Hello from base class B constructor." << endl;
  }
};

class C : public B, public A // first B then A
{
public:
  C()
  {
    cout << "Hello from derived class constructor." << endl;
  }
};

int main()
{
  // invokes base class B constructor first then base class A and derived class constructor
  C object;
  return 0;
}
```

```
Output:
Hello from base class B constructor.
Hello from base class A constructor.
Hello from derived class constructor.
```

```cpp
// Program to demonstrate special case of virtual base class constructor

#include <iostream>
using namespace std;

// base class A
class A
{
public:
  A()
  {
    cout << "Hello from base class A constructor." << endl;
  }
};

// base class B
class B
{
public:
  B()
  {
    cout << "Hello from base class B constructor." << endl;
  }
};

class C : public A, virtual public B // first B then A and C
{
public:
  C()
  {
    cout << "Hello from derived class constructor." << endl;
  }
};

int main()
{
  // invokes base class B constructor first then base class A and derived class constructor
  C object;
  return 0;
}
```

```
Output:
Hello from base class B constructor.
Hello from base class A constructor.
Hello from derived class constructor.
```

```cpp
// Program to demonstrate parameterized constructor in inheritance[1]

#include <iostream>
using namespace std;

// base class A
class A
{
protected:
  int a1, a2;

public:
  A() {}

  A(int a1, int a2)
  {
    cout << "base class constructor called.." << endl;
    this->a1 = a1;
    this->a2 = a2;
  }
};

// derived class
class B : public A
{
  int b1, b2;

public:
  B() {}

  B(int a, int b, int p, int q) : A(a, b)
  {
    cout << "derived class constructor called.." << endl;
    b1 = p;
    b2 = q;
  }

  void display()
  {
    cout << "a1: " << a1 << " "
         << "a2: " << a2 << endl;
    cout << "b1: " << b1 << " "
         << "b2: " << b2 << endl;
  }
};

int main()
{
  B object(10, 20, 30, 40);
  object.display();
  return 0;
}
```

```
Output:
base class constructor called..
derived class constructor called..
a1: 10 a2: 20
b1: 30 b2: 40
```

```cpp
// Program to demonstrate parameterized constructor in inheritance[2]

#include <iostream>
using namespace std;

// base class A
class A
{
protected:
  int a1, a2;

public:
  A() {}

  A(int a1, int a2)
  {
    cout << "base class A constructor called.." << endl;
    this->a1 = a1;
    this->a2 = a2;
  }
};

// base class B
class B
{
protected:
  int b1, b2;

public:
  B() {}

  B(int b1, int b2)
  {
    cout << "base class B constructor called.." << endl;
    this->b1 = b1;
    this->b2 = b2;
  }
};

// derived class
class C : public A, public B
{
  int c1, c2;

public:
  C() {}

  C(int a, int b, int p, int q, int x, int y) : A(p, q), B(x, y)
  {
    cout << "derived class constructor called.." << endl;
    c1 = a;
    c2 = b;
  }

  void display()
  {
    cout << "a1: " << a1 << " "
         << "a2: " << a2 << endl;
    cout << "b1: " << b1 << " "
         << "b2: " << b2 << endl;
    cout << "c1: " << c1 << " "
         << "c2: " << c2 << endl;
  }
};

int main()
{
  C object(2, 4, 6, 8, 10, 12);
  object.display();
  return 0;
}
```

```
Output:
base class A constructor called..
base class B constructor called..
derived class constructor called..
a1: 6 a2: 8
b1: 10 b2: 12
c1: 2 c2: 4
```
