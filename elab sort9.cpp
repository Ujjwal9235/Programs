#include<iostream>
using namespace std;
void sort(int a[],int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n-i-1;j++)
  	{ 
  	  if(a[j]>a[j+1])
  	  {
  	  	temp=a[j];
  	  	a[j]=a[j+1];
  	  	a[j+1]=temp;
		}
  	  }
	  }	
}
int main()
{  
    int x,j,n,i,k,sum,k1,k2;
	cin>>x;
	for(j=0;j<x;j++)
	{
	sum=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	sort(a,n);
	
	k=0;
	cin>>k1>>" ">>k2;
	for(k=k1+1;k<k2;k++)
	sum=sum+a[i];
	
	cout<<sum<<"\n";
}
return 0;
}
