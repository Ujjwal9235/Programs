#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[] = {1,2,3,2,5,3,7,7,9};
	int n= sizeof(a)/sizeof(a[0]);
	int x;
	cin>>x;

	int index = lower_bound(a,a+n,x)-a;

	if(index != n && a[index] == x) cout<<index;
	else cout<<-1;

}
