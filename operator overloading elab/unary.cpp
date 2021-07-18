#include <iostream>
using namespace std;
class Data
{
  public:
 int x,y;
 
  public:
  void setdata()
  {
    cin>>x>>y;
  }
  
Data operator-()
 {
   Data t;
   t.x=-x;
   
   t.y=-y;
  return t;
 }
 
};

int main()
{
	Data obj;
  obj.setdata();
obj=-obj;
  cout<<obj.x<<" "<<obj.y;
  obj.setdata();
  obj=-obj;
  cout<<"\n";
  cout<<obj.x<<" "<<obj.y;
	return 0;
}
