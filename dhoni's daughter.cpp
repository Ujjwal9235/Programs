#include<iostream>
using namespace std;
class moon
{public:
float mw;
	int moonw(float ew)
	{
		mw=(ew*16.6)/100;
		cout<<mw;             
	}
	
};
int main()
{
    moon m;
	float ew;
	cin>>ew;
	m.moonw(ew);
	return 0;
}
