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