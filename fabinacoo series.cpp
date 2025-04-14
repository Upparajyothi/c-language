#include<stdio.h>
int main()
{
int n,nextnumber;
int i,a=0,b=1;
printf("enter numbers");
scanf("%d",&n);
printf("fibnacoo series\n");
for(i=0;i<n;i++)
{
	printf("%d ",a);
nextnumber = a+b;
          a = b;
          b = nextnumber;
      }
      return 0;
  }
          
