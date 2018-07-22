#include<stdio.h>
#include<math.h>
int main()
{
	int k,j,i,n;
	for(i=1;i<=7;i++)
	{
		k=abs(4-i);
		j=7-k*2;
		for(n=1;n<=k;n++)
		{
			printf(" ");
		}
		for(n=1;n<=j;n++)
		{
			printf("*");
		}
		for(n=1;n<=k;n++)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
