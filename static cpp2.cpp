#include<stdio.h>
void fun();
static int i=1;
main()
{
	fun();
	fun();
	fun();
	printf("%d",i);
}
void fun()
{

	printf("%d\n",i);
	i++;
}


