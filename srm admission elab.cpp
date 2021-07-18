#include <iostream>
using namespace std;
class Student
{

  
  public:
  
  void Identity(char name[100],int id)
  {
    cin>>name;
    cin>>id;
    cout<<name<<" "<<id;
  }
  public:
  void Identity(int id,char name[100])
  {
    
    cin>>id;
    cin>>name;
    cout<<name<<" "<<id;
  }
};
int main() 
{char x[100];
 int y;
 Student s1;
 s1.Identity(x,y);
 cout<<"\n";
 s1.Identity(y,x);
 
	return 0;
}
