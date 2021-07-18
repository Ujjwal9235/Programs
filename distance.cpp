#include <iostream>
using namespace std;
class Distance
{private:
 int f,i;
 public:
  void readDistance(void)
  {
    cin>>f>>i;
  }
  void dispDistance()
  {
    int r,x;
    r=i%12;
    x=i/12;
    cout<<"Feet:"<<f+x<<" Inches:"<<r;
  }
  Distance operator +(Distance d)
  {
    Distance temp;
    temp.f=f+d.f;
    temp.i=i+d.i;
    return temp;
  }
};
int main() {
  Distance d1,d2,d3;
  d1.readDistance();
  d2.readDistance();
  d3=d1+d2;
  d3.dispDistance();
	
	return 0;
}
