#include <iostream>
using namespace std;
void printArr(int arr[],int size)
{
  int i,j,temp;
  for(i=0;i<size;i++)
  {
    if(i==2)
    {
      for(j=0;j<size-1-i;j++)
      {
        if(arr[j]>arr[j+1])
        { 
          temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
        }
      }
      for(j=0;j<size;j++)
        cout<<arr[j]<<" ";
    }
    else
    {
      for(j=0;j<size-1-i;j++)
      {
        if(arr[j]>arr[j+1])
        { 
          temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
        }
      }
    }
  }
}

int main()
{
  int size,i;
  cin>>size;
  int arr[size];
  for(i=0;i<size;i++)
    cin>>arr[i];
  
  
  
  
  printArr(arr,size);
  cout<<"\n";
 cout<<"Sorted array:";
  for(i=0;i<size;i++)
    cout<<arr[i]<<" ";
return 0;
    
}
