# ⚡Override and Final Specifier

## Override Specifier

- Function overriding is a redefinition of the base class function in its derived class with the same signature i.e. return type and parameters.
- But there may be situations when a programmer makes a mistake while overriding that function.
- So, to keep track of such an error, C++11 has come up with the 'override' specifier.
- If the compiler comes across this identifier, it understands that this is an overridden version of the same class.
- It will make the compiler check the base class to see if there is a virtual function with this exact signature. And if there is not, the compiler will show an error.

### Syntax

```cpp
class Base
{
public:
  virtual void hello() const
  {
    . . .
  }
};

class Derived : public Base
{
public:
  virtual void hello() override //make sure hello() overrides or not
  {
    . . .
  }
};
```

### Example

```cpp
// without using override specifier

#include <iostream>

class Base
{
public:
  virtual void hello() const
  {
    std::cout << "Hello from Base Class" << std::endl;
  }
};

class Derived : public Base
{
public:
  virtual void hello() // redefinition of hello() not function overriding
  {
    std::cout << "Hello from Derived Class" << std::endl;
  }
};

int main()
{
  Base *p1 = new Base();
  Base *p2 = new Derived();

  p1->hello(); // Hello from Base Class
  p2->hello(); // Hello from Base Class

  return 0;
}

```

```
Output:
Hello from Base Class
Hello from Base Class
```

```cpp
// with using override specifier

#include <iostream>

class Base
{
public:
  virtual void hello() const
  {
    std::cout << "Hello from Base Class" << std::endl;
  }
};

class Derived : public Base
{
public:
  virtual void hello() override // make sure hello() overrides or not
  {
    std::cout << "Hello from Derived Class" << std::endl;
  }
};

int main()
{
  Base *p1 = new Base();
  Base *p2 = new Derived();

  p1->hello();
  p2->hello();

  return 0;
}

```

```bash
Output:
error: 'virtual void Derived::hello()' marked 'override', but does not override virtual void hello() override // make sure hello() overrides or not
```

## Final Specifier

- Sometimes we don’t want to allow derived class to override the base class virtual function.
- C++ 11 allows built-in facility to prevent overriding of virtual function using 'final' specifier.
- 'final' specifier can also be used to prevent inheritance of class / struct
- If a class or struct is marked as 'final' then it becomes non inheritable and it cannot be used as base class/struct.

### Syntax

```cpp
//in case of virtual function

class Base
{
public:
  virtual void function() final
  {
    . . .
  }
};

class Derived : public Base
{
  virtual void function() //function() cannot be overridden
  {
    . . .
  }
};
```

```cpp
//in case of class

class Base final
{
  . . .
};

class Derived : public Base //cannot be derived
{
  . . .
};
```

### Example

```cpp
// Program to demonstrate final specifier in function

#include <iostream>

class Base
{
public:
  virtual void hello() final
  {
    std::cout << "hello from Base" << std::endl;
  }
};

class Derived : public Base
{
  void hello()
  {
    std::cout << "hello from Derived" << std::endl;
  }
};

int main()
{
  Derived d;
  Base &b = d;
  b.hello();
  return 0;
}

```

```bash
Output:
error: virtual function 'virtual void Derived::hello()' overriding final function
   16 |   void hello()
      |        ^~~~~
program3.cpp:8:16: note: overridden function is 'virtual void Base::hello()'
    8 |   virtual void hello() final
```

```cpp
// Program to demonstrate final specifier in class

#include <iostream>

class Base final
{
public:
  void hello()
  {
    std::cout << "hello from Base" << std::endl;
  }
};

class Derived : public Base // cannot be derived
{
public:
  void hello()
  {
    std::cout << "hello from Derived" << std::endl;
  }
};

int main()
{
  Derived d;
  d.hello();
  return 0;
}

```

```bash
Output:
program4.cpp:14:7: error: cannot derive from 'final' base 'Base' in derived type 'Derived'
   14 | class Derived : public Base // cannot be derived
      |       ^~~~~~~
```
