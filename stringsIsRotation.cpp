#include<bits/stdc++.h>
using namespace std;

bool isRotation(string str1,string str2)
{

	if(str1.length() != str2.length())
	{
		return false;
	}
	
		string temp=str1+str1;
	return(temp.find(str2)!=string::npos);
	
}

int main()
{
	string str1,str2;
	cin>>str1>>str2;
	
	if(isRotation(str1,str2))
	{
		cout<<"str2 is rotation of str1 and vice versa";
	}
	else
	cout<<"str2 is not the rotation of str1";
	
	return 0;
}

