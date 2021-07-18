#include <iostream>
using namespace std;
class increment
{
  public:
  double x,y,z;
  public:
  int getx()
  {cin>>x,y,z;}
  increment operator++()
  {
    increment temp;
    temp.x=++x;
    temp.y=++y;
    temp.z=++z;
    return temp;
  }
};
int main() {
	increment obj,i1,i2,i3;
  obj.getx();
  i1=++obj;
  cout<<obj.x;
  i2=++obj;
    cout<<" "<<obj.y;
  i3=++obj;
  cout<<" "<<obj.z;
	return 0;
}
