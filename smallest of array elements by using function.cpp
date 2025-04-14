//smallest of array elements by using function
#include<stdio.h>
void fun(int a[]);
int n;
int main()
{
	int a[100],i,j,n;
	printf("enter RANGE  of element");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
	    //printf("enter integer %d",i);
		scanf("%d",a[i]);
	}
	    fun(a);
	return 0;
}
     void fun(int a[])
{
	int n,i,smallest;
	  for(i=0;i<n;i++)
	  {
	  	scanf("%d",&a[i]);
    	smallest=a[i];
	for(i=1;i<n;i++)
	{
		if (a[i]<smallest)
		{
			smallest=a[i];
		}
		//smallest=a[i];
	}
	printf("%d",smallest);
	}
}



