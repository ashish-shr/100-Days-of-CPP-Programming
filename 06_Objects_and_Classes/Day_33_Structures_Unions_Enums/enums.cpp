// C++ program to demonstrate Enums

#include <iostream>
using namespace std;

enum week
{
  Sun,
  Mon,
  Tue,
  Wed,
  Thur,
  Fri,
  Sat
};

int main()
{
  enum week day;
  day = Wed;
  cout << day; // day -> 3
  return 0;
}