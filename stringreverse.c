#include<stdio.h>
#include<string.h>

char reverse(char s[50])
{

int i,j,l,temp;
l=strlen(s);
for(i=0,j=l-1;i<j;i++,j--)
{temp=s[i];
s[i]=s[j];
s[j]=temp;}
}

void main()
{
char s[50];

printf("enter the string");
gets(s);
reverse(s);
puts(s);

}

