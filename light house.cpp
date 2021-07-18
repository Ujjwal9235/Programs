#include <iostream>
using namespace std;
class Time
{
  public:
  int hours,mins,secs;
  public:
  friend ostream &operator<<(ostream &out , Time &t);
  friend istream &operator>>(istream &in , Time &t);
};
istream &operator >> (istream &in , Time &t)
  
  {
    in>>t.hours;
    in>>t.mins;
    in>>t.secs;
    return(in);
}
ostream &operator << (ostream &out , Time &t)
  {
    out<<t.hours<<" Hours "<<t.mins<<" Mins "<<t.secs<<" secs ";
    
    return(out);
    
  }

int main() {
	Time t1;
  cin>>t1;
  cout<<t1;
	return 0;
}
