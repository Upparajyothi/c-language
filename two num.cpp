#include<stdio.h>
main()
{
	int a=5,b=40,c=30,d;
	d=a>b ? (a>c ? a : c):(b>c ? b : c);
	printf("%d",d);
	
}
