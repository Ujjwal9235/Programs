#include <iostream>
using namespace std;
class increment
{
  public:
  double x,y,z;
  public:
  void getx()
  {
    cin>>x>>y>>z;
  }
  void show()
  {
    cout<<x<<" "<<y<<" "<<z;
  }
  public:
    void operator ++();
};
void increment::operator ++()
  {
    ++x;
    ++y;
    ++z;
  }
int main() 
{
  increment obj;
  obj.getx();
  ++obj;
  obj.show();
	return 0;
}
