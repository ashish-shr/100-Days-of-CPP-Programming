# 🍃Sequence Containers - List and Forward List in STL

## Lists in STL

- List in STL is another storage container that allows us to store data sequentially.
- It helps in efficiently inserting and deleting elements bidirectionally.
- It is implemented as linear doubly LinkedList in memory.
- Unlike vectors, they allow non-contiguous memory allocation.
- Lists are included in `#include <list>` header file.

## List Declaration

### Syntax

```cpp
list<dataType> name{initialValues};
```

- dataType: data type of the elements to be stored in the list
- initialValues: optional parameter which initializes the list with the given values

### Example

```cpp
list<int> l1; //initializes a list of size 0 which stores integer values

list<int> l2 { 1, 2, 3 }; //initializes a list with values 1,2,3
```

## Functions on lists

- `push_back(element)` : It pushes the value at the end of the list.
- `push_front(element)` : It adds a new element to the front of the list.
- `pop_back()` : It deletes the last element of the list.
- `pop_front()` : It deletes the first element of the list.
- `front()` : It returns the first element of the list.
- `back()` : It returns the last element of the list.
- `begin()` : It returns an iterator pointing to the first element of the list.
- `end()` : It returns an iterator pointing to the last element of the list.
- `clear()` : It deletes all the elements from the list.
- `empty()` : It tells us whether the list is empty or not.
- `reverse()` : It reverses the list.
- `merge(list_name)` : It merges two sorted lists.

### Example

```cpp
// program to demonstrate list functions

#include <iostream>
#include <list>
using namespace std;

void print(list<int> l)
{
  list<int>::iterator itr;
  for (itr = l.begin(); itr != l.end(); ++itr)
    cout << *itr << ' ';
  cout << endl;
}

int main()
{
  list<int> l;
  for (int i = 0; i < 5; ++i)
  {
    l.push_back(i);
  }
  print(l);
  cout << "First element " << l.front() << endl;
  cout << "Last element " << l.back() << endl;
  l.pop_front();
  print(l);
  l.pop_back();
  print(l);
  return 0;
}
```

```
Output:
0 1 2 3 4
First element 0
Last element 4
1 2 3 4
1 2 3
```

## Copying one list to another

```cpp
list<int> list2 = list1; //copies list1 into list2
```

Any change in list2 will not affect list1. The same can be done using reference but it will not create a copy, it will contain a reference to the original list.

```cpp
list<int> &list2 = list1; //list2 references list1
```

## Inserting elements into a list

The `insert()` function is used to add elements at any position in a list.

### Syntax

```cpp
insert(pos, no_of_elements, element);
```

- pos: Iterator pointing to the position where the element is to be inserted.
- no_of_elements: Number of elements to insert. Default is 1.
- element: The element which is to be inserted.

### Example

```cpp
list<int>::iterator it = l.begin();
l.insert(it, 5); // inserts 5 at 1st position
```

## Deleting elements from the list

The `erase()` function is used to delete a single element or a range of elements from a list.

### Syntax

```cpp
listName.erase(iterator pos) //to delete a single element

listName.erase(iterator first, iterator last) // to delete a range of elements
```

- pos: Iterator pointing to the position of the element to be deleted.
- first: Iterator pointing to the position of the first element in the range to be deleted.
- last: Iterator pointing to the position of the last element in the range to be deleted. The last element doesn't get deleted.

### Example

```cpp
list<int>::iterator itr = l.begin();
l.erase(itr); //deletes the first element
itr1 = demoList.begin();
itr2 = demoList.begin();
itr2++;
l.erase(itr1, itr2);//delete elements from the range
```

## Forward Lists in STL

- Forward list is a sequential container.
- It is very similar to list in STL but the list stores both the location of the previous and the next elements of the list while forward list only stores the location of the next element, thus it saves memory.
- Insertion and deletion are efficient in forward_list and take only constant time.
- It is implemented as a singly LinkedList in memory.
- Forward lists are included in `#include <forward_list>` header file.

## Forward list Declaration

### Syntax

```cpp
forward_list<dataType> name;
```

- dataType: data type of the elements to be stored in the list.

### Example

```cpp
forward_list<int> l; //initializes a forward list of size 0 which stores integer values
```

## Forward list Initialization

### Syntax

```cpp
forward_list<dataType> name = {initialValues};
```

- initialValues: optional parameter which initializes the list with the given values.

### Example

```cpp
forward_list<int> l = {1, 2, 3, 4, 5}; //initializes a forward list of size 5 with values 1,2,3,4,5
```

## Functions on forward_list

- `push_front(element)` : It adds a new element to the front of the list.
- `pop_front()` : It deletes the first element of the list.
- `insert_after(iterator,{values})` : It inserts the values after the given position.
- `erase_after(iterator)` : It deletes the values after the given position.
- `remove(element)` : It removes all the occurrences of the given element.
- `front()` : It returns the first element of the list.
- `begin()` : It returns an iterator pointing to the first element of the list.
- `end()` : It returns an iterator pointing to the last element of the list.
- `max_size()` : It returns the maximum number of elements that can be stored by the forward_list.
- `empty()` : It tells us whether the list is empty or not
- `reverse()` : It reverses the list.

### Example

```cpp
// program to demonstrate forward list functions

#include <iostream>
#include <forward_list>
using namespace std;

void print(forward_list<int> l)
{
  forward_list<int>::iterator itr;
  for (itr = l.begin(); itr != l.end(); ++itr)
    cout << *itr << ' ';
  cout << endl;
}

int main()
{
  forward_list<int> l = {1, 2, 3};
  for (int i = 0; i < 5; ++i)
  {
    l.push_front(i);
  }
  print(l);
  cout << "First element " << l.front() << endl;
  l.pop_front();
  l.insert_after(l.begin(), {5, 6, 7});
  print(l);
  l.erase_after(l.begin());
  print(l);
  l.remove(2);
  cout << "List after removing all occurrences of 2: ";
  print(l);
  if (!l.empty())
  {
    cout << "Max size of list " << l.max_size() << endl;
  }
  return 0;
}
```

```
Output:
4 3 2 1 0 1 2 3
First element 4
3 5 6 7 2 1 0 1 2 3
3 6 7 2 1 0 1 2 3
List after removing all occurrences of 2: 3 6 7 1 0 1 3
Max size of list 576460752303423487
```
