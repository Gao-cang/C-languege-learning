#include<stdio.h>
int main()
{
	int a[10][10],i,j;
	a[0][0]=1; 
	for(i=1;i<10;i++)
	{
		a[i][0]=1;
		a[i][i+1]=0;
		for(j=1;j<i+1;j++)
		{
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
