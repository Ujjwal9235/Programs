//Smallest number with sum of digits as N and divisible by 10^N


#include<iostream>
using namespace std;

int smallestnumber(int n)
{
	if(n==0)
	  cout<<"0";
	  
	if(n%9!=0)
	  cout<<n%9;
	  
	for(int i=0;i<(n/9);i++)
	   cout<<"9";
	  
	for(int i=0;i<n;i++)
	   cout<<"0";
	   
    cout<<"\n";
}

int main()
{
	int n;
	cin>>n;
	cout<<"Smallest number that divisible by 10^"<<n<<" and whose sum of digits is "<<n<<" is = ";
	smallestnumber(n);
	return 0;
}
