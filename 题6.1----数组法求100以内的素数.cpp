#include<stdio.h>
#include<math.h>
int main()
{
	int a[99],i,j;
	printf("100以内的素数有：\n");
	for(i=0;i<99;i++)
	{
		a[i]=i+2;
	}
	for(i=0;i<99;i++)//大循环：检测每个目标数
	{
		for(j=0;j<=i-1;j++)//小循环：每个用来检测的除数（2-目标数的平方根 ） 
		{
			if(a[i]%a[j]==0)
			break;
		}
		if(j>i-1)
		{
			printf("%d\n",a[i]);
		}
	} 
	return 0;
}
