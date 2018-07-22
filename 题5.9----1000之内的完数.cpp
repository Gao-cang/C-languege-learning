#include<stdio.h>
int main()
{
	int n,i,s;//n:1~1000每个数依次验证。i:对每个n，枚举出他的因数。s:对每个n，储存其因数和。 

	printf("1000之内的完数有:\n");
	for(n=2;n<=1000;n++)//大循环枚举n 
	{
	  	s=0;  
		for(i=1;i<n;i++)//小循环枚举i求因子 
	    {
		if(n%i==0)//因子即是可以被n整除的小于n的整数 
		{s=s+i;}
	    }
	if(s==n) 
	{
	printf("%d ",n);
	printf("its factors are ");
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{printf("%d,",i);}
	}
	printf("\b \n");
	}
	}
	return 0;
}
