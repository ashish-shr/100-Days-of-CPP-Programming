# ⚡Smart Pointers in C++

## Problems with Raw Pointers

- **Memory Leaks**: This occurs when memory is repeatedly allocated by a program but never freed. This leads to excessive memory consumption and eventually leads to a system crash.
- **Dangling Pointers**: A dangling pointer is a pointer that occurs at the time when the object is de-allocated from memory without modifying the value of the pointer.
- **Wild Pointers**: Wild pointers are pointers that are declared and allocated memory but the pointer is never initialized to point to any valid object or address.

## Smart Pointers

- A smart pointer is a class that holds and manages a pointer through a popular C++ technique called “Resource Acquisiton is Initialization” (RAII).
- We know that not deallocating a pointer causes a memory leak that may lead to a crash of the program
- Languages Java, C# has Garbage Collection Mechanisms to smartly deallocate unused memory to be used again.
- The programmer doesn’t have to worry about any memory leaks.
- C++ comes up with its own mechanism that’s Smart Pointer.
- When the object is destroyed it frees the memory as well.
- So, we don’t need to delete it as Smart Pointer does will handle it.
- It allows developers to not worry about freeing a pointer, and it also allows pointers to be exception-safe.
- There are three standard smart pointers defined in the `<memory>` header file.

## RAII (Resource Acquisiton is Initialization)

In C++, "Resource Acquisition Is Initialization" (RAII) means that when you create an object, it automatically manages resources (like memory or files), and when the object is no longer needed, it cleans up those resources. So, resource management is tied to the object's life cycle. It simplifies code and helps prevent resource leaks.

## Types of Smart Pointers

### 1. Unique Pointer

A unique pointer does not share ownership, and will free the resource at the end of the scope.

#### Syntax

```cpp
std::unique_ptr<type> pointer_name = std::make_unique<type>(value);
```

### 2. Shared Pointer

A shared pointer does share ownership, and will only free the resource when there are no other owners counted and it has reached the end of the scope.

#### Syntax

```cpp
std::shared_ptr<type> pointer_name = std::make_shared<type>(value);
```

### 3. Weak Pointer

A weak pointer is used with a shared pointer, but it does not add to the reference counter like a shared pointer does.

#### Syntax

```cpp
std::weak_ptr<type> pointer_name;
```

## Some useful Smart Pointers Functions

### reset()

```cpp
// makes smart_pointer nullptr
smart_pointer.reset()
```

### use_count()

```cpp
/* use_count() function is a method of std::shared_ptr that returns the number of shared_ptr objects that share ownership of the managed object. It gives you an indication of how many shared_ptr instances are pointing to the same object.*/
shared_pointer.use_count()
```

### expired() and lock()

```cpp
// expired() checks if a std::weak_ptr is no longer associated with a valid std::shared_ptr
weak_pointer.expired()

// lock() attempts to convert a std::weak_ptr to a std::shared_ptr,
weak_pointer.lock()
```

### Examples

```cpp
// Program to demonstrate unique pointer

#include <iostream>
#include <memory>

class MyClass
{
  int value;

public:
  MyClass(int val) : value(val)
  {
    std::cout << "Constructed MyClass with value: " << value << std::endl;
  }

  ~MyClass()
  {
    std::cout << "Destructed MyClass with value: " << value << std::endl;
  }

  void printValue() const
  {
    std::cout << "Value: " << value << std::endl;
  }
};

int main()
{
  std::unique_ptr<MyClass> uniquePtr1 = std::make_unique<MyClass>(42);

  uniquePtr1->printValue();

  // std::unique_ptr<MyClass> uniquePtr2 = uniquePtr1; // invalid

  // std::unique_ptr<MyClass> uniquePtr2 = std::move(uniquePtr1); // valid
  // uniquePtr2->printValue();

  // No need to delete, handled automatically when uniquePtr goes out of scope

  return 0;
}

```

```
Output:
Constructed MyClass with value: 42
Value: 42
Destructed MyClass with value: 42
```

```cpp
// Program to demonstrate shared pointer

#include <iostream>
#include <memory>

class MyClass
{
  int value;

public:
  MyClass(int val) : value(val)
  {
    std::cout << "Constructed MyClass with value: " << value << std::endl;
  }

  ~MyClass()
  {
    std::cout << "Destructed MyClass with value: " << value << std::endl;
  }

  void printValue() const
  {
    std::cout << "Value: " << value << std::endl;
  }
};

int main()
{
  std::shared_ptr<MyClass> sharedPtr1 = std::make_shared<MyClass>(42);

  std::cout << "Owner Count: " << sharedPtr1.use_count() << std::endl; // 1
  sharedPtr1->printValue();

  // Both shared pointers now own the object
  std::shared_ptr<MyClass> sharedPtr2 = sharedPtr1;

  std::cout << "Owner Count: " << sharedPtr1.use_count() << std::endl; // 2
  sharedPtr2->printValue();

  // The object will be deleted when the last shared_ptr that owns it is destroyed

  return 0;
}


```

```
Output:
Constructed MyClass with value: 42
Owner Count: 1
Value: 42
Owner Count: 2
Value: 42
Destructed MyClass with value: 42
```

```cpp
// Program to demonstrate weak pointer [1]

#include <iostream>
#include <memory>

int main()
{
  // Create a shared_ptr
  std::shared_ptr<int> sharedPtr = std::make_shared<int>(42);

  // Make a weak_ptr from the shared_ptr
  std::weak_ptr<int> weakPtr = sharedPtr;

  if (!weakPtr.expired())
  {
    std::cout << "weakPtr is not expired." << std::endl;
  }
  else
  {
    std::cout << "weakPtr is now expired." << std::endl;
  }

  weakPtr.reset();

  if (!weakPtr.expired())
  {
    std::cout << "weakPtr is not expired." << std::endl;
  }
  else
  {
    std::cout << "weakPtr is now expired." << std::endl;
  }

  return 0;
}

```

```
Output:
weakPtr is not expired.
weakPtr is now expired.
```

```cpp
// Program to demonstrate weak pointer [2]

#include <iostream>
#include <memory>

int main()
{
  // Create a shared_ptr
  std::shared_ptr<int> sharedPtr = std::make_shared<int>(42);

  // Make a weak_ptr from the shared_ptr
  std::weak_ptr<int> weakPtr = sharedPtr;

  if (std::shared_ptr<int> lockedSharedPtr = weakPtr.lock())
  {
    std::cout << "Successfully locked the weak pointer." << std::endl;
    std::cout << "*lockedSharedPtr: " << *lockedSharedPtr << std::endl;
  }
  else
  {
    std::cout << "Failed to lock the weak pointer." << std::endl;
  }

  weakPtr.reset();

  if (std::shared_ptr<int> lockedSharedPtr = weakPtr.lock())
  {
    std::cout << "Successfully locked the weak pointer." << std::endl;
    std::cout << "*lockedSharedPtr: " << *lockedSharedPtr << std::endl;
  }
  else
  {
    std::cout << "Failed to lock the weak pointer." << std::endl;
  }

  return 0;
}

```

```
Output:
Successfully locked the weak pointer.
*lockedSharedPtr: 42
Failed to lock the weak pointer.
```
