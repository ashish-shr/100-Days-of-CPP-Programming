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