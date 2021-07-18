#include<iostream>
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
 int main()
 {
 	int n,i;
 	cin>>n;
 	int a[n];
 	for(i=0;i<n;i++)
 	  cin>>a[i];
 	   
 	   selectionSort(a, n);
	for(i=0;i<n;i++)
	cout<<a[i];
	return 0;
 }
