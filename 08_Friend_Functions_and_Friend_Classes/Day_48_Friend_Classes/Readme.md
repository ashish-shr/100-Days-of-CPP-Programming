# ⚡Friend Class in C++

- A class can also be declared to be the friend of some other class.
- When we create a friend class then all the member functions of the friend class also become the friend of the other class.
- A friend class can access private and protected members of other classes in which it is declared as a friend.
- This requires the condition that the friend class must be first declared or defined (forward declaration).

#### Syntax

```cpp
    class A //base class
    {
      ..........
      friend class B; //friend class declaration
      ..........
    };

    class B //friend class definition
    {
      //statements
    };
```

## Programs

```cpp
// Program to demonstrate friend class [1]

#include <iostream>
using namespace std;

class info; // forward declaration

class student // container class
{
  int id;
  string name;
  friend class info; // friend class declaration
};

class info // friend class definition
{
  int id;
  string name;

public:
  void getInfo(student s)
  {
    cout << "Enter id and name of student: " << endl;
    cin >> s.id >> s.name;
    id = s.id;
    name = s.name;
  }

  void showInfo(void)
  {
    cout << "Student info..." << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
  }
};

int main()
{
  student s1;
  info Bishal;
  Bishal.getInfo(s1);
  Bishal.showInfo();
  return 0;
}
```

```
Output:
Enter id and name of student:
1 Bishal
Student info...
ID: 1
Name: Bishal
```

```cpp
// Program to demonstrate friend class [2]

#include <iostream>
using namespace std;

class music; // forward declaration

class artist // container class
{
  char aname[30];
  friend class music;
};

class music // friend class
{
  char song[30];
  artist a; // composition -> declaring object of one class within another class
public:
  void getData(void)
  {
    cout << "Artist name: ";
    gets(a.aname);
    cout << "Song: ";
    gets(song);
  }

  void showData(void)
  {
    cout << "Artist Info..." << endl;
    cout << "Artist name: " << a.aname << endl;
    cout << "Song: " << song << endl;
  }
};

int main()
{
  music m;
  m.getData();
  m.showData();
  return 0;
}
```

```
Output:
Artist name: Sujan Chapagain
Song: Unko Sweater
Artist Info...
Artist name: Sujan Chapagain
Song: Unko Sweater
```
