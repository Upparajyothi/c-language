#include<stdio.h>
main()
{
	int a=5,b=4;
	printf("before swaping a=%d b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping a=%d b=%d\n",a,b);
}
