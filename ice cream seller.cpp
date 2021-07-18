#include <iostream>
using namespace std;
class matrix
{public:
 int gs,gl,ms,ml;
 float sp,lp,greentea,mocha;
  void get()
  {
    cin>>gs>>gl;
    cin>>ms>>ml;
    cin>>sp>>lp;
  }
  void put()
  {
    cout<<greentea<<"\n"<<mocha;
  }
 matrix operator *()
 {
   matrix temp;
   temp.greentea=(gs*sp)+(gl*lp);
   temp.mocha=(ms*sp)+(ml*lp);
   return temp;
 }
};
int main() {
	matrix m1,m2;
  m1.get();
  m2=*m1;
  m2.put();
	return 0;
}
