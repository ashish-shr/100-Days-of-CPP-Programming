# 🍃Sequence Containers - Deque in STL

## Deques in STL

- Deques are sequential dynamic containers in STL similar to queues.
- Deque stands for Double Ended Queues. They are not allocated contiguous memory locations.
- Unlike queues, they allow both insertion and deletion at both ends.
- Although vector also allows us for insertion and deletion at both ends, these operations on deques are more efficient.
- Deques are implemented as vector of vectors in memory. Deques are present in `#include<deque>` header file.

## Deque Declaration

### Syntax

```cpp
deque <dataType> name;
```

### Example

```cpp
deque <int> q; //initializes a deque of size 0 which stores integer values
```

## Functions on deques

- `push_back(element)` : It inserts the value at the end of the deque.
- `push_front(element)` : It inserts the value at the front of the deque.
- `pop_back()` : It deletes the last element from the deque.
- `pop_front()` : It deletes the first element from the deque.
- `size()` : It tells us the size of the deque.
- `front()` : It returns the first element of the deque.
- `back()` : It returns the last element of the deque.
- `empty()` : It tells us whether the deque is empty or not.

### Example

```cpp
// program to demonstrate deque functions

#include <iostream>
#include <queue>
using namespace std;

void print(deque<int> q)
{
  deque<int>::iterator it;
  for (it = q.begin(); it != q.end(); ++it)
    cout << *it << ' ';
  cout << endl;
}

int main()
{
  deque<int> q;

  for (int i = 0; i < 5; i++)
  {
    q.push_back(i + 1);
  }

  q.push_front(10);
  cout << "Size of deque is " << q.size() << endl;
  cout << "The elements of deque are ";
  print(q);

  cout << "First element of the deque " << q.front() << endl;
  cout << "Last element of the deque " << q.back() << endl;

  if (!q.empty())
    cout << "Deque is not empty" << endl;

  q.pop_back();
  q.pop_front();
  print(q);

  q.push_front(12);
  cout << "Size of deque is " << q.size() << endl;
  cout << "The elements of deque are ";
  print(q);

  return 0;
}
```

```
Output:
Size of deque is 6
The elements of deque are 10 1 2 3 4 5
First element of the deque 10
Last element of the deque 5
Deque is not empty
1 2 3 4
Size of deque is 5
The elements of deque are 12 1 2 3 4
```
