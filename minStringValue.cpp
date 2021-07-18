//Minimum sum of squares of character counts in a given string after removing k characters

#include<bits/stdc++.h>
using namespace std;

const int mchar = 26;

int minvalue(string str, int k)
{
	vector<int> v;
	int l = str.length();
	
	if(k>=l)
	  return 0;
	  
	int freq[mchar]={0};
	
	for(int i=0;i<l;i++)
	{
		freq[str[i] - 'a']++;
	}
	
	for(int i=0;i<26;i++)
	{
	    if(freq[i]==0)
	      break;
	      
	      
		v.push_back(freq[i]);
	}
	
//	sort(v.begin(), v.end());
	
	while(k--)
	{   sort(v.begin(),v.end());
		int temp = v.back();
		v.pop_back();
		temp=temp-1;
		if(temp==0)
		   break;
		
		v.push_back(temp);
	}
	
	int result=0;
	
	while(!v.empty())
	{
		int temp = v.back();
		
		result = result + (temp*temp);
		
		v.pop_back();
		
	}
	
	return result;
	  
}

int main()
{
	string str;
	int k;
	cin>>str;
	cin>>k;
	cout<<minvalue(str,k);
	return 0;
}
