#include <iostream>
using namespace std;
class b
{
public:
virtual void show()
{
cout<<"\n Showing base class....";
}
virtual void display()
{
cout<<"\n Displaying base class...." ;
}
};
class d:public b
{
public:
void display()
{
cout<<"\n Displaying derived class....";
}
void show()
{
cout<<"\n Showing derived class....";
}
};
class f:public d
{
void display()
{
cout<<"ujjwal";
}
};
int main()
{
b B;
b *ptr;
cout<<"\n\t P points to base:\n" ; ptr=&B; ptr->display();
ptr->show();
cout<<"\n\n\t P points to derived:\n"; d D; ptr=&D; ptr->display();
ptr->show();
f F;
d *ptr1;
ptr1->display();
}
