#include<bits/stdc++.h>
using namespace std;



void rearrange(int arr[],int n,int k)
{
	stable_sort(arr,arr+n,[k](int a,int b)
	{
	  return abs(k-b)>abs(k-a); 
	});
} 

int main()
{   int n,k;
    cin>>n;
	cin>>k;
	int arr[k];
	for(int i=0;i<n;i++)
	{
	  cin>>arr[i];
	}
    rearrange(arr,n,k);
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
   return 0;
}