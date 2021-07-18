#include <iostream>
using namespace std;
class Decimal
{
  public:
  float n;
  
void input()
  {
    cin>>n;
  }
  void operator --()
  {
    --n;
  }
};
int main()
{
	Decimal obj;
  obj.input();
  --obj;
  cout<<obj.n+1-0.1;
	return 0;
}
