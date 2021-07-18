#include<iostream>
using namespace std;
class copyco
{
	public:
		int x,y;
		public:
			copyco(int x1,int y1)
			{
				x=x1;
				y=y1;
			}
			copyco(const copyco &cp)
		{
			x=cp.x;
			y=cp.y;
			
		}
		void display()
	{
		cout<<x<<y;
	}
};
int main()
{
	copyco c1(5,6);
	copyco c2=c1;
	c1.display();
	c2.display();
	return 0;
}
