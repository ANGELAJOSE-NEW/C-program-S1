#include<stdio.h>
void main()
{

int a[100],i,n,max=0,min=99999;

printf("enter the array size:\t");
scanf("%d",&n);
printf("enter the elements of array:\t");
for(i=0;i<n;i++)
{

{scanf("%d",&a[i]);}
if(a[i]>max){max=a[i];}
if(a[i]<min){min=a[i];}
}
printf("max is %d and min is %d",max,min);


}

