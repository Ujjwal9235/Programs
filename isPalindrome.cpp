#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string s)
{
	
	int x=1;
	string r=s;
	reverse(s.begin(),s.end());
	if(r==s)
	  return x;
	else
	  return x-1;
}

int main()
{
	string s;
	cin>>s;
	cout<<isPalindrome(s);
	return 0;
}
