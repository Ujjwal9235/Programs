#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<string , int> marks;
	marks["satish"] = 95;
	marks["brijesh"] = 90;
	marks["ramesh"] = 92;
	marks.insert({{"DJDJ",98},{"OPOP",99}});
	 map<string,int> :: iterator i;
	 for(i=marks.begin();i!=marks.end();i++)
	 {
	    cout<<(*i).first<<" "<<(*i).second<<"\n";
	 }
	 cout<<"The size is = "<<marks.size()<<"\n";
	 cout<<"The max size is = "<<marks.max_size()<<"\n";
	 cout<<"The empty's return value is = "<<marks.empty()<<"\n";
	 return 0;
}