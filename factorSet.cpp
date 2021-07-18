#include <bits/stdc++.h>
using namespace std; 
// function to print the divisors
void printDivisors(int n)
{
    for (int i=1;i<=n;i++)
        if (n%i==0)
            printf("%d ",i);
}
 
/* Driver program to test above function */
int main()
{
    int n;
    cin>>n;
    printDivisors(n);
    return 0;
}
