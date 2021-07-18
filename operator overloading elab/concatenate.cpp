#include <iostream>
#include<string.h>
using namespace std;
class concatenate
{
  public:
  char s1[100];
  public:
  void read()
  {
    cin>>s1;
  }
  void show()
  {
    cout<<s1;
  }
  concatenate operator +(concatenate c)
  {
    concatenate temp;
    strcat(s1,c.s1);
    strcpy(temp.s1,s1);
    return temp;
  }
};
int main() {
	concatenate obj,c1,c2;
  obj.read();
  c1.read();
  c2=obj+c1;
  c2.show();
	return 0;
}
