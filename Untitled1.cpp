//#include<iostream>
//#include<fstream>
//#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
//using namespace std;
//int main()
//{
//	string ch;
//	ifstream file("prog.cpp");
//	while(!file.eof())
//	{
//	  ch = file.get();
//	  
//	  if(ch=="{"||ch=="}"||ch=="("||ch==")"||ch=="["||ch=="]"||ch==";"||ch==",")
//	  {
//	     cout<<ch<<" is a seperater"<<"\n";
//	  }
//	  if(ch==" ")
//	  {
//	  	
//	  	continue;
//	  }
//	  
//	  if(ch == "void"||ch=="int"||ch=="float"||ch=="main" )
//	  {
//	  	cout<<ch<<" is a keyword"<<"\n"; 
//	  	
//	  	
//	  }
//	  
//	  if(ch =="="||ch=="+"||ch=="-"||ch=="*"||ch=="&"||ch=="?")
//	  {
//	  	cout<<ch<<" is a operator"<<"\n";
//	  }
//	  else
//	  {
//	  	
//		  cout<<ch<<" is a indentifier"<<"\n";
//	  }
//	  
//	}
//	
//	file.close();
//}
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
 
using namespace std;
 
int isKeyword(char buffer[]){
	char keywords[32][10] = {"auto","break","case","char","const","continue","default",
							"do","double","else","enum","extern","float","for","goto",

 
							"if","int","long","register","return","short","signed",

 
							"sizeof","static","struct","switch","typedef","union",
							"unsigned","void","volatile","while"};
	int i, flag = 0;
	
	for(i = 0; i < 32; ++i){
		if(strcmp(keywords[i], buffer) == 0){
			flag = 1;
			break;
		}
	}
	
	return flag;
}
 
int main(){
	char ch, buffer[15], operators[] = "+-*/%=";
	ifstream fin("prog.cpp");
	int i,j=0;
	
	if(!fin.is_open()){
		cout<<"error while opening the file\n";
		exit(0);
	}
	
	while(!fin.eof()){
   		ch = fin.get();
   		
		for(i = 0; i < 6; ++i){
   			if(ch == operators[i])
   				cout<<ch<<" is operator\n";
   		}
   		
   		if(isalnum(ch)){
   			buffer[j++] = ch;
   		}
   		else if((ch == ' ' || ch == '\n') && (j != 0)){
   				buffer[j] = '\0';
   				j = 0;
   				   				
   				if(isKeyword(buffer) == 1)
   					cout<<buffer<<" is keyword\n";
   				else
   					cout<<buffer<<" is indentifier\n";
   		}
   		
	}
	
	fin.close();
	
	return 0;
}
