# 🍃Associative Containers - Sets and Maps in STL

## Sets in STL

- Sets in C++ are containers that store unique elements in a sorted manner.
- The elements inside the set cannot be changed, once they are added to the set, they can only be inserted or deleted.
- They are implemented as BST (Binary Search Trees) in memory.
- Set is present in `#include <set>` header file. The elements inside the set can be accessed using iterators.

## Set Declaration

### Syntax

```cpp
set<dataType> name = {initialValues};
```

- dataType: data type of the elements to be stored inside the set
- initialValues: optional parameter which initializes the set with the given values
- By default the set stores values in non-decreasing order. To store the values in non-increasing order, we use an inbuilt comparator function

```cpp
set<dataType, greater<dataType>> name;
```

### Examples

```cpp
set<int> s; //initializes a set of size 0 which stores integer values arranged in non-decreasing order

set<int> s = {10, 20, 30}; //initializes a set having initial values as 10, 20, 30

set<int, greater <int>> s; //initializes a set of size 0 which stores integer values arranged in non-increasing order
```

## Functions on sets

- `begin()` : Returns an iterator to the first element of the set.
- `end()` : Returns an iterator to the element past the last element of the set.
- `size()` : It tells us the size of the set.
- `insert(element)` : Inserts an element in the set.
- `erase(value)` or `erase(start_iterator,end_iterator)` : Delete elements from the set.
- `find(element)` : Returns an iterator pointing to the element, if the element is found else returns an iterator pointing to the end of the set.
- `clear()` : It deletes all the elements from the set.
- `empty()` : It tells us whether the set is empty or not.

### Example

```cpp
//program to demonstrate sets functions

#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> s1;
  set<int, greater<int>> s2;
  for (int i = 0; i < 5; i++)
  {
    s1.insert(i + 1);
  }
  for (int i = 0; i < 5; i++)
  {
    s2.insert((i + 1) * 10);
  }
  set<int>::iterator it;
  cout << "Set1 ";
  for (it = s1.begin(); it != s1.end(); it++)
    cout << *it << " ";
  cout << endl;
  cout << "Set2 ";
  for (it = s2.begin(); it != s2.end(); it++)
    cout << *it << " ";
  cout << endl;

  s1.erase(1);
  s2.erase(s2.begin(), s2.find(10));
  cout << "After erasing element, size of set1 is " << s1.size() << endl;
  int val = 4;
  if (s1.find(val) != s1.end())
    cout << "The set1 contains " << val << endl;
  else
    cout << "The set1 does not contains " << val << endl;
  cout << "Elements of set1 ";
  for (it = s1.begin(); it != s1.end(); it++)
    cout << *it << " ";
  cout << endl;
  cout << "Elements of set2 ";
  for (it = s2.begin(); it != s2.end(); it++)
    cout << *it << " ";
  cout << endl;

  s1.clear();
  if (s1.empty() == true)
  {
    cout << "set1 is empty now!";
  }
  return 0;
}
```

```
Output:
Set1 1 2 3 4 5
Set2 50 40 30 20 10
After erasing element, size of set1 is 4
The set1 contains 4
Elements of set1 2 3 4 5
Elements of set2 10
set1 is empty now!
```

## Maps in STL

- Maps are containers in STL that stores the elements as key-value pairs.
- Each element has a unique key value and the elements are stored in sorted order based on their key value. Keys cannot be changed, once they are added to the map, they can only be inserted or deleted, but the values can be altered.
- They are implemented as Red-Black Trees in memory. The map is present in `#include <map>` header file.
- The elements inside the map can be accessed using iterators.

## Map Declaration

### Syntax

```cpp
map <keyDataType, valueDataType> name { initialValues };
```

- keyDataType: data type of the key to be stored inside the map
- valueDataType: data type of the value to be stored inside the map
- initialValues: optional parameter which initializes the map with the given values
- By default the map stores values in non-decreasing order sorted according to key. To store the values in non-increasing order, we use an inbuilt comparator function

```cpp
map < keyDataType, valueDataType, greater < data_type >> name;
```

### Examples

```cpp
map <int, string> m; //initializes a map of size 0 which have key elements as integers and values as strings arranged in non-decreasing order based on keys

map <int, string> m = { { 1, "a" }, { 2, "ab" }, { 3, "abc" } //initializes a map having initial key-value pairs as {1, a}, {2, ab}, {3, abc}

map <int, string, greater <int>> m; //initializes a map of size 0 which which have key elements as integers and values as strings arranged in non-increasing order
```

## Functions on maps

- `begin()` : Returns an iterator to the first element of the map.
- `end()` : Returns an iterator to the element past the last element of the map.
- `[key]` : Returns the value associated with the given key.
- `size()` : It tells us the size of the map.
- `insert(pair)` : Insert a pair in the map.
- `erase(key)` or `erase(pos_iterator)` : Delete an element from the map.
- `find(key)` : Returns an iterator pointing to the element, if the key is found else returns an iterator pointing to the end of the map.
- `clear()` : It deletes all the elements from the map
- `empty()` : It tells us whether the map is empty or not.

### Example

```cpp
//program to demonstrate maps functions

#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<int, string> m1;
  m1.insert(pair<int, string>(1, "a"));
  map<int, string, greater<int>> m2;
  m2.insert(pair<int, string>(1, "a"));
  m1[2] = "ab";
  m1[3] = "abc";
  m1[4] = "abcd";
  m2[2] = "ab";
  m2[3] = "abc";
  m2[4] = "abcd";

  map<int, string>::iterator it;

  cout << "Map1\n";
  for (it = m1.begin(); it != m1.end(); it++)
    cout << it->first << " " << it->second << endl;
  cout << endl;
  cout << "Map2\n";
  for (it = m2.begin(); it != m2.end(); it++)
    cout << it->first << " " << it->second << endl;
  cout << endl;

  m1.erase(1);
  m2.erase(m2.find(1));
  cout << "After erasing element, size of map1 is " << m1.size() << endl;
  cout << "After erasing element, size of map2 is " << m2.size() << endl;
  int val = 3;
  if (m1.find(val) != m1.end())
    cout << "The map1 contains " << val << " as key" << endl;
  else
    cout << "The map1 does not contains " << val << " as key" << endl;
  cout << "Elements of map1\n";
  for (it = m1.begin(); it != m1.end(); it++)
    cout << it->first << " " << it->second << endl;
  cout << endl;
  cout << "Elements of map2\n";
  for (it = m2.begin(); it != m2.end(); it++)
    cout << it->first << " " << it->second << endl;
  cout << endl;

  m1.clear();
  if (m1.empty() == true)
  {
    cout << "Map1 is empty now!";
  }
  return 0;
}
```

```
Output:
Map1
1 a
2 ab
3 abc
4 abcd

Map2
4 abcd
3 abc
2 ab
1 a

After erasing element, size of map1 is 3
After erasing element, size of map2 is 3
The map1 contains 3 as key
Elements of map1
2 ab
3 abc
4 abcd

Elements of map2
4 abcd
3 abc
2 ab

Map1 is empty now!
```
