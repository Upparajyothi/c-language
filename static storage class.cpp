#include<stdio.h>
void fun();
main()
{
	fun();
	fun();
	fun();
//	printf("%d",i);
}
void fun()
{
	static int i=1;
	printf("%d\n",i);
	i++;
}


