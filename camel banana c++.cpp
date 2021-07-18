//tb=int(input('bananas at starting='))
//d=int(input('distance to be covered='))
//load_capacity=int(input('max load capacity of camel='))
//lb=0
//start=tb
//for i in range(d):
//    while start>0:
//        start=start-load_capacity
//        if start==1:
//            lb=lb-1
//        lb=lb+2
//    lb=lb-1
//    start=tb-lb
//    if start==0:
//        break
//print(start)

#include<iostream>
using namespace std;
int main()
{
	int total,distance,load_capacity;
	
	cout<<"total=";
	cin>>total;
	
	cout<<"distance to be covered=";
	cin>>distance;
	
	cout<<"load capacity of the camel=";
	cin>>load_capacity;
	
	int lose=0;
	int start;
	 
	start = total;
	
	for(int i=0;i<distance;i++)
	{
		while(start>0)
		{
			start = start - load_capacity;
			
			if(start == 1)
			  {
			    lose = lose - 1;
		      }
		      
		    lose = lose + 2;
		}
		
		lose = lose - 1;
		
		start = total - lose;
		
		if(start == 0)
		   break;
		
	}
	
	cout<<start;
	
	return 0;
}
