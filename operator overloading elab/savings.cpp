#include <iostream>
using namespace std;
class Money
{
  public:
  int r,p;
  public:
  void is()
  {
    cin>>r>>p;
  }
  void sm()
  {
    cin>>r>>p;
  }
  void em()
  {
    cin>>r>>p;
  }
  Money operator + (Money m)
  {
    Money temp;
    temp.r=r+m.r;
    temp.p=p+m.p;
    return temp;
  }
  Money operator - (Money m)
  {
    Money temp;
    temp.r=r-m.r;
    temp.p=p-m.p;
    return temp;
  }
  
};
int main() {
	Money M1,M2,M3;
  M1.is();
  cout<<"\n";
  M2.sm();
  cout<<"\n";
  M3.em();
  M1=M1+M2;
  M1=M1-M3;
  cout<<"Rs="<<M1.r<<" and "<<M1.p<<" Paise";
	return 0;
}
