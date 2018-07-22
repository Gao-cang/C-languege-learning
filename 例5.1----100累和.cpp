#include<stdio.h>
int main()
{
	int sum,i;
	i=1,sum=0;
	while(i<=100)
	{
	sum=sum+i;
	i++;
	}
	printf("sum=%d",sum);
	return 0;
}
