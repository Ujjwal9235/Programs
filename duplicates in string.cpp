#include<bits/stdc++.h>
using namespace std;



int duplicates(string str)
{
	
	int ar[26];
   for(int i=0;i<str.length();i++) {
	        int j = str.at(i) -'a';
	        if(ar[j]==0) {
	            ar[j]= 1;
	        }else {
	            ar[j]+= 1;
	        }
	    }   
	    int l = sizeof(ar)/sizeof(ar[0]);
	    // print only those alphabets having frequency greater then 1.
	    for(int i=0;i<l;i++) {
	        if(ar[i]!=0 && ar[i]>1) {
	            char c = (char) (97+i);
	            cout<<c<<" ,counts = "<<ar[i];
	        }
	    }
}

int main()
{
	string str;
	cin>>str;
	duplicates(str);
	
	return 0;
	
}
