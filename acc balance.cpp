#include <iostream>
using namespace std;
class AccBalance
{public:
  AccBalance()
  {
    cout<<"Zero Balance";
  }
 public:
  AccBalance(float bal)
  {
    if(bal<0)
      cout<<"Negative";
    
    else if(bal>=0)
      cout<<"Positive";
  }
};

int main() 
{
  float balance;
  cin>>balance;
	AccBalance defltBal;
	cout<<"\n";
	
  AccBalance currBal(balance);
  
  
  
	return 0;
}
