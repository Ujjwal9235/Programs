#include <iostream>
using namespace std;
class vector
{
  public:
  int x,y,z;
  public:
  void input()
  {
    cin>>x>>y>>z;
  }
  vector operator+(vector b)
  {
    vector temp;
    temp.x=x+b.x;
    temp.y=y+b.y;
    temp.z=z+b.z;
    return temp;
  }
};
int main() {
	vector v1,v2,v3;
  v1.input();
  v2.input();
  v3=v1+v2;
  cout<<"Sum="<<v3.x<<"i+"<<v3.y<<"j+"<<v3.z<<"z";
	return 0;
}
