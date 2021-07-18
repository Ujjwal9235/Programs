// Make a queue from stack.

#include<bits/stdc++.h>
using namespace std;

class Queue {
	stack<int> s1,s2;

	public: void enqueue(int x)
	{
		s1.push(x);
	}

	public: void dqueue()
	{
		if(s1.empty() && s2.empty())
			cout<<"0 in empty";

		while(!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
		cout<<s2.top();
		s2.pop();
	}

};

int main()
{
	Queue q;
	 // q.enqueue(1);
  //    q.enqueue(2);
  //    q.enqueue(3);

     q.dqueue();
     q.dqueue();
     q.dqueue();
}