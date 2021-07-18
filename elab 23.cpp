#include <iostream>
#include <iomanip>
using namespace std;
class profit
{
  
 
 public:
  profit(int income,int expenses)
  {double p=0;
  p=income-expenses;
   double per=(p/expenses)*100;
    printf("%.2f",per);
    cout<<"%";
  }
};
int main() 
{
	int i,e;
  cin>>i>>e;
  
  profit share(i,e);
  
  
  
return 0;
}
