#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
         if (a[j] < a[min])
            min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}

int main() {
  int n,i,j,q,k,m,sum,y;
    cin>>n;
  int a[n];
  for(i=0;i<n;i++)
    cin>>a[i];
  
 selectionSort(a,n);
  
  cin>>m;
  
  for(j=0;j<m;j++)
  {sum=0;
    cin>>q;
     if(q>a[n-1])
     {
    for(k=0;k<n;k++)
      sum=sum+a[k];
       
    cout<<a[n-1]<<" "<<sum<<"\n";
      
     }
    else
    {y==q;
	while(q--)
     sum=sum+a[q-1];
	
	 
     
    cout<<y<<" "<<sum<<"\n";
    
    }
  }
  

  return 0;
}
