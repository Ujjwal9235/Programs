#include<bits/stdc++.h>
using namespace std;

int x=1;
void get(int n)
{
    
	if(n<1)
	 return;
	get(n-1);
	get(n-3);
	cout<<n<<"\n";
	x++;
}

int main()
{
	int x=6;
	get(x);
	cout<<"x is = "<<x;
		return 0;
}