
#include<iostream> 
using namespace std; 
  
void findConsecutive(int N) 
{ 
     
    int start = 1, end = (N+1)/2; 
  
    
    while (start < end) 
    { 
         
        int sum = 0; 
        for (int i = start; i <= end; i++) 
        { 
            sum = sum + i; 
  
             
            if (sum == N) 
            { 
               
                for (int j = start; j <= i; j++) 
                    cout<<j<<" "; 
  
              cout<<"\n"; 
                break; 
            } 
  
            
            if (sum > N) 
                break; 
        } 
         
        start++; 
    } 
} 
  

int main() 
{ 
    int N;
  cin>>N;
    findConsecutive(N); 
    return 0; 
}
