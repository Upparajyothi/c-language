//print array element are prime number or not
#include<stdio.h>
void prime(int n);
main()
{
	int a[100],n,i;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("enter integer %d",i+1);
		scanf("%d",&a[i]);
		prime(a[i]);
	}
}
void prime(int n)
{
	int count=0,i;
for(i=1;i<=n;i++)
{
	if (n%i==0)
	count++;
}
if (count==2)
printf("prime");
else
printf("not prime");

}

	

