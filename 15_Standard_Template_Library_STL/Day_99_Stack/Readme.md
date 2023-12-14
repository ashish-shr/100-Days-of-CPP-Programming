# 🍃Container Adaptors - Stacks in STL

## Stacks in STL

- Stacks in STL are dynamic sequential containers that are implemented as stack data structures in memory.
- They follow the LIFO (Last In First Out) arrangement i.e the last element that is inserted will be the first one to be popped out.
- Elements are stored in a contiguous manner in a stack.
- Insertion and deletion only happen at the top of the stack. Stacks are present in `#include <stack>` header file.

## Stack Declaration

### Syntax

```cpp
stack<dataType> name;
```

### Example:

```cpp
stack <int> s; //initializes a stack of size 0 which stores integer values
```

## Functions on queues

- `push(element)` : It pushes the value at the top of the stack.
- `pop()` : It deletes the topmost element of the stack.
- `size()` : It tells us the size of the stack.
- `top()` : It returns the topmost element of the stack.
- `swap(stackName)` : It swaps the elements of the two stacks.
- `empty()` : It tells us whether the stack is empty or not.

### Example

```cpp
// program to demonstrate stack functions

#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack<int> s;
  for (int i = 0; i < 5; i++)
  {
    s.push(i + 1);
  }
  cout << "The size of stack is " << s.size() << endl;
  cout << "The topmost element of the stack is " << s.top() << endl;
  s.pop();
  s.pop();
  cout << "The elements of the stack after pop operation ";
  while (!s.empty())
  {
    cout << s.top() << ' ';
    s.pop();
  }
  return 0;
}
```

```
Output:
The size of stack is 5
The topmost element of the stack is 5
The elements of the stack after pop operation 3 2 1
```

## Copying one stack to another

```cpp
stack <int> stack2 = stack1; //copies stack1 into stack2
```

- Any change in stack2 will not affect stack1.
- The same can be done using reference but it will not create a copy, it will contain a reference to the original stack.

```cpp
stack <int> &stack2 = stack1; //stack2 references stack1
```
