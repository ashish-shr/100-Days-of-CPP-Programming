# 🍃Container Adaptors - Queues and Priority Queues in STL

## Queues in STL

- Queues in STL are dynamic storage containers that are implemented as queue data structures in memory.
- They follow the FIFO (first in first out) arrangement i.e the last element that is inserted will be the last one to be popped out.
- Elements are stored in a contiguous manner in a queue.
- Insertion is performed at the front of the queue and deletion always happens at the end of the queue. Queues are present in `#include <queue>` header file.

## Queue Declaration

### Syntax

```cpp
queue <dataType> name;
```

### Example

````cpp
queue <int> q; //initializes a queue of size 0 which stores integer values```
````

## Functions on queues

- `push(element)` : It pushes the value at the end of the queue.
- `pop()` : It deletes the first element from the queue.
- `size()` : It tells us the size of the queue.
- `front()` : It returns the first element of the queue.
- `back()` : It returns the last element of the queue.
- `swap(queueName)` : It swaps the elements of the two queues.
- `empty()` : It tells us whether the queue is empty or not.

### Example

```cpp
// program to demonstrate queue functions

#include <iostream>
#include <queue>
using namespace std;

void print(queue<int> q)
{
  queue<int> q1 = q;
  while (!q1.empty())
  {
    cout << q1.front() << " ";
    q1.pop();
  }
  cout << endl;
}

int main()
{
  queue<int> q;
  for (int i = 0; i < 5; i++)
  {
    q.push(i + 1);
  }
  cout << "Size of queue is " << q.size() << endl;
  cout << "The elements of queue are ";
  print(q);

  cout << "First element of the queue " << q.front() << endl;
  cout << "Last element of the queue " << q.back() << endl;
  if (!q.empty())
    cout << "Queue is not empty" << endl;
  q.pop();
  q.pop();
  print(q);
  q.push(10);
  cout << "Size of queue is " << q.size() << endl;
  cout << "The elements of queue are ";
  print(q);
  return 0;
}
```

```
Output:
Size of queue is 5
The elements of queue are 1 2 3 4 5
First element of the queue 1
Last element of the queue 5
Queue is not empty
3 4 5
Size of queue is 4
The elements of queue are 3 4 5 10
```

## Copying one queue to another

```cpp
queue <int> q2 = q1; //copies queue1 into queue2
```

- Any change in q2 will not affect q1.
- The same can be done using reference but it will not create a copy, it will contain a reference to the original queue.

```cpp
queue <int> &q2 = q1; //q2 references q1
```

## Priority Queues in STL

- A priority queue is a type of dynamic container in STL.
- It stores the elements in a sorted order where the first element of the queue is the greatest of all and the other elements are sorted in non-increasing order.
- They are implemented as a heap in memory. The greatest element will be the one that will be deleted first. They are present in `#include <queue>` header file.

## Heaps

Heaps are of two types:

- Max-heap: When the elements are stored in non-increasing order and the greatest element will be the one that will be deleted first, i.e largest element has the highest priority.
- By default, C++ creates a max-heap.

### Syntax

```cpp
  priority_queue <dataType > name;
```

### Example

```cpp
priority_queue <int> pq; //initializes a priority queue (max-heap) of size 0 which stores integer values
```

- Min-heap: When the elements are stored in non-decreasing order and the smallest element will be the one that will be deleted first, i.e smallest element has the highest priority.

### Syntax

```cpp
priority_queue<dataType, vector<int>, greater<int>> name;
```

### Example

```cpp
priority_queue <int, vector <int> , greater <int>> pq; //initializes a priority queue (min-heap) of size 0 which stores integer values
```

## Functions on priority_queues

- `push(element)` : It pushes the value at the end of the queue. After that, the elements are reordered according to the priority.
- `pop()` : It deletes the highest priority element from the queue. If it's a min-heap, the smallest element gets deleted otherwise maximum element gets deleted.
- `size()` : It tells us the size of the queue.
- `top()` : It returns the highest priority element of the queue.
- `swap(queue_name)` : It swaps the elements of the two queues.
- `empty()` : It tells us whether the queue is empty or not.

### Examples

```cpp
// example of max-heap

#include <iostream>
#include <queue>
using namespace std;

int main()
{
  priority_queue<int> pq; // max-heap
  for (int i = 0; i < 5; i++)
  {
    pq.push(i + 1);
  }
  cout << "The size of queue is : " << pq.size() << endl;
  cout << "The highest priority element of queue is " << pq.top() << endl;
  pq.pop();
  pq.pop();
  pq.push(10);
  pq.push(20);
  pq.push(30);
  if (!pq.empty())
  {
    cout << "The new size of queue is " << pq.size() << endl;
  }
  cout << "After inserting and deleting elements, the queue is " << endl;
  while (!pq.empty())
  {
    cout << pq.top() << " ";
    pq.pop();
  }
}
```

```
Output:
The size of queue is : 5
The highest priority element of queue is 5
The new size of queue is 6
After inserting and deleting elements, the queue is
30 20 10 3 2 1
```

```cpp
// example of min-heap

#include <iostream>
#include <queue>
using namespace std;

int main()
{
  priority_queue<int, vector<int>, greater<int>> pq; // min-heap
  for (int i = 0; i < 5; i++)
  {
    pq.push(i + 1);
  }
  cout << "The size of queue is : " << pq.size() << endl;
  cout << "The highest priority element of queue is " << pq.top() << endl;
  pq.pop();
  pq.pop();
  pq.push(10);
  pq.push(20);
  pq.push(30);
  if (!pq.empty())
  {
    cout << "The new size of queue is " << pq.size() << endl;
  }
  cout << "After inserting and deleting elements, the queue is " << endl;
  while (!pq.empty())
  {
    cout << pq.top() << " ";
    pq.pop();
  }
}
```

```
Output:
The size of queue is : 5
The highest priority element of queue is 1
The new size of queue is 6
After inserting and deleting elements, the queue is
3 4 5 10 20 30
```
