#include <stdio.h>

int main()
{
    char pass[20];
	scanf("%s",pass);
	char ch = pass[0];
	int i;
	int count=0;
  
    
    while (ch != '\0') {
        ch = pass[i];
        if (isspace(ch))
            count++;
  
        i++;
    }
	
	

if(count>=1)
{
	printf("%s is invalid",pass);
}
else


if((isdigit(pass[4]) != 0))
{
	printf("%s is valid",pass);
}
else
{
	printf("%s in invalid",pass);
}
return 0;
}

