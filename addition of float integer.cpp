#include<stdio.h>
#define R 2 
#define C 2
main()
{
	float a[R][C],b[R][C],c[R][C];
	int i,j;
	printf("enter matrix1");
	for(i=0;i<R;i++)
	for(j=0;j<C;j++)
	scanf("%f",&a[i][j]);
	printf("enter matrix2");
	for(i=0;i<R;i++)
	for(j=0;j<C;j++)
	scanf("%f",&b[i][j]);
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%0.1f\t",c[i][j]);
		}
		printf("\n");
		}
	}
	
	

	

