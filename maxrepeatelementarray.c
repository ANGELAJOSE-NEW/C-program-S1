#include<stdio.h>
void main()
{

int a[100],i,n,key,frequency=0,maxrepeat=0,temp,newfrequency,j
;

printf("enter the array size:\t");
scanf("%d",&n);
printf("enter the elements of array:\t");
for(i=0;i<n;i++)
{

scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{ 
  for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
      newfrequency=newfrequency+1;}
      
      if(newfrequency>frequency)
      {frequency=newfrequency;
      newfrequency=0;
            maxrepeat=a[i];}
      }
      printf("max repeated element is %d",maxrepeat);
      
      }
      
      
      

