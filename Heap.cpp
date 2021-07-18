#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v1 = {8,6,9,5,4};

	cout<<v1.front();

	make_heap(v1.begin(),v1.end());
	cout<<"\n"<<v1.front();
    
    cout<<endl;
    for(int &x: v1)
    	cout<<x<<" ";

    sort_heap(v1.begin(),v1.end());

    cout<<endl;
    for(int &x: v1)
    	cout<<x<<" ";

	v1.push_back(10);
    

	push_heap(v1.begin(),v1.end());
	cout<<"\n"<<v1.front();

	pop_heap(v1.begin(),v1.end());
	cout<<"\n"<<v1.front();

	v1.pop_back();
	cout<<"\n"<<v1.front();
	return 0;
}