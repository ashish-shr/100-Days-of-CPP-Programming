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