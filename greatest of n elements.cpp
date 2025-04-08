#include<stdio.h>
 main()
{
	int a[1000],i,j,greatest;
	printf("enter no of elements");
	scanf("%d",&j);
	printf("enter %d elements",j);
	for(i=0;i<j;i++)
	scanf("%d",&a[i]);
	greatest=a[0];
	for(i=1;i<j;i++)
	{
		if(a[i]>greatest)
		greatest=a[i];
	}
	printf("%d",greatest);
	}
	

