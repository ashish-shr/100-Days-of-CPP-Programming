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