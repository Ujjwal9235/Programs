#include<bits/stdc++.h>
using namespace std;

string reorderSpaces(string text) 
{
    int spaces=0,spacebw,extra;
    string w,re;
        vector<string> cw;
        
        for(char ch : text)
        {
            if(ch!=' ')
            {
                w=w+ch;
            }
            else if(ch==' ')
            {
                spaces++;
                
                if(!w.empty())
                {
                    cw.push_back(w);
                }
                w="";
                    
            }
              
        }
        
      if(!w.empty())
      {
          cw.push_back(w);
      }
       int d=cw.size();
        if(d!=1){
        spacebw=spaces/(d-1);
        extra=spaces%(d-1);
        }
        
        
      if(d==1)
      {
          return cw.back() + string(spaces,' ');
      }
    else {
      for(string wo : cw)
      {
          re+= wo + string(spacebw,' ');
      }
        int x= re.size()-spacebw;
        return re.substr(0,x) + string(extra,' ');
    }
}

int main()
{
	string text;
	cin>>text;
	reorderSpaces(text);
	
	return 0;
}
