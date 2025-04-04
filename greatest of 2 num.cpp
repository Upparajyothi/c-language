#include<stdio.h>
main()
{
	int a=5,b=40,c;
	c=a>b ? (a>b ? b:a):(b>a ? b:a);
	printf("%d",c);
}
