#include <iostream>
using namespace std;
class Salary
{public:
	int currsal;
  public:
  int Increment(int currsal)
  {
    
    
  cout<<currsal;
 
  }
  public:
  int Increment(int currsal,int bonus)
  {
 
    cin>>bonus;
    cout<<currsal+bonus;
  }
};
int main() {
	Salary ob;
  int currsal,bonus;
cin>>currsal;
ob.Increment(currsal);

 
  

  cout<<"\n";
  ob.Increment(currsal,bonus);
 
	return 0;
}
