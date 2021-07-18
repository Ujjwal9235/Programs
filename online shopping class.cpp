#include <iostream>
using namespace std;
class item
{
  int n;
  int b[100];
  float a[100];
  public:
  void initialize()
  {cin>>n;
  for(int i=0;i<n;i++)
    {
	  cin>>b[i]>>a[i];
	}
  }
  float largest()
  {
  	float max=a[0];
  	for(int i=0;i<n;i++)
  	{
	  if(a[i]>max)
	  max=a[i];
    }
  	cout<<"Largest Price="<<max;
  }
    float sum()
    {
	
    float s=0;
	for(int i=0;i<n;i++)
      s=s+a[i];
      cout<<"Sum of Prices="<<s;
    }
    void displayitems()
    {
	for(int i=0;i<n;i++)
    { cout<<b[i]<<" and "<<a[i]<<"\n";
    }
	}
  };

int main() {
 item i1;
 
 i1.initialize();
 i1.largest();
 cout<<"\n";
 i1.sum();
 cout<<"\n";
 i1.displayitems();
 
  
	return 0;
}
