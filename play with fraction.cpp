#include <iostream>
using namespace std;
class Fraction
{
  public:
  int numerator,denominator;
  public:
  int nd()
  {
    cin>>numerator>>denominator;
    
  }
  int show()
  {
    cout<<numerator<<"/"<<denominator;
  }
  Fraction operator+(Fraction f)
  {
    Fraction temp;
    
    temp.numerator=(numerator*f.denominator)+(denominator*f.numerator);
    temp.denominator=denominator*f.denominator;
    return(temp);
  }
  
};
int main() 
{
  Fraction obj,f1,f2;
  f1.nd();
  f2.nd();
  obj=f1+f2;
  obj.show();
	
	return 0;
}
