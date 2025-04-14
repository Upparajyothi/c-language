#include<stdio.h>
int main()
{
	int arr[15],ele,i,small,range;
	//ele=sizeof(arr)/sizeof(arr[0]);
	printf("enter the range");
	scanf("%d",&ele);
	printf("enter the elements");
	for(i=0;i<ele;i++)
	{
		scanf("%d",&arr[i]);
		printf("%d ",arr[i]);
	}
	small=arr[0];
	//int large=arr[0];
	for(i=1;i<ele;i++)
	{
		
		if(arr[i]<small)
		small=arr[i];
	}
	printf("small element=%d\n",small);
}
