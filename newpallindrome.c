#include<stdio.h>
void main()
{
char s[30];
int l=0,flag,i,j;


printf("enter the string\n");
gets(s);

for(i=0;s[i]!='\0';i++)
{ l=l+1;}


for(i=0,j=l-1;j>=i;i++,j--)
{
 
  
    if(s[i]==s[j])
       flag=1;
       else 
       {flag=0;
       break;}
   
 }

    if(flag==1)
    {printf("pallindrome");}
    else
    {printf("not pallindrome");}
    
    
    
}


