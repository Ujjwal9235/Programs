#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll a, ll  b)
{
	if(b==0)
	  return a;
	return gcd(b,a%b);
}

ll lcm(ll a, ll b)
{
	return ((a/gcd(a,b))*b);
}

int main()
{
	ll a,b;
	cin>>a>>b;
	cout<<"GCD of the two given numbers = "<<gcd(a,b);
	cout<<"\nLCM of the two given numbers = "<<lcm(a,b);
}
