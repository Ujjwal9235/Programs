#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int *ptr;
	cout<<"Enter the size of array u want to allocate = ";
	cin>>n;

	ptr = (int*)calloc(n,sizeof(int));

	for(int i=0;i<n;i++)
	{
	   cout<<"Enter the "<<i<<" value of array = ";
	   cin>>ptr[i];
	}

    for(int i=0;i<n;i++)
    {
       cout<<"\nThe "<<i<<" value of array = "<<ptr[i];
    }

    cout<<"\nEnter the size of new array u want to allocate = ";
    cin>>n;

    ptr = (int*)realloc(ptr,n*sizeof(int));
    
    for(int i=0;i<n;i++)
	{
	   cout<<"Enter the "<<i<<" value of array = ";
	   cin>>ptr[i];
	}

    for(int i=0;i<n;i++)
    {
       cout<<"\nThe "<<i<<" value of array = "<<ptr[i];
    }

}