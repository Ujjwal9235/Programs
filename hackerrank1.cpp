#include<bits/stdc++.h>
using namespace std;

int findTheNumberOfBitsToChangeToMakeAandBequal(int a,int b)
{
	int n = a^b;
	int count=0;

	while(n!=0)
	{
		n = n & (n-1); //this will remove 1 from the most significant bit example: 1101 -> 1100 and again if we do 1100 -> 1000
		count++;
	}

	cout<<count;
	return 0;
}

int findTheithBitinA(int a,int i)
{
	int mask = 1<<i;
    if(a & mask == 0)
    	cout<<"The "<<i<<"th bit in a is : 0";
    else cout<<"The "<<i<<"th bit in a is : 1";

    return 0;
}

int setithBitTo1inA(int a,int i)
{
	int mask = 1<<i;
	int x = a | mask;
	cout<<x;
	return 0;
}

int changeithBitTo0inA(int a,int i)
{
	int mask = ~(1<<i);
	int x = a & mask;
	cout<<x;
	return 0;
}

int main()
{   int a,b,i;
	
	cin>>a>>b;
	cin>>i;
	findTheNumberOfBitsToChangeToMakeAandBequal(a,b);
	cout<<endl;
	findTheithBitinA(a,i);
	cout<<endl;
	setithBitTo1inA(a,i);
	cout<<endl;
	changeithBitTo0inA(a,i);

	return 0;

}