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