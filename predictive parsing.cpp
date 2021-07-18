#include<bits/stdc++.h>
using namespace std;

char prol[4][10]={"S","S","A","E"};
char pror[4][10]={"iEtSA","a","eS","b"};
char prod[4][10]={"S->iEtSA","S->a","A->eS","E->b"}; 
char first[5][10]={"i","a","e","$","b"};
char follow[5][10]={"$","e","$","e","t"};
char table[5][6][10];
numr(char c)
{
switch(c)
{
case 'S': return 0;
case 'A': return 1;
case 'E': return 2;
case 'a': return 0;
case 'b': return 1;
case 'e': return 2;
case 'i': return 3;
case 't': return 4;
case '$': return 5;
}
return(2);
}
int main()
{
int i,j,k;
for(i=0;i<4;i++)
for(j=0;j<6;j++)
strcpy(table[i][j]," ");
printf("\nThe following is the predictive parsing table for the following grammar:\n");
for(i=0;i<7;i++)
printf("%s\n",prod[i]);
printf("\nPredictive parsing table is\n");
fflush(stdin);
for(i=0;i<7;i++)
{
k=strlen(first[i]);
for(j=0;j<10;j++)
if(first[i][j]!='@')
strcpy(table[numr(prol[i][0])+1][numr(first[i][j])+1],prod[i]);
}
for(i=0;i<7;i++)
{
if(strlen(pror[i])==1)
{
if(pror[i][0]=='@')
{
k=strlen(follow[i]);
for(j=0;j<k;j++)
strcpy(table[numr(prol[i][0])+1][numr(follow[i][j])+1],prod[i]);
}
}
}
strcpy(table[0][0]," ");
strcpy(table[0][1],"a");
strcpy(table[0][2],"b");
strcpy(table[0][3],"e");
strcpy(table[0][4],"i");
strcpy(table[0][5],"t");
strcpy(table[0][6],"$");
strcpy(table[1][0],"S");
strcpy(table[2][0],"A");
strcpy(table[3][0],"E");
printf("\n--------------------------------------------------------\n");
for(i=0;i<4;i++)
for(j=0;j<7;j++)
{
printf("%-10s",table[i][j]);

if(j==5)
printf("\n--------------------------------------------------------\n");
}

return 0;
}
