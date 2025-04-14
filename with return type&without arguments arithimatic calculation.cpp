#include<stdio.h>
float sum();
int sub();
float mult();
main()
{
	printf("%f\n",sum());
	printf("%d\n",sub());
	printf("%f\n",mult());
	
}
float sum()
{
	int x;
	float y;
	printf("enter int,float");
	scanf("%d%f",&x,&y);
	return x+y;
}
int sub()
{
	int x,y;
	printf("enter integers");
	scanf("%d%d",&x,&y);
	return x-y;
}
float mult()
{
	int x;
	float y;
	printf("enter int,float");
	scanf("%d%f",&x,&y);
	return x*y;
}


