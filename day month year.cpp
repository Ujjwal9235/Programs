#include <iostream>
using namespace std;

	class Date
    {
        public:
		 int day,month,year;
    public:
      Date()
      {
         int x=day;
         int y=month;
         int z=year;
        
      }
      public:
      void display()
      {
	  if (month==1)
      cout<<"J";
      else if(month==2)
      cout<<"f";
        
        
      }
    };

  int main()
  {
  Date d1;
  
  
    
   
  cin>>d1.x>>d1.y>>d1.z; 
  
    
    
 
	return 0;
}
