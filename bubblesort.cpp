#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n)
{
	
	for(int i=0;i<n;i++)
	{
	for(int j = 0;j<n-i-1;j++)
	{
	if(arr[j]>arr[j+1])
	{
	int temp = arr[j];
	arr[j] = arr[j+1];
	arr[j+1] = temp;
	}
	}
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++)
	cin>>arr[i];

	bubblesort(arr,n);

	for(int i = 0 ;i<n;i++)
	cout<<arr[i];

   return 0;
}

