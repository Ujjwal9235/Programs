#include <iostream>
using namespace std;
void input(int *arr,int len, bool init, int i)
{
  if(init)
    for(i=0;i<len;i++)
      cin >> arr[i];
  else
    for(i=0;i<len;i++)
      arr[i]=-999;
}

void sort(int *arr, int len)
{
  int i, j;
  for(i=0;i<len-1;i++)
  {
    for(j=i+1;j<len;j++)
	{
      if(arr[i]>arr[j])
	  {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }     
}

void sortfreq(int *arr, int *arr2, int len)
{
  int i, j;
  for(i=0;i<len-1;i++)
  {
    for(j=i+1;j<len;j++)
	{
      if(arr[i]<arr[j])
	  {
        int temp = arr[i];
        int temp2 = arr2[i];
        arr[i]=arr[j];
        arr2[i]=arr2[j];
        arr[j]=temp;
        arr2[j]=temp2;
      }
    }
  }     
}

int main() 
{
  int tc;
  cin >> tc;
  while(tc--)
  {
    int len;
    cin >> len;
    int arr[len];
    int freq[len];
    int i;
    input(arr, len, true, i);
    input(freq, len, false, i);
    sort(arr, len);
    int fci = 0;
    for(i=0;i<len;i++)
	{
      int fc = 1;
      int j;
      for(j=i+1;j<len;j++)
	  {
        if(arr[i]==arr[j]&&arr[i]>-1&&i!=j)
		{
          fc+=1;
          arr[j]=-999;
        }
      }
      if(arr[i]>-1)
	  {
        freq[fci]=fc;
        fci+=1;
      }
    }
    int nlenc = 0;
    for(i=0;i<len;i++)
      if(arr[i]>-1)
        nlenc+=1;
    int new_arr[nlenc];
    int new_freq[nlenc];
    int ic = 0;
    for(i=0;i<len;i++)
	{
      if(arr[i]>-1)
	  {
        new_arr[ic]=arr[i];
        ic+=1;
      }
    }

    int nic = 0;
    for(i=0;i<len;i++)
	{
      if(freq[i]>-1)
	  {
        new_freq[nic]=freq[i];
        nic+=1;
      }
    }

    sortfreq(new_freq, new_arr, nlenc);

    for(i=0;i<nlenc;i++)
	{
      int c1 = new_freq[i];
      while(c1--)
        cout << new_arr[i]<<" ";
    }
    cout << "\n";
  }
    
  getch();
}
