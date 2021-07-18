#include <iostream>
using namespace std;
static void mergeSort(int a[],int n)
{int i,j,temp;
  for(i=0;i<n;i++)
  {  for(j=0;j<n-1-i;j++)
    { if(a[j]>a[j+1])
      { temp=a[j];
  a[j]=a[j+1];
  a[j+1]=temp;
      }
    }
  }
}
int main() {
  int x,n,k,l,i,s,s2;
  cin>>x;
  for(i=0;i<x;i++)
  {
    cin>>n;
    cin>>k;
    int a[n];
    for(l=0;l<n;l++)
      cin>>a[l];
    
    mergeSort(a,n);
   s=a[0]+a[1];
    s2=a[n-1]+a[n-2];
    cout<<s<<" "<<s2;
    cout<<"\n";
  }
  
	
	return 0;
}
